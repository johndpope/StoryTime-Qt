/********************************************************************************
** Form generated from reading UI file 'entry.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRY_H
#define UI_ENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Entry
{
public:
    QPushButton *BtnRead;
    QPushButton *BtnWrite;

    void setupUi(QDialog *Entry)
    {
        if (Entry->objectName().isEmpty())
            Entry->setObjectName(QStringLiteral("Entry"));
        Entry->resize(240, 320);
        BtnRead = new QPushButton(Entry);
        BtnRead->setObjectName(QStringLiteral("BtnRead"));
        BtnRead->setGeometry(QRect(40, 60, 141, 71));
        BtnWrite = new QPushButton(Entry);
        BtnWrite->setObjectName(QStringLiteral("BtnWrite"));
        BtnWrite->setGeometry(QRect(40, 160, 141, 71));

        retranslateUi(Entry);

        QMetaObject::connectSlotsByName(Entry);
    } // setupUi

    void retranslateUi(QDialog *Entry)
    {
        Entry->setWindowTitle(QApplication::translate("Entry", "Dialog", 0));
        BtnRead->setText(QApplication::translate("Entry", "Read", 0));
        BtnWrite->setText(QApplication::translate("Entry", "Write", 0));
    } // retranslateUi

};

namespace Ui {
    class Entry: public Ui_Entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRY_H
