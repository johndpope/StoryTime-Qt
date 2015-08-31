/********************************************************************************
** Form generated from reading UI file 'writingforoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITINGFOROPTIONS_H
#define UI_WRITINGFOROPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WritingForOptions
{
public:
    QScrollArea *ScrollText;
    QWidget *scrollAreaWidgetContents;
    QLabel *Temp;
    QLabel *LabelFinish;
    QLabel *LabelMaxWords;
    QLabel *LabelCountWords;
    QTextEdit *EditWriting;
    QPushButton *BtnSetOption;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BtnSetOption1;
    QPushButton *BtnSetOption2;
    QPushButton *BtnSend;

    void setupUi(QDialog *WritingForOptions)
    {
        if (WritingForOptions->objectName().isEmpty())
            WritingForOptions->setObjectName(QStringLiteral("WritingForOptions"));
        WritingForOptions->resize(240, 320);
        ScrollText = new QScrollArea(WritingForOptions);
        ScrollText->setObjectName(QStringLiteral("ScrollText"));
        ScrollText->setGeometry(QRect(20, 10, 201, 71));
        ScrollText->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 199, 69));
        Temp = new QLabel(scrollAreaWidgetContents);
        Temp->setObjectName(QStringLiteral("Temp"));
        Temp->setGeometry(QRect(50, 20, 101, 16));
        ScrollText->setWidget(scrollAreaWidgetContents);
        LabelFinish = new QLabel(WritingForOptions);
        LabelFinish->setObjectName(QStringLiteral("LabelFinish"));
        LabelFinish->setGeometry(QRect(10, 190, 121, 20));
        LabelMaxWords = new QLabel(WritingForOptions);
        LabelMaxWords->setObjectName(QStringLiteral("LabelMaxWords"));
        LabelMaxWords->setGeometry(QRect(180, 170, 41, 16));
        LabelCountWords = new QLabel(WritingForOptions);
        LabelCountWords->setObjectName(QStringLiteral("LabelCountWords"));
        LabelCountWords->setGeometry(QRect(150, 170, 31, 16));
        EditWriting = new QTextEdit(WritingForOptions);
        EditWriting->setObjectName(QStringLiteral("EditWriting"));
        EditWriting->setGeometry(QRect(20, 90, 201, 79));
        BtnSetOption = new QPushButton(WritingForOptions);
        BtnSetOption->setObjectName(QStringLiteral("BtnSetOption"));
        BtnSetOption->setGeometry(QRect(130, 190, 101, 32));
        layoutWidget = new QWidget(WritingForOptions);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 220, 236, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BtnSetOption1 = new QPushButton(layoutWidget);
        BtnSetOption1->setObjectName(QStringLiteral("BtnSetOption1"));

        horizontalLayout->addWidget(BtnSetOption1);

        BtnSetOption2 = new QPushButton(layoutWidget);
        BtnSetOption2->setObjectName(QStringLiteral("BtnSetOption2"));

        horizontalLayout->addWidget(BtnSetOption2);

        BtnSend = new QPushButton(WritingForOptions);
        BtnSend->setObjectName(QStringLiteral("BtnSend"));
        BtnSend->setGeometry(QRect(60, 270, 113, 32));

        retranslateUi(WritingForOptions);

        QMetaObject::connectSlotsByName(WritingForOptions);
    } // setupUi

    void retranslateUi(QDialog *WritingForOptions)
    {
        WritingForOptions->setWindowTitle(QApplication::translate("WritingForOptions", "Dialog", 0));
        Temp->setText(QApplication::translate("WritingForOptions", "Sroll Area", 0));
        LabelFinish->setText(QApplication::translate("WritingForOptions", "Finish a paragrph?", 0));
        LabelMaxWords->setText(QApplication::translate("WritingForOptions", "/500", 0));
        LabelCountWords->setText(QApplication::translate("WritingForOptions", "0", 0));
        EditWriting->setHtml(QApplication::translate("WritingForOptions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Lucida Grande UI'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Something here.</p></body></html>", 0));
        BtnSetOption->setText(QApplication::translate("WritingForOptions", "Set Options", 0));
        BtnSetOption1->setText(QApplication::translate("WritingForOptions", "Set Option1", 0));
        BtnSetOption2->setText(QApplication::translate("WritingForOptions", "Set Option2", 0));
        BtnSend->setText(QApplication::translate("WritingForOptions", "Send!", 0));
    } // retranslateUi

};

namespace Ui {
    class WritingForOptions: public Ui_WritingForOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITINGFOROPTIONS_H
