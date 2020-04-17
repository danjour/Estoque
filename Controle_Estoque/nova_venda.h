#ifndef NOVA_VENDA_H
#define NOVA_VENDA_H

#include <QDialog>

namespace Ui {
class nova_venda;
}

class nova_venda : public QDialog
{
    Q_OBJECT

public:
    explicit nova_venda(QWidget *parent = nullptr);
    ~nova_venda();

private:
    Ui::nova_venda *ui;
};

#endif // NOVA_VENDA_H
