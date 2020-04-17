#include "gestao_func.h"
#include "ui_gestao_func.h"

gestao_func::gestao_func(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_func)
{
    ui->setupUi(this);
}

gestao_func::~gestao_func()
{
    delete ui;
}
