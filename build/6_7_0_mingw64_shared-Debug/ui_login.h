/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_login;
    QLabel *label_psswd;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_psswd;
    QPushButton *pushButton_login;
    QPushButton *pushButton_cancel;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        Login->setMaximumSize(QSize(400, 300));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_login = new QLabel(centralwidget);
        label_login->setObjectName("label_login");
        label_login->setGeometry(QRect(90, 70, 49, 16));
        label_psswd = new QLabel(centralwidget);
        label_psswd->setObjectName("label_psswd");
        label_psswd->setGeometry(QRect(90, 130, 49, 16));
        lineEdit_login = new QLineEdit(centralwidget);
        lineEdit_login->setObjectName("lineEdit_login");
        lineEdit_login->setGeometry(QRect(90, 90, 181, 24));
        lineEdit_psswd = new QLineEdit(centralwidget);
        lineEdit_psswd->setObjectName("lineEdit_psswd");
        lineEdit_psswd->setGeometry(QRect(90, 150, 181, 24));
        lineEdit_psswd->setContextMenuPolicy(Qt::ContextMenuPolicy::PreventContextMenu);
        lineEdit_psswd->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(90, 200, 80, 24));
        pushButton_cancel = new QPushButton(centralwidget);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(190, 200, 80, 24));
        Login->setCentralWidget(centralwidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "\320\220\320\262\321\202\320\276\321\200\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_login->setText(QCoreApplication::translate("Login", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_psswd->setText(QCoreApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Login", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
