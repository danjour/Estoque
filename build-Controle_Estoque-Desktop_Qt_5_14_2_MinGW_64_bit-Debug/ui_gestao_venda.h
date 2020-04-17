/********************************************************************************
** Form generated from reading UI file 'gestao_venda.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_VENDA_H
#define UI_GESTAO_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_gestao_venda
{
public:

    void setupUi(QDialog *gestao_venda)
    {
        if (gestao_venda->objectName().isEmpty())
            gestao_venda->setObjectName(QString::fromUtf8("gestao_venda"));
        gestao_venda->resize(400, 300);

        retranslateUi(gestao_venda);

        QMetaObject::connectSlotsByName(gestao_venda);
    } // setupUi

    void retranslateUi(QDialog *gestao_venda)
    {
        gestao_venda->setWindowTitle(QCoreApplication::translate("gestao_venda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_venda: public Ui_gestao_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_VENDA_H
