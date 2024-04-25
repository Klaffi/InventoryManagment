/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *search;
    QGridLayout *gridLayout_2;
    QPushButton *search_btn;
    QLabel *label_name_ru;
    QLabel *label_invent_num;
    QLineEdit *invent_num;
    QPushButton *pushButton_all;
    QLabel *label_name_en;
    QTableView *tableView;
    QLineEdit *part_num;
    QLabel *label_manufacturer;
    QComboBox *name_ru;
    QLineEdit *name_en;
    QLineEdit *manufacturer;
    QLabel *label_part_num;
    QWidget *edit;
    QGridLayout *gridLayout;
    QPushButton *new_equipment;
    QPushButton *pushButton_show_all_users;
    QPushButton *pushButton_edit_equipment;
    QPushButton *new_user;
    QPushButton *pushButton_delete_equipment;
    QPushButton *pushButton_delete_user;
    QPushButton *pushButton_edit_story;
    QPushButton *pushButton_clear_story;
    QLabel *label;
    QTextEdit *textEdit_SQL;
    QTableView *tableView_SQL;
    QPushButton *pushButton_SQL;
    QWidget *archive;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QTableView *logs_table;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName("MainPage");
        MainPage->setWindowModality(Qt::WindowModality::WindowModal);
        MainPage->resize(1600, 900);
        MainPage->setMinimumSize(QSize(1600, 900));
        centralwidget = new QWidget(MainPage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1600, 900));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        search = new QWidget();
        search->setObjectName("search");
        gridLayout_2 = new QGridLayout(search);
        gridLayout_2->setObjectName("gridLayout_2");
        search_btn = new QPushButton(search);
        search_btn->setObjectName("search_btn");

        gridLayout_2->addWidget(search_btn, 5, 1, 1, 1);

        label_name_ru = new QLabel(search);
        label_name_ru->setObjectName("label_name_ru");

        gridLayout_2->addWidget(label_name_ru, 0, 0, 1, 1);

        label_invent_num = new QLabel(search);
        label_invent_num->setObjectName("label_invent_num");

        gridLayout_2->addWidget(label_invent_num, 4, 0, 1, 1);

        invent_num = new QLineEdit(search);
        invent_num->setObjectName("invent_num");

        gridLayout_2->addWidget(invent_num, 4, 1, 1, 1);

        pushButton_all = new QPushButton(search);
        pushButton_all->setObjectName("pushButton_all");

        gridLayout_2->addWidget(pushButton_all, 5, 0, 1, 1);

        label_name_en = new QLabel(search);
        label_name_en->setObjectName("label_name_en");

        gridLayout_2->addWidget(label_name_en, 1, 0, 1, 1);

        tableView = new QTableView(search);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 6, 0, 1, 2);

        part_num = new QLineEdit(search);
        part_num->setObjectName("part_num");

        gridLayout_2->addWidget(part_num, 3, 1, 1, 1);

        label_manufacturer = new QLabel(search);
        label_manufacturer->setObjectName("label_manufacturer");

        gridLayout_2->addWidget(label_manufacturer, 2, 0, 1, 1);

        name_ru = new QComboBox(search);
        name_ru->setObjectName("name_ru");

        gridLayout_2->addWidget(name_ru, 0, 1, 1, 1);

        name_en = new QLineEdit(search);
        name_en->setObjectName("name_en");

        gridLayout_2->addWidget(name_en, 1, 1, 1, 1);

        manufacturer = new QLineEdit(search);
        manufacturer->setObjectName("manufacturer");

        gridLayout_2->addWidget(manufacturer, 2, 1, 1, 1);

        label_part_num = new QLabel(search);
        label_part_num->setObjectName("label_part_num");

        gridLayout_2->addWidget(label_part_num, 3, 0, 1, 1);

        tabWidget->addTab(search, QString());
        edit = new QWidget();
        edit->setObjectName("edit");
        gridLayout = new QGridLayout(edit);
        gridLayout->setObjectName("gridLayout");
        new_equipment = new QPushButton(edit);
        new_equipment->setObjectName("new_equipment");

        gridLayout->addWidget(new_equipment, 0, 0, 1, 1);

        pushButton_show_all_users = new QPushButton(edit);
        pushButton_show_all_users->setObjectName("pushButton_show_all_users");

        gridLayout->addWidget(pushButton_show_all_users, 0, 1, 1, 1);

        pushButton_edit_equipment = new QPushButton(edit);
        pushButton_edit_equipment->setObjectName("pushButton_edit_equipment");

        gridLayout->addWidget(pushButton_edit_equipment, 1, 0, 1, 1);

        new_user = new QPushButton(edit);
        new_user->setObjectName("new_user");

        gridLayout->addWidget(new_user, 1, 1, 1, 1);

        pushButton_delete_equipment = new QPushButton(edit);
        pushButton_delete_equipment->setObjectName("pushButton_delete_equipment");

        gridLayout->addWidget(pushButton_delete_equipment, 2, 0, 1, 1);

        pushButton_delete_user = new QPushButton(edit);
        pushButton_delete_user->setObjectName("pushButton_delete_user");

        gridLayout->addWidget(pushButton_delete_user, 2, 1, 1, 1);

        pushButton_edit_story = new QPushButton(edit);
        pushButton_edit_story->setObjectName("pushButton_edit_story");

        gridLayout->addWidget(pushButton_edit_story, 3, 0, 1, 1);

        pushButton_clear_story = new QPushButton(edit);
        pushButton_clear_story->setObjectName("pushButton_clear_story");

        gridLayout->addWidget(pushButton_clear_story, 3, 1, 1, 1);

        label = new QLabel(edit);
        label->setObjectName("label");

        gridLayout->addWidget(label, 4, 0, 1, 1);

        textEdit_SQL = new QTextEdit(edit);
        textEdit_SQL->setObjectName("textEdit_SQL");
        QFont font;
        font.setPointSize(16);
        textEdit_SQL->setFont(font);

        gridLayout->addWidget(textEdit_SQL, 5, 0, 1, 2);

        tableView_SQL = new QTableView(edit);
        tableView_SQL->setObjectName("tableView_SQL");
        QFont font1;
        font1.setPointSize(12);
        tableView_SQL->setFont(font1);

        gridLayout->addWidget(tableView_SQL, 6, 0, 1, 2);

        pushButton_SQL = new QPushButton(edit);
        pushButton_SQL->setObjectName("pushButton_SQL");

        gridLayout->addWidget(pushButton_SQL, 7, 0, 1, 2);

        tabWidget->addTab(edit, QString());
        archive = new QWidget();
        archive->setObjectName("archive");
        gridLayout_3 = new QGridLayout(archive);
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton = new QPushButton(archive);
        pushButton->setObjectName("pushButton");

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        logs_table = new QTableView(archive);
        logs_table->setObjectName("logs_table");

        gridLayout_3->addWidget(logs_table, 1, 0, 1, 1);

        tabWidget->addTab(archive, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName("gridLayout_4");
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName("textBrowser");

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(tabWidget);

        MainPage->setCentralWidget(centralwidget);
        QWidget::setTabOrder(tabWidget, name_ru);
        QWidget::setTabOrder(name_ru, name_en);
        QWidget::setTabOrder(name_en, manufacturer);
        QWidget::setTabOrder(manufacturer, part_num);
        QWidget::setTabOrder(part_num, invent_num);
        QWidget::setTabOrder(invent_num, search_btn);
        QWidget::setTabOrder(search_btn, tableView);
        QWidget::setTabOrder(tableView, pushButton_all);
        QWidget::setTabOrder(pushButton_all, new_equipment);
        QWidget::setTabOrder(new_equipment, pushButton_show_all_users);
        QWidget::setTabOrder(pushButton_show_all_users, pushButton_edit_equipment);
        QWidget::setTabOrder(pushButton_edit_equipment, new_user);
        QWidget::setTabOrder(new_user, pushButton_delete_equipment);
        QWidget::setTabOrder(pushButton_delete_equipment, pushButton_delete_user);
        QWidget::setTabOrder(pushButton_delete_user, pushButton_edit_story);
        QWidget::setTabOrder(pushButton_edit_story, pushButton_clear_story);
        QWidget::setTabOrder(pushButton_clear_story, textEdit_SQL);
        QWidget::setTabOrder(textEdit_SQL, pushButton);
        QWidget::setTabOrder(pushButton, logs_table);

        retranslateUi(MainPage);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage)
    {
        MainPage->setWindowTitle(QCoreApplication::translate("MainPage", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        search_btn->setText(QCoreApplication::translate("MainPage", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label_name_ru->setText(QCoreApplication::translate("MainPage", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(RU)", nullptr));
        label_invent_num->setText(QCoreApplication::translate("MainPage", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        pushButton_all->setText(QCoreApplication::translate("MainPage", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\321\221", nullptr));
        label_name_en->setText(QCoreApplication::translate("MainPage", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(EN)", nullptr));
        label_manufacturer->setText(QCoreApplication::translate("MainPage", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_part_num->setText(QCoreApplication::translate("MainPage", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(search), QCoreApplication::translate("MainPage", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        new_equipment->setText(QCoreApplication::translate("MainPage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\265 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_show_all_users->setText(QCoreApplication::translate("MainPage", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\320\265\321\205 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        pushButton_edit_equipment->setText(QCoreApplication::translate("MainPage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270\320\274\320\265\321\216\321\211\320\265\320\265\321\201\321\217 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        new_user->setText(QCoreApplication::translate("MainPage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_delete_equipment->setText(QCoreApplication::translate("MainPage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        pushButton_delete_user->setText(QCoreApplication::translate("MainPage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_edit_story->setText(QCoreApplication::translate("MainPage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270\321\201\321\202\320\276\321\200\320\270\321\216", nullptr));
        pushButton_clear_story->setText(QCoreApplication::translate("MainPage", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\270\321\201\321\202\320\276\321\200\320\270\321\216", nullptr));
        label->setText(QCoreApplication::translate("MainPage", "\320\237\320\276\320\273\320\265 \320\264\320\273\321\217 SQL-\320\267\320\260\320\277\321\200\320\276\321\201\320\260", nullptr));
        pushButton_SQL->setText(QCoreApplication::translate("MainPage", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(edit), QCoreApplication::translate("MainPage", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(archive), QCoreApplication::translate("MainPage", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainPage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">\320\230\320\274\320\265\320\275\320\260 \321\202\320\260\320\261\320\273\320\270\321\206: </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">part_list			- \320\262\321\201\321\221 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260"
                        "\320\275\320\270\320\265</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">logs			- \320\270\321\201\321\202\320\276\321\200\320\270\321\217 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">user_name		- \321\204\320\260\320\274\320\270\320\273\320\270\321\217 \320\270 \320\270\320\274\321\217</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:14pt;\"><br /></p>\n"
"<p style=\" margin"
                        "-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">SELECT * FROM part_list;							- \320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\321\216 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 \321\201 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265\320\274.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">SELECT * FROM part_list WHERE lower(name_ru)=lower('\320\224\320\220\321\202\321\207\320\270\320\272');			- \320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\321\221 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \321\201 \320\275\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265\320\274 \320\275\320\260"
                        " \321\200\321\203\321\201\321\201\320\272\320\276\320\274 = \320\224\320\260\321\202\321\207\320\270\320\272, \320\275\320\265\320\267\320\260\320\262\320\270\321\201\320\270\320\274\320\276 \320\276\321\202 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">UPDATE part_list SET act_count=10 WHERE part_num=1233321;			- \320\270\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\260\320\272\321\202\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217 \321\201 \320\260\321\200\321\202\320\270\320\272\321\203\320\273\320\276\320\274 1233321.</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-bloc"
                        "k-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">DELETE FROM user_name WHERE name_surname='\320\223\320\260\320\267\320\270\320\267\320\276\320\262 \320\220\320\267\320\260\320\274\320\260\321\202';		- \321\203\320\264\320\260\320\273\320\270\321\202\321\214 \320\270\320\267 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 user_name \321\201\321\202\321\200\320\276\320\272\321\203 '\320\223\320\260\320\267\320\270\320\267\320\276\320\262 \320\220\320\267\320\260\320\274\320\260\321\202'.</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainPage", "\320\237\320\276\320\274\320\276\321\211\321\214 \320\277\320\276 \320\267\320\260\320\277\321\200\320\276\321\201\320\260\320\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
