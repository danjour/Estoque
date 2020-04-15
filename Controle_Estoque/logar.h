#ifndef LOGAR_H
#define LOGAR_H

#include <QDialog>

namespace Ui {
class logar;
}

class logar : public QDialog
{
    Q_OBJECT

public:
    explicit logar(QWidget *parent = nullptr);
    ~logar();

private:
    Ui::logar *ui;
};

#endif // LOGAR_H
