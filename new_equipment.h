#ifndef NEW_EQUIPMENT_H
#define NEW_EQUIPMENT_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>

namespace Ui {
class new_equipment;
}

class new_equipment : public QMainWindow
{
    Q_OBJECT

public:
    explicit new_equipment(QWidget *parent = nullptr);
    ~new_equipment();

private slots:
    void on_pushButton_clicked();

private:
    Ui::new_equipment *ui;
    QSqlDatabase db;
};

#endif // NEW_EQUIPMENT_H
