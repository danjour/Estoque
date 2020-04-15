#include "logar.h"
#include "ui_logar.h"

logar::logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logar)
{
    ui->setupUi(this);
}

logar::~logar()
{
    delete ui;
}
