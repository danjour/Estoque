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

void estoque::on_novo_produto_clicked()
{
    ui->cod_prod->clear();
    ui->desc_prod->clear();
    ui->fornecedor->clear();
    ui->valor_venda->clear();
    ui->valor_compra->clear();
    ui->qtd_estoque->clear();
    ui->cod_prod->setFocus();
}

void estoque::on_gravar_clicked()
{
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir database");
    }else{
        QString aux;
        QString valorcompra=ui->valor_compra->text();;
        QString valorvenda=ui->valor_venda->text();
        QString codigo= ui->cod_prod->text();
        QString descri= ui->desc_prod->text();
        QString fornecedor= ui->fornecedor->text();
        QString quantidade= ui->qtd_estoque->text();





        QSqlQuery query;
        query.prepare("insert into tb_produtos (id_produto, produto, id_fornecedor, qt_estoque, valor_compra, valor_venda) "
                      "values("+QString::number(codigo.toInt())+",'"+descri+"','"+fornecedor+"',"+QString::number(quantidade.toInt())+","+QString::number(valorcompra.toFloat())+","+QString::number(valorvenda.toFloat())+")");
        if(!query.exec()){
            QMessageBox::warning(this,"ERRO","Erro ao inserir produtos");
        }else{

        }

    }
}
