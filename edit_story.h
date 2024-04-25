#ifndef EDIT_STORY_H
#define EDIT_STORY_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>

namespace Ui {
class edit_story;
}

class edit_story : public QMainWindow
{
    Q_OBJECT

public:
    explicit edit_story(QWidget *parent = nullptr);
    ~edit_story();

private slots:
    void on_pushButton_show_table_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_edit_clicked();

private:
    Ui::edit_story *ui;
    QSqlDatabase db;
};

#endif // EDIT_STORY_H
