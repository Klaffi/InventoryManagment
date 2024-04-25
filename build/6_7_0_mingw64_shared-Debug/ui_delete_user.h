/********************************************************************************
** Form generated from reading UI file 'delete_user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_USER_H
#define UI_DELETE_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_delete_user
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label_user;
    QComboBox *comboBox;
    QPushButton *pushButton_del;

    void setupUi(QMainWindow *delete_user)
    {
        if (delete_user->objectName().isEmpty())
            delete_user->setObjectName("delete_user");
        delete_user->resize(320, 125);
        delete_user->setMinimumSize(QSize(320, 125));
        delete_user->setMaximumSize(QSize(320, 125));
        centralwidget = new QWidget(delete_user);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        label_user = new QLabel(centralwidget);
        label_user->setObjectName("label_user");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_user);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox);

        pushButton_del = new QPushButton(centralwidget);
        pushButton_del->setObjectName("pushButton_del");

        formLayout->setWidget(1, QFormLayout::FieldRole, pushButton_del);

        delete_user->setCentralWidget(centralwidget);

        retranslateUi(delete_user);

        QMetaObject::connectSlotsByName(delete_user);
    } // setupUi

    void retranslateUi(QMainWindow *delete_user)
    {
        delete_user->setWindowTitle(QCoreApplication::translate("delete_user", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_user->setText(QCoreApplication::translate("delete_user", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        pushButton_del->setText(QCoreApplication::translate("delete_user", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_user: public Ui_delete_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_USER_H
