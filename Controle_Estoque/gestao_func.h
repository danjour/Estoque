#ifndef GESTAO_FUNC_H
#define GESTAO_FUNC_H

#include <QDialog>

namespace Ui {
class gestao_func;
}

class gestao_func : public QDialog
{
    Q_OBJECT

public:
    explicit gestao_func(QWidget *parent = nullptr);
    ~gestao_func();

private:
    Ui::gestao_func *ui;
};

#endif // GESTAO_FUNC_H
