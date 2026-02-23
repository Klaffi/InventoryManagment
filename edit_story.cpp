#include "edit_story.h"
#include "ui_edit_story.h"

edit_story::edit_story(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::edit_story)
{
    ui->setupUi(this);
}

edit_story::~edit_story()
{
    delete ui;

    db = QSqlDatabase::addDatabase("QPSQL");
    db.setDatabaseName("accs");
    db.setUserName("postgres");
    db.setPassword("xxxx");
    if (!db.open()) {
        qDebug() << "Error: connection with database fail";
    } else {
        qDebug() << "Database: connection ok";
    }
}

void edit_story::on_pushButton_show_table_clicked()
{
    QString date = ui->date->text();

    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT * FROM logs WHERE logdate ='" + date + "'");
    QueryLoadData->exec();

    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Дата"));
    model->setHeaderData(1, Qt::Horizontal, tr("Фамилия Имя"));
    model->setHeaderData(2, Qt::Horizontal, tr("Наименование(RU)"));
    model->setHeaderData(3, Qt::Horizontal, tr("Наименование(EN)"));
    model->setHeaderData(4, Qt::Horizontal, tr("Производитель"));
    model->setHeaderData(5, Qt::Horizontal, tr("Количество исп. оборудования"));
    model->setHeaderData(6, Qt::Horizontal, tr("Комментарий"));

    ui->tableView_story->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_story->setModel(model);

    delete QueryLoadData;

}


void edit_story::on_pushButton_delete_clicked()
{
    QString   del_story = ui->date->text();
    QSqlQuery query;

    query.prepare("DELETE FROM logs WHERE logdate='"+del_story+"'");
    query.exec();
}


void edit_story::on_pushButton_edit_clicked()
{
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QString new_date            = ui->new_date->text();
    QString new_name_surname    = ui->new_name_surname->text();
    QString new_name_ru         = ui->new_name_ru->text();
    QString new_name_en         = ui->new_name_en->text();
    QString new_manufacturer    = ui->new_manufacturer->text();
    QString new_use_count       = ui->new_use_count->text();
    QString new_comment         = ui->new_comment->text();


    //QueryLoadData->prepare("UPDATE logs SET logdate='" + new_date + "', ")
}

