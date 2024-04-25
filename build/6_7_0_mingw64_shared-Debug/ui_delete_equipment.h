/********************************************************************************
** Form generated from reading UI file 'delete_equipment.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_EQUIPMENT_H
#define UI_DELETE_EQUIPMENT_H

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

class Ui_delete_equipment
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableView *tableView_show_item;
    QPushButton *pushButton_show;
    QLabel *label_invent_num;
    QLineEdit *invent_num;
    QLabel *label_part_num;
    QLineEdit *part_num;
    QPushButton *pushButton_delete;

    void setupUi(QMainWindow *delete_equipment)
    {
        if (delete_equipment->objectName().isEmpty())
            delete_equipment->setObjectName("delete_equipment");
        delete_equipment->resize(800, 600);
        delete_equipment->setMinimumSize(QSize(0, 0));
        delete_equipment->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(delete_equipment);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tableView_show_item = new QTableView(centralwidget);
        tableView_show_item->setObjectName("tableView_show_item");

        gridLayout->addWidget(tableView_show_item, 0, 0, 1, 3);

        pushButton_show = new QPushButton(centralwidget);
        pushButton_show->setObjectName("pushButton_show");

        gridLayout->addWidget(pushButton_show, 1, 1, 1, 1);

        label_invent_num = new QLabel(centralwidget);
        label_invent_num->setObjectName("label_invent_num");

        gridLayout->addWidget(label_invent_num, 2, 0, 1, 1);

        invent_num = new QLineEdit(centralwidget);
        invent_num->setObjectName("invent_num");

        gridLayout->addWidget(invent_num, 2, 1, 2, 1);

        label_part_num = new QLabel(centralwidget);
        label_part_num->setObjectName("label_part_num");

        gridLayout->addWidget(label_part_num, 4, 0, 1, 1);

        part_num = new QLineEdit(centralwidget);
        part_num->setObjectName("part_num");

        gridLayout->addWidget(part_num, 4, 1, 1, 1);

        pushButton_delete = new QPushButton(centralwidget);
        pushButton_delete->setObjectName("pushButton_delete");

        gridLayout->addWidget(pushButton_delete, 2, 2, 1, 1);

        delete_equipment->setCentralWidget(centralwidget);

        retranslateUi(delete_equipment);

        QMetaObject::connectSlotsByName(delete_equipment);
    } // setupUi

    void retranslateUi(QMainWindow *delete_equipment)
    {
        delete_equipment->setWindowTitle(QCoreApplication::translate("delete_equipment", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        pushButton_show->setText(QCoreApplication::translate("delete_equipment", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\262 \321\202\320\260\320\261\320\273\320\270\321\206\320\265", nullptr));
        label_invent_num->setText(QCoreApplication::translate("delete_equipment", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_part_num->setText(QCoreApplication::translate("delete_equipment", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("delete_equipment", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_equipment: public Ui_delete_equipment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_EQUIPMENT_H
