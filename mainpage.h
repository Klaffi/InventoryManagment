#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

#include "take_place.h"
#include "new_equipment.h"
#include "new_user.h"
#include "all_users.h"
#include "delete_user.h"
#include "edit_equip.h"
#include "delete_equipment.h"
#include "edit_story.h"


namespace Ui {
class MainPage;
}

class MainPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPage(QWidget *parent = nullptr);

    ~MainPage();

private slots:
    void on_search_btn_clicked();

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_new_equipment_clicked();

    void on_pushButton_all_clicked();

    void on_new_user_clicked();

    void on_pushButton_edit_equipment_clicked();

    void on_pushButton_show_all_users_clicked();

    void on_pushButton_clear_story_clicked();

    void on_pushButton_delete_user_clicked();

    void on_pushButton_SQL_clicked();

    void on_pushButton_delete_equipment_clicked();

    void on_pushButton_edit_story_clicked();

private:
    Ui::MainPage *ui;
    QSqlDatabase db;



signals:
    void signal(QString);
};

#endif // MAINPAGE_H
