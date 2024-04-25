#ifndef ALL_USERS_H
#define ALL_USERS_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class all_users;
}

class all_users : public QMainWindow
{
    Q_OBJECT

public:
    explicit all_users(QWidget *parent = nullptr);
    ~all_users();

private:
    Ui::all_users *ui;
    QSqlDatabase db;
};

#endif // ALL_USERS_H
