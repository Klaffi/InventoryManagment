#ifndef EDIT_EQUIP_H
#define EDIT_EQUIP_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class edit_equip;
}

class edit_equip : public QMainWindow
{
    Q_OBJECT

public:
    explicit edit_equip(QWidget *parent = nullptr);
    ~edit_equip();

private slots:
    void on_pushButton_show_clicked();

    void on_pushButton_edit_clicked();

private:
    Ui::edit_equip *ui;
    QSqlDatabase    db;
};

#endif // EDIT_EQUIP_H
