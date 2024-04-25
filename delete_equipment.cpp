#include "delete_equipment.h"
#include "ui_delete_equipment.h"

delete_equipment::delete_equipment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delete_equipment)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("accs");
    db.setUserName("postgres");
    db.setPassword("Urysapape1");
    if (!db.open()) {
        qDebug() << "Error: connection with database fail";
    } else {
        qDebug() << "Database: connection ok";
    }
}

delete_equipment::~delete_equipment()
{
    delete ui;
    db.close();
}

void delete_equipment::on_pushButton_delete_clicked()
{
    QString part_num        = ui->part_num->text();
    QString invent_num      = ui->invent_num->text();

    QSqlQuery      *QueryLoadData    = new QSqlQuery(db);

    if(part_num == "" || invent_num == "")
    {
        QMessageBox::warning(this, "Ошибка", "Поля Артикул и Инвентарный номер должны быть заполнены!");
    }
    else{
        QMessageBox::StandardButton reply;
        reply                        = QMessageBox::question(this, "Удаление", "Вы действительно хотите удалить данное оборудование?", QMessageBox::Yes | QMessageBox::No);
        if(reply == QMessageBox::Yes)
        {
            QueryLoadData->prepare("DELETE FROM part_list WHERE (part_num='" + part_num + "' AND invent_number='" + invent_num + "')");
            QueryLoadData->exec();
        }
    }
}


void delete_equipment::on_pushButton_show_clicked()
{
    QString part_num        = ui->part_num->text();
    QString invent_num      = ui->invent_num->text();

    QSqlQueryModel *model            = new QSqlQueryModel();
    QSqlQuery      *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT * FROM part_list WHERE (part_num='" + part_num + "' AND invent_number='" + invent_num + "')");
    QueryLoadData->exec();

    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Склад"));
    model->setHeaderData(1, Qt::Horizontal, tr("Адрес ячейки"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наим.(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наим.(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Произв."));
    model->setHeaderData(5, Qt::Horizontal, tr("Артикул"));
    model->setHeaderData(6, Qt::Horizontal, tr("Оборудование"));
    model->setHeaderData(7, Qt::Horizontal, tr("Инв. номер"));
    model->setHeaderData(8, Qt::Horizontal, tr("Акт. кол-во"));
    model->setHeaderData(9, Qt::Horizontal, tr("Мин. кол-во"));

    ui->tableView_show_item->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_show_item->setModel(model);

    delete QueryLoadData;

    QSqlDatabase::database().commit();
}
