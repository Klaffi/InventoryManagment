/********************************************************************************
** Form generated from reading UI file 'new_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_USER_H
#define UI_NEW_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_user
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_name;
    QLineEdit *lineEdit_name;
    QLabel *label_surnmae;
    QLineEdit *lineEdit_surname;
    QPushButton *pushButton_create;

    void setupUi(QMainWindow *new_user)
    {
        if (new_user->objectName().isEmpty())
            new_user->setObjectName("new_user");
        new_user->resize(365, 195);
        new_user->setMinimumSize(QSize(365, 195));
        new_user->setMaximumSize(QSize(365, 195));
        centralwidget = new QWidget(new_user);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");

        gridLayout->addWidget(label_name, 0, 0, 1, 1);

        lineEdit_name = new QLineEdit(centralwidget);
        lineEdit_name->setObjectName("lineEdit_name");

        gridLayout->addWidget(lineEdit_name, 0, 1, 1, 1);

        label_surnmae = new QLabel(centralwidget);
        label_surnmae->setObjectName("label_surnmae");

        gridLayout->addWidget(label_surnmae, 1, 0, 1, 1);

        lineEdit_surname = new QLineEdit(centralwidget);
        lineEdit_surname->setObjectName("lineEdit_surname");

        gridLayout->addWidget(lineEdit_surname, 1, 1, 1, 1);

        pushButton_create = new QPushButton(centralwidget);
        pushButton_create->setObjectName("pushButton_create");

        gridLayout->addWidget(pushButton_create, 2, 0, 1, 2);

        new_user->setCentralWidget(centralwidget);

        retranslateUi(new_user);

        QMetaObject::connectSlotsByName(new_user);
    } // setupUi

    void retranslateUi(QMainWindow *new_user)
    {
        new_user->setWindowTitle(QCoreApplication::translate("new_user", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_name->setText(QCoreApplication::translate("new_user", "\320\230\320\274\321\217", nullptr));
        label_surnmae->setText(QCoreApplication::translate("new_user", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        pushButton_create->setText(QCoreApplication::translate("new_user", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_user: public Ui_new_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_USER_H
