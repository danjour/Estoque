/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSair;
    QAction *actionSobre;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *bnt_block;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(416, 343);
        actionEstoque = new QAction(MainWindow);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionColaboradores = new QAction(MainWindow);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionVendas = new QAction(MainWindow);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("background: #248"));
        bnt_block = new QPushButton(centralwidget);
        bnt_block->setObjectName(QString::fromUtf8("bnt_block"));
        bnt_block->setGeometry(QRect(20, 270, 32, 32));
        bnt_block->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 416, 21));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSair);
        menuSistema->addAction(actionSobre);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEstoque->setText(QCoreApplication::translate("MainWindow", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("MainWindow", "Colaboradores", nullptr));
        actionVendas->setText(QCoreApplication::translate("MainWindow", "Vendas", nullptr));
        actionSair->setText(QCoreApplication::translate("MainWindow", "Sair", nullptr));
        actionSobre->setText(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Nova Venda", nullptr));
        bnt_block->setText(QString());
        menuGest_o->setTitle(QCoreApplication::translate("MainWindow", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("MainWindow", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
