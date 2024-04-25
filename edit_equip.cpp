#include "edit_equip.h"
#include "ui_edit_equip.h"

edit_equip::edit_equip(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::edit_equip)
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

edit_equip::~edit_equip()
{
    delete ui;
    db.close();
}

void edit_equip::on_pushButton_show_clicked()
{
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT repository, cell_addr, name_ru, name_en, manufacturer, part_num, equipment, invent_number, act_count, min_count FROM part_list");
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

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);

    delete QueryLoadData;

    QSqlDatabase::database().commit();
}


void edit_equip::on_pushButton_edit_clicked()
{
    QString rep             = ui->lineEdit_rep->text();
    QString cell_addr       = ui->lineEdit_cell_addr->text();
    QString name_ru         = ui->lineEdit_name_ru->text();
    QString name_en         = ui->lineEdit_name_en->text();
    QString manufacturer    = ui->lineEdit_manufacturer->text();
    QString part_num        = ui->lineEdit_part_num->text();
    QString equipment       = ui->lineEdit_equipment->text();
    QString invent_num      = ui->lineEdit_invent_num->text();
    QString act_count       = ui->lineEdit_act_count->text();
    QString min_count       = ui->lineEdit_min_count->text();
    QString comment         = ui->lineEdit_comment->text();

    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("UPDATE part_list SET repository='" + rep + "', cell_addr='" + cell_addr + "', name_ru='" + name_ru + "', name_en='" + name_en + "',"
                           "manufacturer='" + manufacturer + "', part_num='" + part_num + "', equipment='" + equipment + "', invent_number='" + invent_num + "',"
                           "act_count='" + act_count + "', min_count='" + min_count + "', user_comment='" + comment + "' WHERE part_num='"+part_num+"' OR invent_number='" + invent_num + "'");

    QueryLoadData->exec();
    model->setQuery(std::move(*QueryLoadData));

    delete QueryLoadData;

    this->hide();
}

