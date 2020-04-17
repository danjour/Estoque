/********************************************************************************
** Form generated from reading UI file 'gestao_func.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTAO_FUNC_H
#define UI_GESTAO_FUNC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_gestao_func
{
public:

    void setupUi(QDialog *gestao_func)
    {
        if (gestao_func->objectName().isEmpty())
            gestao_func->setObjectName(QString::fromUtf8("gestao_func"));
        gestao_func->resize(400, 300);

        retranslateUi(gestao_func);

        QMetaObject::connectSlotsByName(gestao_func);
    } // setupUi

    void retranslateUi(QDialog *gestao_func)
    {
        gestao_func->setWindowTitle(QCoreApplication::translate("gestao_func", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gestao_func: public Ui_gestao_func {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTAO_FUNC_H
