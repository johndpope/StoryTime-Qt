/********************************************************************************
** Form generated from reading UI file 'readstory.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READSTORY_H
#define UI_READSTORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadStory
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QPushButton *BtnSelectOpt1;
    QPushButton *BtnSelectOpt2;

    void setupUi(QDialog *ReadStory)
    {
        if (ReadStory->objectName().isEmpty())
            ReadStory->setObjectName(QStringLiteral("ReadStory"));
        ReadStory->resize(240, 320);
        scrollArea = new QScrollArea(ReadStory);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 30, 171, 121));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 169, 119));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 121, 31));
        scrollArea->setWidget(scrollAreaWidgetContents);
        BtnSelectOpt1 = new QPushButton(ReadStory);
        BtnSelectOpt1->setObjectName(QStringLiteral("BtnSelectOpt1"));
        BtnSelectOpt1->setGeometry(QRect(30, 170, 81, 32));
        BtnSelectOpt2 = new QPushButton(ReadStory);
        BtnSelectOpt2->setObjectName(QStringLiteral("BtnSelectOpt2"));
        BtnSelectOpt2->setGeometry(QRect(110, 170, 81, 32));

        retranslateUi(ReadStory);

        QMetaObject::connectSlotsByName(ReadStory);
    } // setupUi

    void retranslateUi(QDialog *ReadStory)
    {
        ReadStory->setWindowTitle(QApplication::translate("ReadStory", "Dialog", 0));
        label->setText(QApplication::translate("ReadStory", "Story Scrolling", 0));
        BtnSelectOpt1->setText(QApplication::translate("ReadStory", "Option1", 0));
        BtnSelectOpt2->setText(QApplication::translate("ReadStory", "Option2", 0));
    } // retranslateUi

};

namespace Ui {
    class ReadStory: public Ui_ReadStory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READSTORY_H
