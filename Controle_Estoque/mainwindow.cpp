#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <logar.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    logado=false;
    closeCad.addFile(":/imagens/IKONS/PNG/32/cloud_fail.png");
    openCad.addFile(":/imagens/IKONS/PNG/32/cloud_ok.png");

    ui->bnt_block->setIcon(closeCad);
    ui->statusbar->addWidget(ui->bnt_block);
    QString local=qApp->applicationDirPath();
    QString banco=local+"controlEstoque.db";
    basedeDados.setDatabaseName(banco);
    if(!basedeDados.open()){
        QMessageBox::warning(this,"ERRO", "Erro ao conectar ao DB");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bnt_block_clicked(){

    if(logado){
        logar f_logar;
        f_logar.exec();
    }else{
        logado=true;
         ui->bnt_block->setIcon(closeCad);

    }
}
