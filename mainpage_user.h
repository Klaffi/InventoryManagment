#ifndef MAINPAGE_USER_H
#define MAINPAGE_USER_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include "take_place.h"

namespace Ui {
class MainPage_user;
}

class MainPage_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage_user(QWidget *parent = nullptr);

    ~MainPage_user();

private slots:
    void on_search_btn_user_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();



    void on_pushButton_all_clicked();

private:
    Ui::MainPage_user *ui;
    QSqlDatabase db;



signals:
    void signal(QString);
};

#endif // MAINPAGE_USER_H
