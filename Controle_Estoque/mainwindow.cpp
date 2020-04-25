#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <logar.h>
#include <nova_venda.h>
#include <estoque.h>
#include <gestao_func.h>
#include <gestao_venda.h>



int MainWindow::id_colab;
QString MainWindow::nome_func;
QString MainWindow::user_func;
QString MainWindow::acesso_func;
bool MainWindow::logado;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Definido no pricipal as figuras que posteriormente poderão e provavelmente serão trocadas
    logado=false;
    closeCad.addFile(":/imagens/IKONS/PNG/32/cloud_fail.png");
    openCad.addFile(":/imagens/IKONS/PNG/32/cloud_ok.png");

    ui->bnt_block->setIcon(closeCad);
    ui->statusbar->addWidget(ui->bnt_block);
    ui->statusbar->addWidget(ui->fun_nome);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bnt_block_clicked(){
    //Função para verificar se o usuário está logado
    if(!logado){
        logar f_logar;
        f_logar.exec();
        qDebug() <<acesso_func;
        if(logado){
            ui->bnt_block->setIcon(openCad);
            ui->fun_nome->setText(nome_func);
        }
    }else{//Antes existia o erro, caso o usuário deslogasse, ele continuava permitindo fazer edições, isso era por conta do logado abaixo, que deve estar sempre falso.
        logado=false;
         ui->bnt_block->setIcon(closeCad);
         ui->fun_nome->setText(" ");

    }
}

void MainWindow::on_pushButton_clicked()
{
    if(logado){
    nova_venda f_novavenda;
    f_novavenda.exec();
    }else{
        QMessageBox::information(this,"LOGIN", "É necessário logar!");
    }
}

void MainWindow::on_actionEstoque_triggered()
{   //Definição da função  que irá verificar as possibilidades do operador
    if(logado){
        if(acesso_func=="A"){
            estoque f_estoque;
            f_estoque.exec();
        }else{
            QMessageBox::warning(this,"ACESSO", "Sem permissão!");

        }

    }else{
        QMessageBox::information(this,"LOGIN", "É necessário logar!");
    }

}
