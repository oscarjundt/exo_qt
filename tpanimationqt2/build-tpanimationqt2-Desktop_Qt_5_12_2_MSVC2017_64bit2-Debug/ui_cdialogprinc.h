/********************************************************************************
** Form generated from reading UI file 'cdialogprinc.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CDIALOGPRINC_H
#define UI_CDIALOGPRINC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_CDialogPrinc
{
public:

    void setupUi(QDialog *CDialogPrinc)
    {
        if (CDialogPrinc->objectName().isEmpty())
            CDialogPrinc->setObjectName(QString::fromUtf8("CDialogPrinc"));
        CDialogPrinc->resize(400, 300);

        retranslateUi(CDialogPrinc);

        QMetaObject::connectSlotsByName(CDialogPrinc);
    } // setupUi

    void retranslateUi(QDialog *CDialogPrinc)
    {
        CDialogPrinc->setWindowTitle(QApplication::translate("CDialogPrinc", "CDialogPrinc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CDialogPrinc: public Ui_CDialogPrinc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CDIALOGPRINC_H
