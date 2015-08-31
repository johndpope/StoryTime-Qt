/********************************************************************************
** Form generated from reading UI file 'signupform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPFORM_H
#define UI_SIGNUPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpForm
{
public:
    QPushButton *Btn_SignUp;
    QWidget *layoutWidget;
    QHBoxLayout *Layout_username;
    QLabel *Label_username;
    QTextEdit *TxtEdit_username;
    QWidget *layoutWidget_2;
    QHBoxLayout *Layout_confirm;
    QLabel *Label_confirm;
    QTextEdit *TxtEdit_confirm;
    QWidget *layoutWidget_3;
    QHBoxLayout *Layout_password;
    QLabel *Label_password;
    QTextEdit *TxtEdit_password;
    QPushButton *Btn_Cancel;

    void setupUi(QWidget *SignUpForm)
    {
        if (SignUpForm->objectName().isEmpty())
            SignUpForm->setObjectName(QStringLiteral("SignUpForm"));
        SignUpForm->resize(240, 320);
        Btn_SignUp = new QPushButton(SignUpForm);
        Btn_SignUp->setObjectName(QStringLiteral("Btn_SignUp"));
        Btn_SignUp->setGeometry(QRect(60, 240, 113, 32));
        layoutWidget = new QWidget(SignUpForm);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 201, 31));
        Layout_username = new QHBoxLayout(layoutWidget);
        Layout_username->setObjectName(QStringLiteral("Layout_username"));
        Layout_username->setContentsMargins(0, 0, 0, 0);
        Label_username = new QLabel(layoutWidget);
        Label_username->setObjectName(QStringLiteral("Label_username"));

        Layout_username->addWidget(Label_username);

        TxtEdit_username = new QTextEdit(layoutWidget);
        TxtEdit_username->setObjectName(QStringLiteral("TxtEdit_username"));

        Layout_username->addWidget(TxtEdit_username);

        layoutWidget_2 = new QWidget(SignUpForm);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 140, 202, 31));
        Layout_confirm = new QHBoxLayout(layoutWidget_2);
        Layout_confirm->setObjectName(QStringLiteral("Layout_confirm"));
        Layout_confirm->setContentsMargins(0, 0, 0, 0);
        Label_confirm = new QLabel(layoutWidget_2);
        Label_confirm->setObjectName(QStringLiteral("Label_confirm"));

        Layout_confirm->addWidget(Label_confirm);

        TxtEdit_confirm = new QTextEdit(layoutWidget_2);
        TxtEdit_confirm->setObjectName(QStringLiteral("TxtEdit_confirm"));

        Layout_confirm->addWidget(TxtEdit_confirm);

        layoutWidget_3 = new QWidget(SignUpForm);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 80, 201, 31));
        Layout_password = new QHBoxLayout(layoutWidget_3);
        Layout_password->setObjectName(QStringLiteral("Layout_password"));
        Layout_password->setContentsMargins(0, 0, 0, 0);
        Label_password = new QLabel(layoutWidget_3);
        Label_password->setObjectName(QStringLiteral("Label_password"));

        Layout_password->addWidget(Label_password);

        TxtEdit_password = new QTextEdit(layoutWidget_3);
        TxtEdit_password->setObjectName(QStringLiteral("TxtEdit_password"));

        Layout_password->addWidget(TxtEdit_password);

        Btn_Cancel = new QPushButton(SignUpForm);
        Btn_Cancel->setObjectName(QStringLiteral("Btn_Cancel"));
        Btn_Cancel->setGeometry(QRect(60, 280, 113, 32));

        retranslateUi(SignUpForm);

        QMetaObject::connectSlotsByName(SignUpForm);
    } // setupUi

    void retranslateUi(QWidget *SignUpForm)
    {
        SignUpForm->setWindowTitle(QApplication::translate("SignUpForm", "Form", 0));
        Btn_SignUp->setText(QApplication::translate("SignUpForm", "Sign Up", 0));
        Label_username->setText(QApplication::translate("SignUpForm", "Username", 0));
        Label_confirm->setText(QApplication::translate("SignUpForm", "Confirm Password", 0));
        Label_password->setText(QApplication::translate("SignUpForm", "Password", 0));
        Btn_Cancel->setText(QApplication::translate("SignUpForm", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUpForm: public Ui_SignUpForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPFORM_H
