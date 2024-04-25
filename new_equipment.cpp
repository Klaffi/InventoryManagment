#include "new_equipment.h"
#include "ui_new_equipment.h"

new_equipment::new_equipment(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::new_equipment)
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

new_equipment::~new_equipment()
{
    delete ui;
    db.close();
}

void new_equipment::on_pushButton_clicked()
{
    QString rep             = ui->lineEdit_rep->text();
    QString cell_addr       = ui->lineEdit_cell_addr->text();
    QString name_ru         = ui->lineEdit_name_ru->text();
    QString name_en         = ui->lineEdit_name_en->text();
    QString manufacturer    = ui->lineEdit_manufacturer->text();
    QString part_num        = ui->lineEdit_part_num->text();
    QString equipment       = ui->lineEdit_equipment->text();
    QString invent_num      = ui->lineEdit_invent_number->text();
    QString act_count       = ui->lineEdit_act_count->text();
    QString min_count       = ui->lineEdit_min_count->text();
    QString comment         = ui->lineEdit_comment->text();

    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("INSERT INTO part_list VALUES('"+rep+"','"+cell_addr+"','"+name_ru+"','"+name_en+"'"
                           ",'"+manufacturer+"','"+part_num+"','"+equipment+"','"+invent_num+"','"+act_count+"','"+min_count+"','"+comment+"')");

    QueryLoadData->exec();
    model->setQuery(std::move(*QueryLoadData));

    delete QueryLoadData;

    this->hide();
}

