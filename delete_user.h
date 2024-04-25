#ifndef DELETE_USER_H
#define DELETE_USER_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class delete_user;
}

class delete_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit delete_user(QWidget *parent = nullptr);
    ~delete_user();

private slots:
    void on_pushButton_del_clicked();

private:
    Ui::delete_user *ui;
    QSqlDatabase     db;

};

#endif // DELETE_USER_H
