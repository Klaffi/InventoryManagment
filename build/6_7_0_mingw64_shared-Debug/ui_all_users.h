/********************************************************************************
** Form generated from reading UI file 'all_users.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALL_USERS_H
#define UI_ALL_USERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_all_users
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView_all_users;

    void setupUi(QMainWindow *all_users)
    {
        if (all_users->objectName().isEmpty())
            all_users->setObjectName("all_users");
        all_users->resize(450, 400);
        all_users->setMinimumSize(QSize(450, 400));
        all_users->setMaximumSize(QSize(450, 400));
        centralwidget = new QWidget(all_users);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tableView_all_users = new QTableView(centralwidget);
        tableView_all_users->setObjectName("tableView_all_users");

        gridLayout->addWidget(tableView_all_users, 0, 0, 1, 1);

        all_users->setCentralWidget(centralwidget);

        retranslateUi(all_users);

        QMetaObject::connectSlotsByName(all_users);
    } // setupUi

    void retranslateUi(QMainWindow *all_users)
    {
        all_users->setWindowTitle(QCoreApplication::translate("all_users", "\320\222\321\201\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class all_users: public Ui_all_users {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALL_USERS_H
