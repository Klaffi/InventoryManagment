/********************************************************************************
** Form generated from reading UI file 'take_place.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKE_PLACE_H
#define UI_TAKE_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_take_place
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *save;
    QLabel *use_count;
    QLabel *name;
    QComboBox *comboBox;
    QLabel *comment;
    QSpinBox *count;
    QLineEdit *comment_line;

    void setupUi(QMainWindow *take_place)
    {
        if (take_place->objectName().isEmpty())
            take_place->setObjectName("take_place");
        take_place->resize(725, 320);
        take_place->setMinimumSize(QSize(725, 320));
        take_place->setMaximumSize(QSize(725, 320));
        centralwidget = new QWidget(take_place);
        centralwidget->setObjectName("centralwidget");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(9, 9, 706, 118));
        save = new QPushButton(centralwidget);
        save->setObjectName("save");
        save->setGeometry(QRect(635, 133, 80, 181));
        use_count = new QLabel(centralwidget);
        use_count->setObjectName("use_count");
        use_count->setGeometry(QRect(10, 260, 171, 16));
        name = new QLabel(centralwidget);
        name->setObjectName("name");
        name->setGeometry(QRect(10, 230, 49, 16));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(189, 230, 441, 24));
        comment = new QLabel(centralwidget);
        comment->setObjectName("comment");
        comment->setGeometry(QRect(10, 170, 141, 16));
        count = new QSpinBox(centralwidget);
        count->setObjectName("count");
        count->setGeometry(QRect(189, 260, 441, 25));
        comment_line = new QLineEdit(centralwidget);
        comment_line->setObjectName("comment_line");
        comment_line->setGeometry(QRect(189, 140, 441, 81));
        comment_line->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        take_place->setCentralWidget(centralwidget);

        retranslateUi(take_place);

        QMetaObject::connectSlotsByName(take_place);
    } // setupUi

    void retranslateUi(QMainWindow *take_place)
    {
        take_place->setWindowTitle(QCoreApplication::translate("take_place", "\320\236\320\272\320\275\320\276 \321\203\321\207\320\265\321\202\320\260", nullptr));
        save->setText(QCoreApplication::translate("take_place", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        use_count->setText(QCoreApplication::translate("take_place", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\275\321\213\321\205", nullptr));
        name->setText(QCoreApplication::translate("take_place", "\320\244\320\230\320\236 ", nullptr));
        comment->setText(QCoreApplication::translate("take_place", "\320\237\321\200\320\270\321\207\320\270\320\275\320\260 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class take_place: public Ui_take_place {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKE_PLACE_H
