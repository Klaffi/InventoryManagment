/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *search_btn;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *name_en;
    QLineEdit *name_ru;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *part_num;
    QLineEdit *invent_num;
    QLabel *label_2;
    QLineEdit *manufacturer;

    void setupUi(QMainWindow *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName("search");
        search->resize(800, 203);
        centralwidget = new QWidget(search);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 761, 168));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        search_btn = new QPushButton(widget);
        search_btn->setObjectName("search_btn");
        search_btn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(search_btn->sizePolicy().hasHeightForWidth());
        search_btn->setSizePolicy(sizePolicy);

        gridLayout->addWidget(search_btn, 0, 2, 5, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        name_en = new QLineEdit(widget);
        name_en->setObjectName("name_en");

        gridLayout->addWidget(name_en, 1, 1, 1, 1);

        name_ru = new QLineEdit(widget);
        name_ru->setObjectName("name_ru");

        gridLayout->addWidget(name_ru, 0, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        part_num = new QLineEdit(widget);
        part_num->setObjectName("part_num");

        gridLayout->addWidget(part_num, 3, 1, 1, 1);

        invent_num = new QLineEdit(widget);
        invent_num->setObjectName("invent_num");

        gridLayout->addWidget(invent_num, 4, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        manufacturer = new QLineEdit(widget);
        manufacturer->setObjectName("manufacturer");

        gridLayout->addWidget(manufacturer, 2, 1, 1, 1);

        search->setCentralWidget(centralwidget);

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QMainWindow *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "MainWindow", nullptr));
        search_btn->setText(QCoreApplication::translate("search", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        label->setText(QCoreApplication::translate("search", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(RU)", nullptr));
        label_5->setText(QCoreApplication::translate("search", "\320\230\320\275\320\262\320\265\320\275\321\202\320\260\321\200\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200", nullptr));
        label_4->setText(QCoreApplication::translate("search", "\320\220\321\200\321\202\320\270\320\272\321\203\320\273", nullptr));
        label_3->setText(QCoreApplication::translate("search", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("search", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265(EN)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
