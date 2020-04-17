#include "gestao_venda.h"
#include "ui_gestao_venda.h"

gestao_venda::gestao_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestao_venda)
{
    ui->setupUi(this);
}

gestao_venda::~gestao_venda()
{
    delete ui;
}
