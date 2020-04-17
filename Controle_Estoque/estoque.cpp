#include "estoque.h"
#include "ui_estoque.h"

estoque::estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estoque)
{
    ui->setupUi(this);
}

estoque::~estoque()
{
    delete ui;
}
