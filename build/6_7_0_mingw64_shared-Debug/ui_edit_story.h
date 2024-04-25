/********************************************************************************
** Form generated from reading UI file 'edit_story.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_STORY_H
#define UI_EDIT_STORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_story
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_date;
    QLineEdit *date;
    QPushButton *pushButton_show_table;
    QLabel *label_new_date;
    QLineEdit *new_date;
    QLabel *label_new_name_surname;
    QLineEdit *new_name_surname;
    QLabel *label_new_name_ru;
    QLineEdit *new_name_ru;
    QLabel *label_new_name_en;
    QLineEdit *new_name_en;
    QLabel *label_new_manufacturer;
    QLineEdit *new_manufacturer;
    QLabel *label_ne_use_count;
    QLineEdit *new_use_count;
    QLabel *label_new_comment;
    QLineEdit *new_comment;
    QPushButton *pushButton_edit;
    QTableView *tableView_story;
    QPushButton *pushButton_delete;

    void setupUi(QMainWindow *edit_story)
    {
        if (edit_story->objectName().isEmpty())
            edit_story->setObjectName("edit_story");
        edit_story->resize(574, 387);
        centralwidget = new QWidget(edit_story);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_date = new QLabel(centralwidget);
        label_date->setObjectName("label_date");

        gridLayout->addWidget(label_date, 0, 0, 1, 1);

        date = new QLineEdit(centralwidget);
        date->setObjectName("date");

        gridLayout->addWidget(date, 0, 1, 1, 1);

        pushButton_show_table = new QPushButton(centralwidget);
        pushButton_show_table->setObjectName("pushButton_show_table");

        gridLayout->addWidget(pushButton_show_table, 0, 2, 1, 1);

        label_new_date = new QLabel(centralwidget);
        label_new_date->setObjectName("label_new_date");

        gridLayout->addWidget(label_new_date, 2, 0, 1, 1);

        new_date = new QLineEdit(centralwidget);
        new_date->setObjectName("new_date");

        gridLayout->addWidget(new_date, 2, 1, 1, 2);

        label_new_name_surname = new QLabel(centralwidget);
        label_new_name_surname->setObjectName("label_new_name_surname");

        gridLayout->addWidget(label_new_name_surname, 3, 0, 1, 1);

        new_name_surname = new QLineEdit(centralwidget);
        new_name_surname->setObjectName("new_name_surname");

        gridLayout->addWidget(new_name_surname, 3, 1, 1, 2);

        label_new_name_ru = new QLabel(centralwidget);
        label_new_name_ru->setObjectName("label_new_name_ru");

        gridLayout->addWidget(label_new_name_ru, 4, 0, 1, 1);

        new_name_ru = new QLineEdit(centralwidget);
        new_name_ru->setObjectName("new_name_ru");

        gridLayout->addWidget(new_name_ru, 4, 1, 1, 2);

        label_new_name_en = new QLabel(centralwidget);
        label_new_name_en->setObjectName("label_new_name_en");

        gridLayout->addWidget(label_new_name_en, 5, 0, 1, 1);

        new_name_en = new QLineEdit(centralwidget);
        new_name_en->setObjectName("new_name_en");

        gridLayout->addWidget(new_name_en, 5, 1, 1, 2);

        label_new_manufacturer = new QLabel(centralwidget);
        label_new_manufacturer->setObjectName("label_new_manufacturer");

        gridLayout->addWidget(label_new_manufacturer, 6, 0, 1, 1);

        new_manufacturer = new QLineEdit(centralwidget);
        new_manufacturer->setObjectName("new_manufacturer");

        gridLayout->addWidget(new_manufacturer, 6, 1, 1, 2);

        label_ne_use_count = new QLabel(centralwidget);
        label_ne_use_count->setObjectName("label_ne_use_count");

        gridLayout->addWidget(label_ne_use_count, 7, 0, 1, 1);

        new_use_count = new QLineEdit(centralwidget);
        new_use_count->setObjectName("new_use_count");

        gridLayout->addWidget(new_use_count, 7, 1, 1, 2);

        label_new_comment = new QLabel(centralwidget);
        label_new_comment->setObjectName("label_new_comment");

        gridLayout->addWidget(label_new_comment, 8, 0, 1, 1);

        new_comment = new QLineEdit(centralwidget);
        new_comment->setObjectName("new_comment");

        gridLayout->addWidget(new_comment, 8, 1, 1, 2);

        pushButton_edit = new QPushButton(centralwidget);
        pushButton_edit->setObjectName("pushButton_edit");

        gridLayout->addWidget(pushButton_edit, 8, 3, 1, 1);

        tableView_story = new QTableView(centralwidget);
        tableView_story->setObjectName("tableView_story");

        gridLayout->addWidget(tableView_story, 1, 1, 1, 2);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");

        gridLayout->addWidget(pushButton_delete, 1, 3, 1, 1);

        edit_story->setCentralWidget(centralwidget);

        retranslateUi(edit_story);

        QMetaObject::connectSlotsByName(edit_story);
    } // setupUi

    void retranslateUi(QMainWindow *edit_story)
    {
        edit_story->setWindowTitle(QCoreApplication::translate("edit_story", "MainWindow", nullptr));
        label_date->setText(QCoreApplication::translate("edit_story", "\320\224\320\260\321\202\320\260", nullptr));
        pushButton_show_table->setText(QCoreApplication::translate("edit_story", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \321\201 \320\264\320\260\320\275\320\275\320\276\320\271 \320\264\320\260\321\202\320\276\320\271", nullptr));
        label_new_date->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\320\260\321\217 \320\224\320\260\321\202\320\260", nullptr));
        label_new_name_surname->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\320\276\320\265 \320\244\320\230", nullptr));
        label_new_name_ru->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\320\276\320\265 \320\235\320\260\320\270\320\274.(RU)", nullptr));
        label_new_name_en->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\320\276\320\265 \320\235\320\260\320\270\320\274.(EN)", nullptr));
        label_new_manufacturer->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\321\213\320\271 \320\237\321\200\320\276\320\270\320\267\320\262.", nullptr));
        label_ne_use_count->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\320\276\320\265 \320\272\320\276\320\273-\320\262\320\276 \320\270\321\201\320\277.", nullptr));
        label_new_comment->setText(QCoreApplication::translate("edit_story", "\320\235\320\276\320\262\321\213\320\271 \320\272\320\276\320\274\320\274\320\265\320\275\321\202.", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("edit_story", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("edit_story", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_story: public Ui_edit_story {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_STORY_H
