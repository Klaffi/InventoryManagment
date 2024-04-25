#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::on_search_btn_clicked()
{

}

