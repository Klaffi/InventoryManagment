#ifndef NEW_USER_H
#define NEW_USER_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class new_user;
}

class new_user : public QMainWindow
{
    Q_OBJECT

public:
    explicit new_user(QWidget *parent = nullptr);
    ~new_user();

private slots:
    void on_pushButton_create_clicked();

private:
    Ui::new_user *ui;
    QSqlDatabase db;
};

#endif // NEW_USER_H
