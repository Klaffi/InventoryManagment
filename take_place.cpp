#include "take_place.h"
#include "ui_take_place.h"

take_place::take_place(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::take_place)
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

    QSqlQueryModel *model = new QSqlQueryModel();
    QSqlQuery      *qry   = new QSqlQuery(db);

    qry->prepare("SELECT * FROM user_name");
    qry->exec();

    model->setQuery(std::move(*qry));
    ui->comboBox->setModel(model);

    delete qry;
}

take_place::~take_place()
{
    delete ui;
    db.close();
}

void take_place::slot(QString a)
{
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);
    invent_number               = a;
    QueryLoadData->prepare("SELECT repository, cell_addr, name_ru, name_en, manufacturer, part_num, equipment, "
                           "invent_number, act_count, min_count FROM part_list WHERE invent_number='"+a+"'");

    QueryLoadData->exec();

    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Склад"));
    model->setHeaderData(1, Qt::Horizontal, tr("Адрес яч."));
    model->setHeaderData(2, Qt::Horizontal, tr("Наим.(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наим.(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Произв."));
    model->setHeaderData(5, Qt::Horizontal, tr("Артикул"));
    model->setHeaderData(6, Qt::Horizontal, tr("Оборуд."));
    model->setHeaderData(7, Qt::Horizontal, tr("Инв. ном."));
    model->setHeaderData(8, Qt::Horizontal, tr("Акт. кол."));
    model->setHeaderData(9, Qt::Horizontal, tr("Мин. кол."));

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setModel(model);

    delete QueryLoadData;
}


void take_place::on_save_clicked()
{
    int             use_count       = ui->count->value();
    QString         comment         = ui->comment_line->text();
    QString         name_surname    = ui->comboBox->currentText();
    QSqlQueryModel  *model          = new QSqlQueryModel();
    QSqlQuery       *QueryLoadData  = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT name_ru FROM part_list WHERE invent_number='"+invent_number+"'");
    QueryLoadData->exec();
    QueryLoadData->first();
    QString name_ru                 = QueryLoadData->value(0).toString();

    QueryLoadData->prepare("SELECT name_en FROM part_list WHERE invent_number='"+invent_number+"'");
    QueryLoadData->exec();
    QueryLoadData->first();
    QString name_en                 = QueryLoadData->value(0).toString();

    QueryLoadData->prepare("SELECT manufacturer FROM part_list WHERE invent_number='"+invent_number+"'");
    QueryLoadData->exec();
    QueryLoadData->first();
    QString manufacturer            = QueryLoadData->value(0).toString();

    QueryLoadData->prepare("SELECT act_count FROM part_list WHERE invent_number='"+invent_number+"'");
    QueryLoadData->exec();
    QueryLoadData->first();
    int act_count                   = QueryLoadData->value(0).toInt();


    if(use_count > act_count)
    {
        QMessageBox::warning(this, "Ошибка!", "Указанное количество больше, чем присутствует на складе!");
    }
    else
    {
        QueryLoadData->prepare("UPDATE part_list SET act_count=act_count-" + QString::number(use_count) + " WHERE invent_number='" + invent_number + "';"
                               "INSERT INTO logs(logdate, name_surname, name_ru, name_en, manufacturer, take_count, comment) VALUES('NOW()','"
                               + name_surname + "','" + name_ru + "','" + name_en + "','" + manufacturer + "','" + QString::number(use_count) + "', '"+comment+"')");
        QueryLoadData->exec();
        model->setQuery(std::move(*QueryLoadData));

        this->hide();

        delete QueryLoadData;
    }
}

