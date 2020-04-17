#include "nova_venda.h"
#include "ui_nova_venda.h"

nova_venda::nova_venda(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::nova_venda)
{
    ui->setupUi(this);
}

nova_venda::~nova_venda()
{
    delete ui;
}
