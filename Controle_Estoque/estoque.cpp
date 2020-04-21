#include "estoque.h"
#include "ui_estoque.h"
#include <QStringList>


estoque::estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estoque)
{
    ui->setupUi(this);
    if(!con.abrir()){
        QMessageBox::warning(this,"ERRO","Erro ao abrir database");
    }else{
        QSqlQuery query;
        query.prepare("select * from tb_produtos");
        if(query.exec()){

        }else{
            QMessageBox::warning(this, "ERRO","Erro ao listar produtos");
        }

    }
    ui->ge_tw_prod->setColumnCount(3);
}

estoque::~estoque()
{
    delete ui;
    con.fechar();
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
        QMessageBox::information(this,"SUCESSO","Produto adicionado com sucesso");
        ui->cod_prod->clear();
        ui->desc_prod->clear();
        ui->fornecedor->clear();
        ui->valor_venda->clear();
        ui->valor_compra->clear();
        ui->qtd_estoque->clear();
        ui->cod_prod->setFocus();
    }
}


void estoque::on_gestao_produto_currentChanged(int index)
{
    if(index==1){
        remover_linha(ui->ge_tw_prod);
        int cont=0;
        QSqlQuery query;
        query.prepare("select id_produto, produto, qt_estoque from tb_produtos order by produto");
        qDebug() << query.lastError().text();
        if(query.exec()){
            while(query.next()){
                ui->ge_tw_prod->insertRow(cont);
                ui->ge_tw_prod->setItem(cont,0,new QTableWidgetItem(query.value(0).toString()));
                ui->ge_tw_prod->setItem(cont,1,new QTableWidgetItem(query.value(1).toString()));
                ui->ge_tw_prod->setItem(cont,2,new QTableWidgetItem(query.value(2).toString()));
                ui->ge_tw_prod->setRowHeight(cont,20);
                cont++;
            }
            ui->ge_tw_prod->setColumnWidth(0,100);
            ui->ge_tw_prod->setColumnWidth(1,100);
            ui->ge_tw_prod->setColumnWidth(2,77);
            QStringList cabecalho= {"Codigo","Produto","Quantidade"};
            ui->ge_tw_prod->setHorizontalHeaderLabels(cabecalho);
            ui->ge_tw_prod->setStyleSheet("QTableView {selection-background-color:red");
            ui->ge_tw_prod->setEditTriggers(QAbstractItemView::NoEditTriggers);
            ui->ge_tw_prod->setSelectionBehavior(QAbstractItemView::SelectRows);
            ui->ge_tw_prod->verticalHeader()->setVisible(false);



        }else{
            QMessageBox::warning(this, "ERRO", "Não foi possível carregar a tabela.");
        }
    }

}

void estoque::remover_linha(QTableWidget *tw){
    while(tw->rowCount()>0){
        tw->removeRow(0);
    }
}
