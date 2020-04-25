#include "logar.h"
#include "ui_logar.h"
#include <QMessageBox>
#include <QDebug>
#include <mainwindow.h>

logar::logar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logar)
{
    //Assim que o programa abre, ele abre como não logado.
    ui->setupUi(this);
    logado=false;

}

logar::~logar()
{
    delete ui;
}

void logar::on_btn_logar_clicked()
{
    //Tenta abrir o DB, caso dê erro, a mensagem é apresentada.
    if(!con.abrir()){
        QMessageBox::warning(this, "ERRO", "Erro ao abrir o DB");
    }else{
        //Setada as funçãoes para login, necessário, posteriormente efetuar a criptografia da senha
        QString username,senha;
        username=ui->login->text();
        senha=ui->senha->text();
        QSqlQuery query;
        qDebug()<<query.prepare("select * from tb_colaboradores where user_func='"+username+"' and senha_func='"+senha+"'");
        qDebug() << query.lastError().text();
        if(query.exec()){
            query.first();
            if(query.value(1).toString()!=""){
                MainWindow::logado=true;
                MainWindow::nome_func=query.value(1).toString();
                MainWindow::id_colab= query.value(0).toInt();
                //É visto aqui o nível do funcionário, pois nesse caso, nem todos tem todos os privilégios.
                MainWindow::acesso_func=query.value(5).toString();
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
//Se apertar o botão cancelar, o programa fecha.
void logar::on_btn_cancelar_clicked()
{
    con.fechar();
    close();
}

