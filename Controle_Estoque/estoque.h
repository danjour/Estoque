#ifndef ESTOQUE_H
#define ESTOQUE_H
#include "Conexao_db.h"
#include <QDialog>
#include <QMessageBox>
#include <QtSql>
#include <QTableWidget>
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
    void remover_linha(QTableWidget *tw);

private slots:
    void on_novo_produto_clicked();

    void on_gravar_clicked();

    void on_gestao_produto_currentChanged(int index);

    void on_ge_tw_prod_itemSelectionChanged();

    void on_ge_gravar_clicked();

    void on_ge_excluir_clicked();

    void on_ge_filtrar_2_clicked();

private:
    Ui::estoque *ui;
};

#endif // ESTOQUE_H
