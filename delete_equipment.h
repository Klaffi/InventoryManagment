#ifndef DELETE_EQUIPMENT_H
#define DELETE_EQUIPMENT_H

#include <QMainWindow>
#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>

namespace Ui {
class delete_equipment;
}

class delete_equipment : public QMainWindow
{
    Q_OBJECT

public:
    explicit delete_equipment(QWidget *parent = nullptr);
    ~delete_equipment();

private slots:
    void on_pushButton_delete_clicked();

    void on_pushButton_show_clicked();

private:
    Ui::delete_equipment *ui;
    QSqlDatabase db;
};

#endif // DELETE_EQUIPMENT_H
