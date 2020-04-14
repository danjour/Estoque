#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    block=false;
    closeCad.addFile(":/imagens/IKONS/PNG/32/cloud_fail.png");
    openCad.addFile(":/imagens/IKONS/PNG/32/cloud_ok.png");

    ui->bnt_block->setIcon(openCad);
    ui->statusbar->addWidget(ui->bnt_block);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_bnt_block_clicked(){

    if(block){

    }else{
        block=true;
         ui->bnt_block->setIcon(closeCad);

    }
}
