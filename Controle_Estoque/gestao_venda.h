#ifndef GESTAO_VENDA_H
#define GESTAO_VENDA_H

#include <QDialog>

namespace Ui {
class gestao_venda;
}

class gestao_venda : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_venda(QWidget *parent = nullptr);
    ~gestao_venda();

private:
    Ui::gestao_venda *ui;
};

#endif // GESTAO_VENDA_H
