#include "all_users.h"
#include "ui_all_users.h"

all_users::all_users(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::all_users)
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

    QSqlQueryModel *model            = new QSqlQueryModel();
    QSqlQuery      *QueryLoadData    = new QSqlQuery(db);

    QueryLoadData->prepare("SELECT * FROM user_name");
    QueryLoadData->exec();

    model->setQuery(std::move(*QueryLoadData));
    model->setHeaderData(0, Qt::Horizontal, tr("Фамилия Имя"));

    delete QueryLoadData;

    ui->tableView_all_users->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView_all_users->setModel(model);
}

all_users::~all_users()
{
    delete ui;
    db.close();
}
