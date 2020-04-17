#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <QDialog>

namespace Ui {
class estoque;
}

class estoque : public QDialog
{
    Q_OBJECT

public:
    explicit estoque(QWidget *parent = nullptr);
    ~estoque();

private:
    Ui::estoque *ui;
};

#endif // ESTOQUE_H
