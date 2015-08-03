/********************************************************************************
** Form generated from reading UI file 'writingwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITINGWINDOW_H
#define UI_WRITINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WritingWindow
{
public:
    QLabel *LabelScroll;
    QTextEdit *EditWriting;
    QPushButton *BtnSubmit;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *LabelWordsCount;
    QLabel *LabelWordsMax;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *BtnSet;
    QLabel *LabelFinish;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *BtnOption1;
    QPushButton *BtnOption2;

    void setupUi(QDialog *WritingWindow)
    {
        if (WritingWindow->objectName().isEmpty())
            WritingWindow->setObjectName(QStringLiteral("WritingWindow"));
        WritingWindow->resize(240, 320);
        LabelScroll = new QLabel(WritingWindow);
        LabelScroll->setObjectName(QStringLiteral("LabelScroll"));
        LabelScroll->setGeometry(QRect(30, 0, 191, 71));
        EditWriting = new QTextEdit(WritingWindow);
        EditWriting->setObjectName(QStringLiteral("EditWriting"));
        EditWriting->setGeometry(QRect(30, 70, 171, 91));
        BtnSubmit = new QPushButton(WritingWindow);
        BtnSubmit->setObjectName(QStringLiteral("BtnSubmit"));
        BtnSubmit->setGeometry(QRect(70, 290, 113, 32));
        widget = new QWidget(WritingWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(136, 171, 61, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        LabelWordsCount = new QLabel(widget);
        LabelWordsCount->setObjectName(QStringLiteral("LabelWordsCount"));

        horizontalLayout->addWidget(LabelWordsCount);

        LabelWordsMax = new QLabel(widget);
        LabelWordsMax->setObjectName(QStringLiteral("LabelWordsMax"));

        horizontalLayout->addWidget(LabelWordsMax);

        widget1 = new QWidget(WritingWindow);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(20, 210, 210, 32));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        BtnSet = new QPushButton(widget1);
        BtnSet->setObjectName(QStringLiteral("BtnSet"));

        horizontalLayout_2->addWidget(BtnSet);

        LabelFinish = new QLabel(widget1);
        LabelFinish->setObjectName(QStringLiteral("LabelFinish"));

        horizontalLayout_2->addWidget(LabelFinish);

        widget2 = new QWidget(WritingWindow);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(0, 250, 244, 41));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        BtnOption1 = new QPushButton(widget2);
        BtnOption1->setObjectName(QStringLiteral("BtnOption1"));

        horizontalLayout_3->addWidget(BtnOption1);

        BtnOption2 = new QPushButton(widget2);
        BtnOption2->setObjectName(QStringLiteral("BtnOption2"));

        horizontalLayout_3->addWidget(BtnOption2);


        retranslateUi(WritingWindow);

        QMetaObject::connectSlotsByName(WritingWindow);
    } // setupUi

    void retranslateUi(QDialog *WritingWindow)
    {
        WritingWindow->setWindowTitle(QApplication::translate("WritingWindow", "Dialog", 0));
        LabelScroll->setText(QApplication::translate("WritingWindow", "Scroll Area for the Story", 0));
        EditWriting->setHtml(QApplication::translate("WritingWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#afafaf;\">Area of Writing</span></p></body></html>", 0));
        BtnSubmit->setText(QApplication::translate("WritingWindow", "Submit", 0));
        LabelWordsCount->setText(QApplication::translate("WritingWindow", "0", 0));
        LabelWordsMax->setText(QApplication::translate("WritingWindow", "/500", 0));
        BtnSet->setText(QApplication::translate("WritingWindow", "Set Option", 0));
        LabelFinish->setText(QApplication::translate("WritingWindow", "Finish Writing?", 0));
        BtnOption1->setText(QApplication::translate("WritingWindow", "Set Option 1", 0));
        BtnOption2->setText(QApplication::translate("WritingWindow", "Set Option 2", 0));
    } // retranslateUi

};

namespace Ui {
    class WritingWindow: public Ui_WritingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITINGWINDOW_H
