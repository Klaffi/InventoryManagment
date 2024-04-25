/********************************************************************************
** Form generated from reading UI file 'mainpage_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_USER_H
#define UI_MAINPAGE_USER_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage_user
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *search;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QComboBox *name_ru_user;
    QLabel *label_2;
    QLineEdit *name_en_user;
    QLabel *label_3;
    QLineEdit *manufacturer_user;
    QLabel *label_4;
    QLineEdit *part_num_user;
    QLabel *label_5;
    QLineEdit *invent_num;
    QPushButton *search_btn_user;
    QTableView *tableView;
    QPushButton *pushButton_all;
    QWidget *archive;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QTableView *logs_table;

    void setupUi(QMainWindow *MainPage_user)
    {
        if (MainPage_user->objectName().isEmpty())
            MainPage_user->setObjectName("MainPage_user");
        MainPage_user->setWindowModality(Qt::WindowModality::WindowModal);
        MainPage_user->resize(1600, 900);
        MainPage_user->setMinimumSize(QSize(1600, 900));
        centralwidget = new QWidget(MainPage_user);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1600, 900));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        search = new QWidget();
        search->setObjectName("search");
        gridLayout_2 = new QGridLayout(search);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(search);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        name_ru_user = new QComboBox(search);
        name_ru_user->setObjectName("name_ru_user");

        gridLayout_2->addWidget(name_ru_user, 0, 1, 1, 1);

        label_2 = new QLabel(search);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        name_en_user = new QLineEdit(search);
        name_en_user->setObjectName("name_en_user");

        gridLayout_2->addWidget(name_en_user, 1, 1, 1, 1);

        label_3 = new QLabel(search);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        manufacturer_user = new QLineEdit(search);
        manufacturer_user->setObjectName("manufacturer_user");

        gridLayout_2->addWidget(manufacturer_user, 2, 1, 1, 1);

        label_4 = new QLabel(search);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        part_num_user = new QLineEdit(search);
        part_num_user->setObjectName("part_num_user");

        gridLayout_2->addWidget(part_num_user, 3, 1, 1, 1);

        label_5 = new QLabel(search);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 4, 0, 1, 1);

        invent_num = new QLineEdit(search);
        invent_num->setObjectName("invent_num");

        gridLayout_2->addWidget(invent_num, 4, 1, 1, 1);

        search_btn_user = new QPushButton(search);
        search_btn_user->setObjectName("search_btn_user");

        gridLayout_2->addWidget(search_btn_user, 5, 1, 1, 1);

        tableView = new QTableView(search);
        tableView->setObjectName("tableView");

        gridLayout_2->addWidget(tableView, 6, 0, 1, 2);

        pushButton_all = new QPushButton(search);
        pushButton_all->setObjectName("pushButton_all");

        gridLayout_2->addWidget(pushButton_all, 5, 0, 1, 1);

        tabWidget->addTab(search, QString());
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

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainPage_user->setCentralWidget(centralwidget);

        retranslateUi(MainPage_user);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainPage_user);
    } // setupUi

    void retranslateUi(QMainWindow *MainPage_user)
    {
        MainPage_user->setWindowTitle(QCoreApplication::translate("MainPage_user", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        label->setText(QCoreApplication::translate("MainPage_user", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(RU)", nullptr));
        label_2->setText(QCoreApplication::translate("MainPage_user", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(EN)", nullptr));
        label_3->setText(QCoreApplication::translate("MainPage_user", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainPage_user", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        label_5->setText(QCoreApplication::translate("MainPage_user", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        search_btn_user->setText(QCoreApplication::translate("MainPage_user", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        pushButton_all->setText(QCoreApplication::translate("MainPage_user", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262\321\201\321\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(search), QCoreApplication::translate("MainPage_user", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        pushButton->setText(QCoreApplication::translate("MainPage_user", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(archive), QCoreApplication::translate("MainPage_user", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage_user: public Ui_MainPage_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_USER_H
