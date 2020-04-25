#include "estoque.h"
#include "ui_estoque.h"
#include <QStringList>


estoque::estoque(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::estoque)
{
    ui->setupUi(this);
    //Abertura do DB no construtor da função
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
    //Setando a quantidade de linhas que a tabelá terá, o que também pode ser alterado
    ui->ge_tw_prod->setColumnCount(3);
}

estoque::~estoque()
{
    //Fecha a conexão com o DB
    delete ui;
    con.fechar();
}

void estoque::on_novo_produto_clicked()
{
    //Se apertar o botão, tudo irá limpar
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



    //Aqui é solicitado a digitação dos valores, é necessário ainda ajustar os valores de venda e compra para que possa ser digitado pelo usuário os valores com vírgulas e não somente
    //com ponto
    QString aux;
    aux=ui->valor_compra->text();
    std::replace(aux.begin(),aux.end(),',','.');
    QString valorcompra=aux;
    aux=ui->valor_venda->text();
    std::replace(aux.begin(),aux.end(),',','.');
    QString valorvenda=aux;
    QString codigo= ui->cod_prod->text();
    QString descri= ui->desc_prod->text();
    QString fornecedor= ui->fornecedor->text();
    QString quantidade= ui->qtd_estoque->text();

    //inserção na base de dados, talvez seja necessário nesse caso efetuar algumas validações para que não seja colocados menores ou igual a 0
    QSqlQuery query;
    query.prepare("insert into tb_produtos (id_produto, produto, id_fornecedor, qt_estoque, valor_compra, valor_venda) "
                      "values("+QString::number(codigo.toInt())+",'"+descri+"','"+fornecedor+"',"+QString::number(quantidade.toInt())+","+QString::number(valorcompra.toFloat())+","+QString::number(valorvenda.toFloat())+")");
    if(!query.exec()){
        QMessageBox::warning(this,"ERRO","Erro ao inserir produtos");
    }else{
        //Depois de inserir os produtos a mensagem é apresentada e a tabela é limpa para novas adições.
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
    //Isso perguntara se a tabela que está sendo mostrada é a que mostra os produtos, se for, apagará tudo para não ficar duplicado e depois mostrará tudo.
    if(index==1){
        remover_linha(ui->ge_tw_prod);
        int cont=0;
        QSqlQuery query;
        //Puxando os dados do database
        query.prepare("select id_produto, produto, qt_estoque from tb_produtos order by produto");
        //qDebug() << query.lastError().text(); feito somente para verificar erros.
        if(query.exec()){
            while(query.next()){
                //Isso irá adicionar a tabela os produtos, no caso, o código, o nome e a quantidade, caso necessário isso pode ser alterado para mais produtos ou menos.
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
//Função que faz a remoção das linhas para que não fique duplicando toda vez que reentrar na tabela
void estoque::remover_linha(QTableWidget *tw){
    while(tw->rowCount()>0){
        tw->removeRow(0);
    }
}

void estoque::on_ge_tw_prod_itemSelectionChanged()
{
    int id=ui->ge_tw_prod->item(ui->ge_tw_prod->currentRow(),0)->text().toInt();
    QSqlQuery query;
    query.prepare("select * from tb_produtos where id_produto="+QString::number(id));
    qDebug() << query.lastError().text();
    if(query.exec()){
        query.first();
        ui->ge_codigo->setText(query.value(0).toString());
        ui->ge_produto->setText(query.value(1).toString());
        ui->ge_fornecedor->setText(query.value(2).toString());
        ui->ge_quantidade->setText(query.value(3).toString());
        ui->ge_valorvenda->setText(query.value(5).toString());
        ui->ge_valorcompra->setText(query.value(4).toString());
    }
}

void estoque::on_ge_gravar_clicked()
{
    if(ui->ge_codigo->text()==""){
        QMessageBox::warning(this, "ERRO","Selecione o produto");
    }else{
        int id=ui->ge_tw_prod->item(ui->ge_tw_prod->currentRow(),0)->text().toInt();
        QString aux;
        QString prod=ui->ge_produto->text();
        QString forn=ui->ge_fornecedor->text();
        QString qtde=ui->ge_quantidade->text();
        aux=ui->ge_valorcompra->text();
        std::replace(aux.begin(),aux.end(),',','.');
        QString valorcompra=aux;
        aux=ui->ge_valorvenda->text();
        std::replace(aux.begin(),aux.end(),',','.');
        QString valorvenda=aux;

        QSqlQuery query;

        query.prepare("update tb_produtos set id_produto="+QString::number(id)+",produto='"+prod+"',id_fornecedor='"+forn+"',qt_estoque="+ QString::number(qtde.toInt())+",valor_compra="+QString::number(valorcompra.toDouble())+
                      ",valor_venda="+ QString::number(valorvenda.toDouble())+" where id_produto="+QString::number(id)+"");
        qDebug() << query.lastError().text();
        if(query.exec()){
            int linha=ui->ge_tw_prod->currentRow();
            ui->ge_tw_prod->item(linha,0)->setText(ui->ge_codigo->text());
            ui->ge_tw_prod->item(linha,1)->setText(prod);
            ui->ge_tw_prod->item(linha,2)->setText(qtde);
            QMessageBox::information(this, "Atualizado", "Produto atualizado");
        }else{
            QMessageBox::warning(this, "ERRO", "Erro ao atualizar produto");

        }
    }
}

void estoque::on_ge_excluir_clicked()
{
    if(ui->ge_codigo->text()==""){
        QMessageBox::warning(this, "ERRO","Selecione o produto");
    }else {
        QMessageBox::StandardButton opc=QMessageBox::question(this,"Exclusão","Confirma a exclusão desse produto?",QMessageBox::Yes|QMessageBox::No);
        if(opc==QMessageBox::Yes){
            int linha=ui->ge_tw_prod->currentRow();
            int id=ui->ge_tw_prod->item(linha,0)->text().toInt();
            QSqlQuery query;
            query.prepare("delete from tb_produtos where id_produto="+QString::number(id));
            if(query.exec()){
                ui->ge_tw_prod->removeRow(linha);
                QMessageBox::information(this, "Deletado","Produto deletado");
            }else{
                QMessageBox::information(this, "Deletado","Produto não deletado");
            }

         }
    }
}

void estoque::on_ge_filtrar_2_clicked()
{

    QSqlQuery query;
    remover_linha(ui->ge_tw_prod);
    if(ui->ge_filtrar->text()==""){
        if(ui->ge_btcodigo->isChecked()){
            query.prepare("select id_produto, produto, qt_estoque from tb_produtos order by id_produto");
        }else{
           query.prepare("select id_produto, produto, qt_estoque from tb_produtos order by produto");
        }
    }else{
        if(ui->ge_btcodigo->isChecked()){
            query.prepare("select id_produto, produto, qt_estoque from tb_produtos where id_produto="+ui->ge_filtrar->text()+" order by id_produto");
        }else{
            query.prepare("select id_produto, produto, qt_estoque from tb_produtos where produto like '%"+ui->ge_filtrar->text()+"%' order by produto");
        }
    }
    int contlinhas=0;
    qDebug() << query.lastError().text();
    if(query.exec()){
        while(query.next()){
            ui->ge_tw_prod->insertRow(contlinhas);
            ui->ge_tw_prod->setItem(contlinhas,0,new QTableWidgetItem(query.value(0).toString()));
            ui->ge_tw_prod->setItem(contlinhas,1,new QTableWidgetItem(query.value(1).toString()));
            ui->ge_tw_prod->setItem(contlinhas,2,new QTableWidgetItem(query.value(2).toString()));
            ui->ge_tw_prod->setRowHeight(contlinhas,20);
            contlinhas++;
        }
    }else{
        QMessageBox::warning(this,"ERRO","Erro ao pesquisar produto");
    }

}
