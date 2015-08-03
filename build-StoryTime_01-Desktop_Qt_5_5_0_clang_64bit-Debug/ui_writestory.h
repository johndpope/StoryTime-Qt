/********************************************************************************
** Form generated from reading UI file 'writestory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITESTORY_H
#define UI_WRITESTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WriteStory
{
public:
    QLabel *LabelDisplay;
    QPushButton *BtnFetch;
    QPushButton *BtnWrite;
    QPushButton *BtnBack;

    void setupUi(QDialog *WriteStory)
    {
        if (WriteStory->objectName().isEmpty())
            WriteStory->setObjectName(QStringLiteral("WriteStory"));
        WriteStory->resize(240, 320);
        LabelDisplay = new QLabel(WriteStory);
        LabelDisplay->setObjectName(QStringLiteral("LabelDisplay"));
        LabelDisplay->setGeometry(QRect(40, 40, 141, 91));
        BtnFetch = new QPushButton(WriteStory);
        BtnFetch->setObjectName(QStringLiteral("BtnFetch"));
        BtnFetch->setGeometry(QRect(0, 220, 113, 32));
        BtnWrite = new QPushButton(WriteStory);
        BtnWrite->setObjectName(QStringLiteral("BtnWrite"));
        BtnWrite->setGeometry(QRect(130, 220, 91, 32));
        BtnBack = new QPushButton(WriteStory);
        BtnBack->setObjectName(QStringLiteral("BtnBack"));
        BtnBack->setGeometry(QRect(60, 270, 113, 32));

        retranslateUi(WriteStory);

        QMetaObject::connectSlotsByName(WriteStory);
    } // setupUi

    void retranslateUi(QDialog *WriteStory)
    {
        WriteStory->setWindowTitle(QApplication::translate("WriteStory", "Dialog", 0));
        LabelDisplay->setText(QApplication::translate("WriteStory", "Here displays an incomplete story", 0));
        BtnFetch->setText(QApplication::translate("WriteStory", "Get Another", 0));
        BtnWrite->setText(QApplication::translate("WriteStory", "Write It", 0));
        BtnBack->setText(QApplication::translate("WriteStory", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class WriteStory: public Ui_WriteStory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITESTORY_H
