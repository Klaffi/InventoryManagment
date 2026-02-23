#include "mainpage_user.h"
#include "ui_mainpage_user.h"
#include "login.h"


MainPage_user::MainPage_user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainPage_user)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("accs");
    db.setUserName("postgres");
    db.setPassword("xxxx");

    if (!db.open()) {
        qDebug() << "Error: connection with database fail";
    } else {
        qDebug() << "Database: connection ok";
    }

    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery      *qry         = new QSqlQuery(db);

    qry->prepare("SELECT DISTINCT name_ru FROM part_list");
    qry->exec();

    model->setQuery(std::move(*qry));

    ui->name_ru_user->setModel(model);

    delete qry;
}

MainPage_user::~MainPage_user()
{
    delete ui;
    db.close();
}

void MainPage_user::on_search_btn_user_clicked()
{
    QString name_ru         = ui->name_ru_user->currentText();
    QString name_en         = ui->name_en_user->text();
    QString manufacturer    = ui->manufacturer_user->text();
    QString part_num        = ui->part_num_user->text();
    QString invent_num      = ui->invent_num->text();

    QString name_ru_str;
    QString name_en_str;
    QString manufacturer_str;
    QString part_num_str;
    QString invent_num_str;

    if(name_ru == "")
        name_ru_str         = "";
    else
        name_ru_str         = "lower(name_ru)=lower('" + name_ru + "')";
    if(name_en == "")
        name_en_str         = "";
    else
        name_en_str         = "AND lower(name_en)=lower('" + name_en + "')";
    if(manufacturer == "")
        manufacturer_str    = "";
    else
        manufacturer_str    = "AND lower(manufacturer)=lower('" + manufacturer + "')";
    if(part_num == "")
        part_num_str        = "";
    else
        part_num_str        = "AND lower(part_num)=lower('" + part_num + "')";
    if(invent_num == "")
        invent_num_str      = "";
    else
        invent_num_str      = "AND lower(invent_number)=lower('" + invent_num + "')";

    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    if(name_ru_str == "lower(name_ru)=lower('" + name_ru + "')")
    {
        QueryLoadData->prepare("SELECT repository, cell_addr, name_ru, name_en, manufacturer, part_num, equipment, invent_number, act_count, min_count FROM part_list"
                               " WHERE("+ name_ru_str + name_en_str + manufacturer_str + part_num_str + invent_num_str+")" );
    }
    else if(name_ru_str == "" && name_en_str == "" && manufacturer_str == "" && part_num_str == "" && invent_num_str == "")
    {
        QueryLoadData->prepare("SELECT repository, cell_addr, name_ru, name_en, manufacturer, part_num, equipment, invent_number, act_count, min_count FROM part_list");
    }

    QueryLoadData->exec();
    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Склад"));
    model->setHeaderData(1, Qt::Horizontal, tr("Адрес ячейки"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наименование(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Производитель"));
    model->setHeaderData(5, Qt::Horizontal, tr("Артикул"));
    model->setHeaderData(6, Qt::Horizontal, tr("Оборудование"));
    model->setHeaderData(7, Qt::Horizontal, tr("Инвентарный номер"));
    model->setHeaderData(8, Qt::Horizontal, tr("Актуальное количество"));
    model->setHeaderData(9, Qt::Horizontal, tr("Минимальное количество"));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);

    delete QueryLoadData;

    QSqlDatabase::database().commit();
}



void MainPage_user::on_tableView_doubleClicked(const QModelIndex &index)
{
    take_place *tkplc       = new take_place();

    tkplc->show();

    QModelIndex idx         = index;
    idx                     = idx.sibling(idx.row(), 7);
    QString invent_num      = idx.data().toString();

    connect(this, &MainPage_user::signal, tkplc, &take_place::slot);
    emit signal(invent_num);
}


void MainPage_user::on_pushButton_clicked()
{
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);
    QueryLoadData->prepare("SELECT * FROM logs ORDER BY logdate DESC");
    QueryLoadData->exec();
    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Дата"));
    model->setHeaderData(1, Qt::Horizontal, tr("Фамилия Имя"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наименование(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Производитель"));
    model->setHeaderData(5, Qt::Horizontal, tr("Количество исп. оборудования"));
    model->setHeaderData(6, Qt::Horizontal, tr("Комментарий"));

    ui->logs_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->logs_table->setModel(model);

    delete QueryLoadData;

}

void MainPage_user::on_pushButton_all_clicked()
{
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT repository, cell_addr, name_ru, name_en, manufacturer, part_num, equipment, invent_number, act_count, min_count FROM part_list");
    QueryLoadData->exec();

    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Склад"));
    model->setHeaderData(1, Qt::Horizontal, tr("Адрес ячейки"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наименование(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Производитель"));
    model->setHeaderData(5, Qt::Horizontal, tr("Артикул"));
    model->setHeaderData(6, Qt::Horizontal, tr("Оборудование"));
    model->setHeaderData(7, Qt::Horizontal, tr("Инвентарный номер"));
    model->setHeaderData(8, Qt::Horizontal, tr("Актуальное количество"));
    model->setHeaderData(9, Qt::Horizontal, tr("Минимальное количество"));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);

    delete QueryLoadData;

    QSqlDatabase::database().commit();
}
