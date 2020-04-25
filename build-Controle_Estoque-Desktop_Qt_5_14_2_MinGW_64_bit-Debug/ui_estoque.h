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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_estoque
{
public:
    QTabWidget *gestao_produto;
    QWidget *tab_novoproduto;
    QWidget *layoutWidget;
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
    QTableWidget *ge_tw_prod;
    QGroupBox *groupBox;
    QRadioButton *ge_btcodigo;
    QRadioButton *ge_btproduto;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QLineEdit *ge_codigo;
    QLabel *label_8;
    QLineEdit *ge_produto;
    QLabel *label_9;
    QLineEdit *ge_quantidade;
    QLabel *label_10;
    QLineEdit *ge_valorcompra;
    QLabel *label_11;
    QLineEdit *ge_valorvenda;
    QLabel *label_12;
    QLineEdit *ge_fornecedor;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *ge_gravar;
    QPushButton *ge_excluir;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_13;
    QLineEdit *ge_filtrar;
    QPushButton *ge_filtrar_2;

    void setupUi(QDialog *estoque)
    {
        if (estoque->objectName().isEmpty())
            estoque->setObjectName(QString::fromUtf8("estoque"));
        estoque->resize(553, 490);
        gestao_produto = new QTabWidget(estoque);
        gestao_produto->setObjectName(QString::fromUtf8("gestao_produto"));
        gestao_produto->setGeometry(QRect(10, 20, 531, 451));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QString::fromUtf8("tab_novoproduto"));
        layoutWidget = new QWidget(tab_novoproduto);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 501, 351));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
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
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        cod_prod = new QLineEdit(layoutWidget);
        cod_prod->setObjectName(QString::fromUtf8("cod_prod"));

        verticalLayout->addWidget(cod_prod);


        verticalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        desc_prod = new QLineEdit(layoutWidget);
        desc_prod->setObjectName(QString::fromUtf8("desc_prod"));

        verticalLayout_2->addWidget(desc_prod);


        verticalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(verticalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_4->addWidget(label_4);

        fornecedor = new QLineEdit(layoutWidget);
        fornecedor->setObjectName(QString::fromUtf8("fornecedor"));

        verticalLayout_4->addWidget(fornecedor);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        valor_compra = new QLineEdit(layoutWidget);
        valor_compra->setObjectName(QString::fromUtf8("valor_compra"));

        verticalLayout_5->addWidget(valor_compra);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        qtd_estoque = new QLineEdit(layoutWidget);
        qtd_estoque->setObjectName(QString::fromUtf8("qtd_estoque"));

        verticalLayout_3->addWidget(qtd_estoque);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_6->addWidget(label_6);

        valor_venda = new QLineEdit(layoutWidget);
        valor_venda->setObjectName(QString::fromUtf8("valor_venda"));

        verticalLayout_6->addWidget(valor_venda);


        horizontalLayout_2->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        novo_produto = new QPushButton(layoutWidget);
        novo_produto->setObjectName(QString::fromUtf8("novo_produto"));

        horizontalLayout->addWidget(novo_produto);

        gravar = new QPushButton(layoutWidget);
        gravar->setObjectName(QString::fromUtf8("gravar"));

        horizontalLayout->addWidget(gravar);


        verticalLayout_9->addLayout(horizontalLayout);

        gestao_produto->addTab(tab_novoproduto, QString());
        tab_gestaoprod = new QWidget();
        tab_gestaoprod->setObjectName(QString::fromUtf8("tab_gestaoprod"));
        ge_tw_prod = new QTableWidget(tab_gestaoprod);
        ge_tw_prod->setObjectName(QString::fromUtf8("ge_tw_prod"));
        ge_tw_prod->setGeometry(QRect(230, 111, 281, 291));
        groupBox = new QGroupBox(tab_gestaoprod);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(230, 19, 120, 81));
        ge_btcodigo = new QRadioButton(groupBox);
        ge_btcodigo->setObjectName(QString::fromUtf8("ge_btcodigo"));
        ge_btcodigo->setGeometry(QRect(10, 30, 82, 17));
        ge_btcodigo->setChecked(true);
        ge_btproduto = new QRadioButton(groupBox);
        ge_btproduto->setObjectName(QString::fromUtf8("ge_btproduto"));
        ge_btproduto->setGeometry(QRect(10, 50, 82, 17));
        layoutWidget1 = new QWidget(tab_gestaoprod);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 22, 201, 391));
        verticalLayout_11 = new QVBoxLayout(layoutWidget1);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_10->addWidget(label_7);

        ge_codigo = new QLineEdit(layoutWidget1);
        ge_codigo->setObjectName(QString::fromUtf8("ge_codigo"));

        verticalLayout_10->addWidget(ge_codigo);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_10->addWidget(label_8);

        ge_produto = new QLineEdit(layoutWidget1);
        ge_produto->setObjectName(QString::fromUtf8("ge_produto"));

        verticalLayout_10->addWidget(ge_produto);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_10->addWidget(label_9);

        ge_quantidade = new QLineEdit(layoutWidget1);
        ge_quantidade->setObjectName(QString::fromUtf8("ge_quantidade"));

        verticalLayout_10->addWidget(ge_quantidade);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_10->addWidget(label_10);

        ge_valorcompra = new QLineEdit(layoutWidget1);
        ge_valorcompra->setObjectName(QString::fromUtf8("ge_valorcompra"));

        verticalLayout_10->addWidget(ge_valorcompra);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_10->addWidget(label_11);

        ge_valorvenda = new QLineEdit(layoutWidget1);
        ge_valorvenda->setObjectName(QString::fromUtf8("ge_valorvenda"));

        verticalLayout_10->addWidget(ge_valorvenda);

        label_12 = new QLabel(layoutWidget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_10->addWidget(label_12);

        ge_fornecedor = new QLineEdit(layoutWidget1);
        ge_fornecedor->setObjectName(QString::fromUtf8("ge_fornecedor"));

        verticalLayout_10->addWidget(ge_fornecedor);


        verticalLayout_11->addLayout(verticalLayout_10);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ge_gravar = new QPushButton(layoutWidget1);
        ge_gravar->setObjectName(QString::fromUtf8("ge_gravar"));

        horizontalLayout_3->addWidget(ge_gravar);

        ge_excluir = new QPushButton(layoutWidget1);
        ge_excluir->setObjectName(QString::fromUtf8("ge_excluir"));

        horizontalLayout_3->addWidget(ge_excluir);


        verticalLayout_11->addLayout(horizontalLayout_3);

        layoutWidget2 = new QWidget(tab_gestaoprod);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(366, 21, 141, 72));
        verticalLayout_13 = new QVBoxLayout(layoutWidget2);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_13 = new QLabel(layoutWidget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_12->addWidget(label_13);

        ge_filtrar = new QLineEdit(layoutWidget2);
        ge_filtrar->setObjectName(QString::fromUtf8("ge_filtrar"));

        verticalLayout_12->addWidget(ge_filtrar);


        verticalLayout_13->addLayout(verticalLayout_12);

        ge_filtrar_2 = new QPushButton(layoutWidget2);
        ge_filtrar_2->setObjectName(QString::fromUtf8("ge_filtrar_2"));

        verticalLayout_13->addWidget(ge_filtrar_2);

        gestao_produto->addTab(tab_gestaoprod, QString());

        retranslateUi(estoque);

        gestao_produto->setCurrentIndex(0);


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
        gestao_produto->setTabText(gestao_produto->indexOf(tab_novoproduto), QCoreApplication::translate("estoque", "Novo Produto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("estoque", "Filtrar por:", nullptr));
        ge_btcodigo->setText(QCoreApplication::translate("estoque", "C\303\263digo ", nullptr));
        ge_btproduto->setText(QCoreApplication::translate("estoque", "Descri\303\247\303\243o", nullptr));
        label_7->setText(QCoreApplication::translate("estoque", "C\303\263digo", nullptr));
        label_8->setText(QCoreApplication::translate("estoque", "Produto", nullptr));
        label_9->setText(QCoreApplication::translate("estoque", "Quantidade", nullptr));
        label_10->setText(QCoreApplication::translate("estoque", "Valor Compra", nullptr));
        label_11->setText(QCoreApplication::translate("estoque", "Valor Venda", nullptr));
        label_12->setText(QCoreApplication::translate("estoque", "Fornecedor", nullptr));
        ge_gravar->setText(QCoreApplication::translate("estoque", "Gravar", nullptr));
        ge_excluir->setText(QCoreApplication::translate("estoque", "Excluir", nullptr));
        label_13->setText(QCoreApplication::translate("estoque", "Filtrar", nullptr));
        ge_filtrar_2->setText(QCoreApplication::translate("estoque", "Filtrar", nullptr));
        gestao_produto->setTabText(gestao_produto->indexOf(tab_gestaoprod), QCoreApplication::translate("estoque", "Gest\303\243o Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estoque: public Ui_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
