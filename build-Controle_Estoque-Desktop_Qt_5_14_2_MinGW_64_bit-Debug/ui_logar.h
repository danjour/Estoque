/********************************************************************************
** Form generated from reading UI file 'logar.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGAR_H
#define UI_LOGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *login;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_logar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *logar)
    {
        if (logar->objectName().isEmpty())
            logar->setObjectName(QString::fromUtf8("logar"));
        logar->resize(372, 164);
        widget = new QWidget(logar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 331, 121));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        login = new QLineEdit(widget);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout_2->addWidget(login);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        senha = new QLineEdit(widget);
        senha->setObjectName(QString::fromUtf8("senha"));
        senha->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(senha);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName(QString::fromUtf8("btn_logar"));

        horizontalLayout_3->addWidget(btn_logar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(logar);

        QMetaObject::connectSlotsByName(logar);
    } // setupUi

    void retranslateUi(QDialog *logar)
    {
        logar->setWindowTitle(QCoreApplication::translate("logar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("logar", "Usu\303\241rio", nullptr));
        label_2->setText(QCoreApplication::translate("logar", "Senha", nullptr));
        btn_logar->setText(QCoreApplication::translate("logar", "LOGAR", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("logar", "SAIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logar: public Ui_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGAR_H
