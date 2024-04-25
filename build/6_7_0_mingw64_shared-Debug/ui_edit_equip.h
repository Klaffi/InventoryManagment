/********************************************************************************
** Form generated from reading UI file 'edit_equip.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_EQUIP_H
#define UI_EDIT_EQUIP_H

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

class Ui_edit_equip
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label_part_num;
    QLabel *label_cell_addr;
    QLineEdit *lineEdit_min_count;
    QLineEdit *lineEdit_name_en;
    QLineEdit *lineEdit_name_ru;
    QLabel *label_invent_num;
    QLineEdit *lineEdit_act_count;
    QLineEdit *lineEdit_rep;
    QLabel *label_equipment;
    QLabel *label_act_count;
    QLineEdit *lineEdit_equipment;
    QTableView *tableView;
    QLabel *label_rep;
    QLabel *label_name_en;
    QPushButton *pushButton_show;
    QLabel *label_name_ru;
    QLineEdit *lineEdit_invent_num;
    QLineEdit *lineEdit_part_num;
    QLineEdit *lineEdit_manufacturer;
    QLabel *label_min_count;
    QPushButton *pushButton_edit;
    QLineEdit *lineEdit_cell_addr;
    QLabel *label_manufacturer;
    QLabel *label_comment;
    QLineEdit *lineEdit_comment;

    void setupUi(QMainWindow *edit_equip)
    {
        if (edit_equip->objectName().isEmpty())
            edit_equip->setObjectName("edit_equip");
        edit_equip->resize(500, 372);
        centralwidget = new QWidget(edit_equip);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label_part_num = new QLabel(centralwidget);
        label_part_num->setObjectName("label_part_num");

        gridLayout->addWidget(label_part_num, 3, 1, 1, 1);

        label_cell_addr = new QLabel(centralwidget);
        label_cell_addr->setObjectName("label_cell_addr");

        gridLayout->addWidget(label_cell_addr, 9, 1, 1, 1);

        lineEdit_min_count = new QLineEdit(centralwidget);
        lineEdit_min_count->setObjectName("lineEdit_min_count");

        gridLayout->addWidget(lineEdit_min_count, 7, 3, 1, 1);

        lineEdit_name_en = new QLineEdit(centralwidget);
        lineEdit_name_en->setObjectName("lineEdit_name_en");

        gridLayout->addWidget(lineEdit_name_en, 1, 3, 1, 1);

        lineEdit_name_ru = new QLineEdit(centralwidget);
        lineEdit_name_ru->setObjectName("lineEdit_name_ru");

        gridLayout->addWidget(lineEdit_name_ru, 0, 3, 1, 1);

        label_invent_num = new QLabel(centralwidget);
        label_invent_num->setObjectName("label_invent_num");

        gridLayout->addWidget(label_invent_num, 5, 1, 1, 2);

        lineEdit_act_count = new QLineEdit(centralwidget);
        lineEdit_act_count->setObjectName("lineEdit_act_count");

        gridLayout->addWidget(lineEdit_act_count, 6, 3, 1, 1);

        lineEdit_rep = new QLineEdit(centralwidget);
        lineEdit_rep->setObjectName("lineEdit_rep");

        gridLayout->addWidget(lineEdit_rep, 8, 3, 1, 1);

        label_equipment = new QLabel(centralwidget);
        label_equipment->setObjectName("label_equipment");

        gridLayout->addWidget(label_equipment, 4, 1, 1, 1);

        label_act_count = new QLabel(centralwidget);
        label_act_count->setObjectName("label_act_count");

        gridLayout->addWidget(label_act_count, 6, 1, 1, 2);

        lineEdit_equipment = new QLineEdit(centralwidget);
        lineEdit_equipment->setObjectName("lineEdit_equipment");

        gridLayout->addWidget(lineEdit_equipment, 4, 3, 1, 1);

        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");

        gridLayout->addWidget(tableView, 0, 0, 11, 1);

        label_rep = new QLabel(centralwidget);
        label_rep->setObjectName("label_rep");

        gridLayout->addWidget(label_rep, 8, 1, 1, 1);

        label_name_en = new QLabel(centralwidget);
        label_name_en->setObjectName("label_name_en");

        gridLayout->addWidget(label_name_en, 1, 1, 1, 2);

        pushButton_show = new QPushButton(centralwidget);
        pushButton_show->setObjectName("pushButton_show");

        gridLayout->addWidget(pushButton_show, 11, 0, 1, 1);

        label_name_ru = new QLabel(centralwidget);
        label_name_ru->setObjectName("label_name_ru");

        gridLayout->addWidget(label_name_ru, 0, 1, 1, 2);

        lineEdit_invent_num = new QLineEdit(centralwidget);
        lineEdit_invent_num->setObjectName("lineEdit_invent_num");

        gridLayout->addWidget(lineEdit_invent_num, 5, 3, 1, 1);

        lineEdit_part_num = new QLineEdit(centralwidget);
        lineEdit_part_num->setObjectName("lineEdit_part_num");

        gridLayout->addWidget(lineEdit_part_num, 3, 3, 1, 1);

        lineEdit_manufacturer = new QLineEdit(centralwidget);
        lineEdit_manufacturer->setObjectName("lineEdit_manufacturer");

        gridLayout->addWidget(lineEdit_manufacturer, 2, 3, 1, 1);

        label_min_count = new QLabel(centralwidget);
        label_min_count->setObjectName("label_min_count");

        gridLayout->addWidget(label_min_count, 7, 1, 1, 1);

        pushButton_edit = new QPushButton(centralwidget);
        pushButton_edit->setObjectName("pushButton_edit");

        gridLayout->addWidget(pushButton_edit, 11, 1, 1, 3);

        lineEdit_cell_addr = new QLineEdit(centralwidget);
        lineEdit_cell_addr->setObjectName("lineEdit_cell_addr");

        gridLayout->addWidget(lineEdit_cell_addr, 9, 3, 1, 1);

        label_manufacturer = new QLabel(centralwidget);
        label_manufacturer->setObjectName("label_manufacturer");

        gridLayout->addWidget(label_manufacturer, 2, 1, 1, 2);

        label_comment = new QLabel(centralwidget);
        label_comment->setObjectName("label_comment");

        gridLayout->addWidget(label_comment, 10, 1, 1, 1);

        lineEdit_comment = new QLineEdit(centralwidget);
        lineEdit_comment->setObjectName("lineEdit_comment");

        gridLayout->addWidget(lineEdit_comment, 10, 3, 1, 1);

        edit_equip->setCentralWidget(centralwidget);
        tableView->raise();
        pushButton_show->raise();
        label_name_ru->raise();
        label_name_en->raise();
        label_manufacturer->raise();
        label_part_num->raise();
        label_equipment->raise();
        pushButton_edit->raise();
        label_invent_num->raise();
        label_act_count->raise();
        label_min_count->raise();
        label_rep->raise();
        label_cell_addr->raise();
        label_comment->raise();
        lineEdit_name_ru->raise();
        lineEdit_name_en->raise();
        lineEdit_manufacturer->raise();
        lineEdit_part_num->raise();
        lineEdit_equipment->raise();
        lineEdit_invent_num->raise();
        lineEdit_act_count->raise();
        lineEdit_min_count->raise();
        lineEdit_rep->raise();
        lineEdit_cell_addr->raise();
        lineEdit_comment->raise();
        QWidget::setTabOrder(lineEdit_name_ru, lineEdit_name_en);
        QWidget::setTabOrder(lineEdit_name_en, lineEdit_manufacturer);
        QWidget::setTabOrder(lineEdit_manufacturer, lineEdit_part_num);
        QWidget::setTabOrder(lineEdit_part_num, lineEdit_equipment);
        QWidget::setTabOrder(lineEdit_equipment, lineEdit_invent_num);
        QWidget::setTabOrder(lineEdit_invent_num, lineEdit_act_count);
        QWidget::setTabOrder(lineEdit_act_count, lineEdit_min_count);
        QWidget::setTabOrder(lineEdit_min_count, lineEdit_rep);
        QWidget::setTabOrder(lineEdit_rep, lineEdit_cell_addr);
        QWidget::setTabOrder(lineEdit_cell_addr, lineEdit_comment);
        QWidget::setTabOrder(lineEdit_comment, pushButton_edit);
        QWidget::setTabOrder(pushButton_edit, pushButton_show);
        QWidget::setTabOrder(pushButton_show, tableView);

        retranslateUi(edit_equip);

        QMetaObject::connectSlotsByName(edit_equip);
    } // setupUi

    void retranslateUi(QMainWindow *edit_equip)
    {
        edit_equip->setWindowTitle(QCoreApplication::translate("edit_equip", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\270\320\274\320\265\321\216\321\211\320\265\320\265\321\201\321\217 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_part_num->setText(QCoreApplication::translate("edit_equip", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        label_cell_addr->setText(QCoreApplication::translate("edit_equip", "\320\257\321\207\320\265\320\272\320\271\320\272\320\260", nullptr));
        label_invent_num->setText(QCoreApplication::translate("edit_equip", "\320\230\320\275\320\262\320\265\320\275\321\202. \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_equipment->setText(QCoreApplication::translate("edit_equip", "\320\236\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_act_count->setText(QCoreApplication::translate("edit_equip", "\320\220\320\272\321\202\321\203\320\260\320\273\321\214\320\275\320\276\320\265 \320\272\320\276\320\273-\320\262\320\276", nullptr));
        label_rep->setText(QCoreApplication::translate("edit_equip", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        label_name_en->setText(QCoreApplication::translate("edit_equip", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(EN)", nullptr));
        pushButton_show->setText(QCoreApplication::translate("edit_equip", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        label_name_ru->setText(QCoreApplication::translate("edit_equip", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(RU)", nullptr));
        label_min_count->setText(QCoreApplication::translate("edit_equip", "\320\234\320\270\320\275. \320\272\320\276\320\273-\320\262\320\276", nullptr));
        pushButton_edit->setText(QCoreApplication::translate("edit_equip", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label_manufacturer->setText(QCoreApplication::translate("edit_equip", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_comment->setText(QCoreApplication::translate("edit_equip", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edit_equip: public Ui_edit_equip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_EQUIP_H
