#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <logar.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logado=true;
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

    if(logado){
        logar f_logar;
        f_logar.exec();
        logado=f_logar.getLogado();
        nome_func=f_logar.getNome();
        acesso_func=f_logar.getAcesso();
        if(logado){
            ui->bnt_block->setIcon(openCad);
            ui->fun_nome->setText(nome_func);
        }
    }else{
        logado=true;
         ui->bnt_block->setIcon(closeCad);
         ui->fun_nome->setText(" ");

    }
}
