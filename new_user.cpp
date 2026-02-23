#include "new_user.h"
#include "ui_new_user.h"

new_user::new_user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::new_user)
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
}

new_user::~new_user()
{
    delete ui;
    db.close();
}

void new_user::on_pushButton_create_clicked()
{
    QString         name        = ui->lineEdit_name->text();
    QString         surname     = ui->lineEdit_surname->text();
    QSqlQueryModel *model       = new QSqlQueryModel();
    QSqlQuery *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("INSERT INTO user_name VALUES('" + surname +" "+ name + "')");
    QueryLoadData->exec();
    model->setQuery(std::move(*QueryLoadData));

    delete QueryLoadData;

    this->hide();
}

