#include "delete_user.h"
#include "ui_delete_user.h"

delete_user::delete_user(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::delete_user)
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

    delete qry;

    ui->comboBox->setModel(model);
}

delete_user::~delete_user()
{
    delete ui;
    db.close();
}

void delete_user::on_pushButton_del_clicked()
{
    QString   user = ui->comboBox->currentText();
    QSqlQuery query;

    query.prepare("DELETE FROM user_name WHERE name_surname='"+user+"'");
    query.exec();

    this->hide();
}
