#ifndef ESTOQUE_H
#define ESTOQUE_H
#include "Conexao_db.h"
#include <QDialog>
#include <QMessageBox>
#include <QtSql>
namespace Ui {
class estoque;
}

class estoque : public QDialog
{
    Q_OBJECT

public:
    explicit estoque(QWidget *parent = nullptr);
    ~estoque();
    Conexao con;

private slots:
    void on_novo_produto_clicked();

    void on_gravar_clicked();

private:
    Ui::estoque *ui;
};

#endif // ESTOQUE_H
