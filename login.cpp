#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
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

Login::~Login()
{
    delete ui;
    db.close();
}

void Login::on_pushButton_login_clicked()
{

    QString Login       = ui->lineEdit_login->text();
    QString Password    = ui->lineEdit_psswd->text();

    QSqlQuery query;

    if(query.exec("SELECT login, password FROM users WHERE login =\'" + Login + "\' AND password=\'" + Password + "\'") && (Login == "root" || Login == "den" || Login == "max"))
    {
        if(query.next())
        {
            QMessageBox::information(this, "Авторизация", "Добро пожаловать!");
            this->hide();

            MainPage *mainpage      = new MainPage();
            mainpage->show();
        }
        else
        {
            QMessageBox::warning(this, "Ошибка!", "Неправильный логин или пароль");
        }
    }
    else
    {
        if(query.next())
        {
            QMessageBox::information(this, "Авторизация", "Добро пожаловать!");
            this->hide();

            MainPage_user *mainpage  = new MainPage_user();
            mainpage->show();
        }
        else
        {
            QMessageBox::warning(this, "Ошибка!", "Неправильный логин или пароль");
        }
    }
    QSqlDatabase::removeDatabase("accs");
    db.close();
}


void Login::on_pushButton_cancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply                            = QMessageBox::question(this, "Отмена", "Вы действительно хотите закрыть программу?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
}

