#include "logar.h"
#include "ui_logar.h"
#include <QMessageBox>
#include <QDebug>


logar::logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logar)
{
    ui->setupUi(this);
    logado=false;

}

logar::~logar()
{
    delete ui;
}

void logar::on_btn_logar_clicked()
{
    if(!con.abrir()){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir o DB");
    }else{
        QString username,senha;
        username=ui->login->text();
        senha=ui->senha->text();
        QSqlQuery query;
        qDebug()<<query.prepare("select * from tb_colaboradores where user_func='"+username+"' and senha_func='"+senha+"'");
        qDebug()<<query.exec();
        qDebug() << query.lastError().text();
        if(query.exec()){
            query.first();
            if(query.value(1).toString()!=""){
                logado=true;
                nome=query.value(1).toString();
                acesso=query.value(4).toString();
                con.fechar();
                close();
            }else{
                QMessageBox::warning(this, "ERRO", "Colaborador não encontrado");
            }
        }else{
            QMessageBox::warning(this,"ERRO","Falha no login");
        }
    }
    con.fechar();
}

void logar::on_btn_cancelar_clicked()
{
    con.fechar();
    close();
}

bool logar::getLogado(){
    return logado;
}
QString logar::getNome(){
    return nome;
}
QString logar::getAcesso(){
    return acesso;
}
