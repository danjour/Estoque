/********************************************************************************
** Form generated from reading UI file 'nova_venda.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOVA_VENDA_H
#define UI_NOVA_VENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_nova_venda
{
public:

    void setupUi(QDialog *nova_venda)
    {
        if (nova_venda->objectName().isEmpty())
            nova_venda->setObjectName(QString::fromUtf8("nova_venda"));
        nova_venda->resize(400, 300);

        retranslateUi(nova_venda);

        QMetaObject::connectSlotsByName(nova_venda);
    } // setupUi

    void retranslateUi(QDialog *nova_venda)
    {
        nova_venda->setWindowTitle(QCoreApplication::translate("nova_venda", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nova_venda: public Ui_nova_venda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOVA_VENDA_H
