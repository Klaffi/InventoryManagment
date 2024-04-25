#ifndef TAKE_PLACE_H
#define TAKE_PLACE_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

#include "mainpage_user.h"
#include "mainpage.h"

namespace Ui {
class take_place;
}

class take_place : public QMainWindow
{
    Q_OBJECT

public:
    explicit take_place(QWidget *parent = nullptr);
    ~take_place();

private slots:


    void on_save_clicked();

private:
    Ui::take_place *ui;
    QSqlDatabase db;
    QString invent_number;
public slots:
    void slot(QString a);
};

#endif // TAKE_PLACE_H
