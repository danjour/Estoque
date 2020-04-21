/********************************************************************************
** Form generated from reading UI file 'estoque.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTOQUE_H
#define UI_ESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_estoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *cod_prod;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *desc_prod;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *fornecedor;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLineEdit *valor_compra;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLineEdit *qtd_estoque;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *valor_venda;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *novo_produto;
    QPushButton *gravar;
    QWidget *tab_gestaoprod;

    void setupUi(QDialog *estoque)
    {
        if (estoque->objectName().isEmpty())
            estoque->setObjectName(QString::fromUtf8("estoque"));
        estoque->resize(989, 492);
        tabWidget = new QTabWidget(estoque);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 971, 441));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QString::fromUtf8("tab_novoproduto"));
        widget = new QWidget(tab_novoproduto);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 941, 311));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cod_prod = new QLineEdit(widget);
        cod_prod->setObjectName(QString::fromUtf8("cod_prod"));

        verticalLayout->addWidget(cod_prod);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        desc_prod = new QLineEdit(widget);
        desc_prod->setObjectName(QString::fromUtf8("desc_prod"));

        verticalLayout_2->addWidget(desc_prod);


        verticalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        fornecedor = new QLineEdit(widget);
        fornecedor->setObjectName(QString::fromUtf8("fornecedor"));

        verticalLayout_4->addWidget(fornecedor);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        valor_compra = new QLineEdit(widget);
        valor_compra->setObjectName(QString::fromUtf8("valor_compra"));

        verticalLayout_5->addWidget(valor_compra);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        qtd_estoque = new QLineEdit(widget);
        qtd_estoque->setObjectName(QString::fromUtf8("qtd_estoque"));

        verticalLayout_3->addWidget(qtd_estoque);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        valor_venda = new QLineEdit(widget);
        valor_venda->setObjectName(QString::fromUtf8("valor_venda"));

        verticalLayout_6->addWidget(valor_venda);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        novo_produto = new QPushButton(widget);
        novo_produto->setObjectName(QString::fromUtf8("novo_produto"));

        horizontalLayout->addWidget(novo_produto);

        gravar = new QPushButton(widget);
        gravar->setObjectName(QString::fromUtf8("gravar"));

        horizontalLayout->addWidget(gravar);


        verticalLayout_9->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprod = new QWidget();
        tab_gestaoprod->setObjectName(QString::fromUtf8("tab_gestaoprod"));
        tabWidget->addTab(tab_gestaoprod, QString());

        retranslateUi(estoque);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(estoque);
    } // setupUi

    void retranslateUi(QDialog *estoque)
    {
        estoque->setWindowTitle(QCoreApplication::translate("estoque", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("estoque", "C\303\263digo do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("estoque", "Descri\303\247\303\243o produto", nullptr));
        label_4->setText(QCoreApplication::translate("estoque", "Fornecedor", nullptr));
        label_5->setText(QCoreApplication::translate("estoque", "Valor de compra", nullptr));
        label_3->setText(QCoreApplication::translate("estoque", "Quantidade de compra", nullptr));
        label_6->setText(QCoreApplication::translate("estoque", "Valor de venda", nullptr));
        novo_produto->setText(QCoreApplication::translate("estoque", "Novo", nullptr));
        gravar->setText(QCoreApplication::translate("estoque", "Gravar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QCoreApplication::translate("estoque", "Novo Produto", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprod), QCoreApplication::translate("estoque", "Gest\303\243o Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estoque: public Ui_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
