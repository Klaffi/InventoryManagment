/********************************************************************************
** Form generated from reading UI file 'new_equipment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_EQUIPMENT_H
#define UI_NEW_EQUIPMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_equipment
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_repos;
    QLineEdit *lineEdit_rep;
    QLabel *label_cell_addr;
    QLineEdit *lineEdit_cell_addr;
    QLabel *label_name_ru;
    QLineEdit *lineEdit_name_ru;
    QLabel *label_name_en;
    QLineEdit *lineEdit_name_en;
    QLabel *label_manufacturer;
    QLineEdit *lineEdit_manufacturer;
    QLabel *label_part_num;
    QLineEdit *lineEdit_part_num;
    QLabel *label_equipment;
    QLineEdit *lineEdit_equipment;
    QLabel *label_invent_num;
    QLineEdit *lineEdit_invent_number;
    QLabel *label_act_count;
    QLineEdit *lineEdit_act_count;
    QLabel *label_min_count;
    QLineEdit *lineEdit_min_count;
    QLabel *label_comment;
    QLineEdit *lineEdit_comment;
    QPushButton *pushButton;

    void setupUi(QMainWindow *new_equipment)
    {
        if (new_equipment->objectName().isEmpty())
            new_equipment->setObjectName("new_equipment");
        new_equipment->resize(685, 375);
        new_equipment->setMinimumSize(QSize(685, 375));
        new_equipment->setMaximumSize(QSize(685, 375));
        centralwidget = new QWidget(new_equipment);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_repos = new QLabel(centralwidget);
        label_repos->setObjectName("label_repos");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_repos);

        lineEdit_rep = new QLineEdit(centralwidget);
        lineEdit_rep->setObjectName("lineEdit_rep");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_rep);

        label_cell_addr = new QLabel(centralwidget);
        label_cell_addr->setObjectName("label_cell_addr");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_cell_addr);

        lineEdit_cell_addr = new QLineEdit(centralwidget);
        lineEdit_cell_addr->setObjectName("lineEdit_cell_addr");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_cell_addr);

        label_name_ru = new QLabel(centralwidget);
        label_name_ru->setObjectName("label_name_ru");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_name_ru);

        lineEdit_name_ru = new QLineEdit(centralwidget);
        lineEdit_name_ru->setObjectName("lineEdit_name_ru");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_name_ru);

        label_name_en = new QLabel(centralwidget);
        label_name_en->setObjectName("label_name_en");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_name_en);

        lineEdit_name_en = new QLineEdit(centralwidget);
        lineEdit_name_en->setObjectName("lineEdit_name_en");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_name_en);

        label_manufacturer = new QLabel(centralwidget);
        label_manufacturer->setObjectName("label_manufacturer");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_manufacturer);

        lineEdit_manufacturer = new QLineEdit(centralwidget);
        lineEdit_manufacturer->setObjectName("lineEdit_manufacturer");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_manufacturer);

        label_part_num = new QLabel(centralwidget);
        label_part_num->setObjectName("label_part_num");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_part_num);

        lineEdit_part_num = new QLineEdit(centralwidget);
        lineEdit_part_num->setObjectName("lineEdit_part_num");

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_part_num);

        label_equipment = new QLabel(centralwidget);
        label_equipment->setObjectName("label_equipment");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_equipment);

        lineEdit_equipment = new QLineEdit(centralwidget);
        lineEdit_equipment->setObjectName("lineEdit_equipment");

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_equipment);

        label_invent_num = new QLabel(centralwidget);
        label_invent_num->setObjectName("label_invent_num");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_invent_num);

        lineEdit_invent_number = new QLineEdit(centralwidget);
        lineEdit_invent_number->setObjectName("lineEdit_invent_number");

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_invent_number);

        label_act_count = new QLabel(centralwidget);
        label_act_count->setObjectName("label_act_count");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_act_count);

        lineEdit_act_count = new QLineEdit(centralwidget);
        lineEdit_act_count->setObjectName("lineEdit_act_count");

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEdit_act_count);

        label_min_count = new QLabel(centralwidget);
        label_min_count->setObjectName("label_min_count");

        formLayout->setWidget(9, QFormLayout::LabelRole, label_min_count);

        lineEdit_min_count = new QLineEdit(centralwidget);
        lineEdit_min_count->setObjectName("lineEdit_min_count");

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEdit_min_count);

        label_comment = new QLabel(centralwidget);
        label_comment->setObjectName("label_comment");

        formLayout->setWidget(10, QFormLayout::LabelRole, label_comment);

        lineEdit_comment = new QLineEdit(centralwidget);
        lineEdit_comment->setObjectName("lineEdit_comment");

        formLayout->setWidget(10, QFormLayout::FieldRole, lineEdit_comment);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        formLayout->setWidget(11, QFormLayout::FieldRole, pushButton);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        new_equipment->setCentralWidget(centralwidget);

        retranslateUi(new_equipment);

        QMetaObject::connectSlotsByName(new_equipment);
    } // setupUi

    void retranslateUi(QMainWindow *new_equipment)
    {
        new_equipment->setWindowTitle(QCoreApplication::translate("new_equipment", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\265 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_repos->setText(QCoreApplication::translate("new_equipment", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        label_cell_addr->setText(QCoreApplication::translate("new_equipment", "\320\220\320\264\321\200\320\265\321\201 \321\217\321\207\320\265\320\271\320\272\320\270", nullptr));
        label_name_ru->setText(QCoreApplication::translate("new_equipment", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(RU)", nullptr));
        label_name_en->setText(QCoreApplication::translate("new_equipment", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(EN)", nullptr));
        label_manufacturer->setText(QCoreApplication::translate("new_equipment", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_part_num->setText(QCoreApplication::translate("new_equipment", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        label_equipment->setText(QCoreApplication::translate("new_equipment", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_invent_num->setText(QCoreApplication::translate("new_equipment", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_act_count->setText(QCoreApplication::translate("new_equipment", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_min_count->setText(QCoreApplication::translate("new_equipment", "\320\234\320\270\320\275\320\270\320\274\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_comment->setText(QCoreApplication::translate("new_equipment", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
        pushButton->setText(QCoreApplication::translate("new_equipment", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_equipment: public Ui_new_equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_EQUIPMENT_H
