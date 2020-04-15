#ifndef LOGAR_H
#define LOGAR_H
#include "Conexao_db.h"
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
    bool logado;
    Conexao con;
    QString nome, acesso;
    QString getNome();
    QString getAcesso();
    bool getLogado();

private slots:
    void on_btn_logar_clicked();

    void on_btn_cancelar_clicked();

private:
    Ui::logar *ui;
};

#endif // LOGAR_H
