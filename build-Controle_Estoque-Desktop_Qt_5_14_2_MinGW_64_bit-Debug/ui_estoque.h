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

QT_BEGIN_NAMESPACE

class Ui_estoque
{
public:

    void setupUi(QDialog *estoque)
    {
        if (estoque->objectName().isEmpty())
            estoque->setObjectName(QString::fromUtf8("estoque"));
        estoque->resize(400, 300);

        retranslateUi(estoque);

        QMetaObject::connectSlotsByName(estoque);
    } // setupUi

    void retranslateUi(QDialog *estoque)
    {
        estoque->setWindowTitle(QCoreApplication::translate("estoque", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estoque: public Ui_estoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTOQUE_H
