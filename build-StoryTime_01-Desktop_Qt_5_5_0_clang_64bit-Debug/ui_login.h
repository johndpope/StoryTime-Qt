/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QGroupBox *SignInBox;
    QPushButton *BtnForget;
    QPushButton *BtnSignUp;
    QPushButton *BtnSignIn;
    QWidget *layoutWidget;
    QFormLayout *TextLayer;
    QLabel *LabelUsername;
    QLineEdit *EditUsername;
    QLabel *LabelPassword;
    QLineEdit *EditPassword;
    QLabel *indicator;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(800, 480);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SignInBox = new QGroupBox(centralWidget);
        SignInBox->setObjectName(QStringLiteral("SignInBox"));
        SignInBox->setGeometry(QRect(100, 50, 391, 201));
        BtnForget = new QPushButton(SignInBox);
        BtnForget->setObjectName(QStringLiteral("BtnForget"));
        BtnForget->setGeometry(QRect(127, 150, 145, 32));
        BtnSignUp = new QPushButton(SignInBox);
        BtnSignUp->setObjectName(QStringLiteral("BtnSignUp"));
        BtnSignUp->setGeometry(QRect(30, 150, 95, 32));
        BtnSignIn = new QPushButton(SignInBox);
        BtnSignIn->setObjectName(QStringLiteral("BtnSignIn"));
        BtnSignIn->setGeometry(QRect(260, 80, 85, 32));
        layoutWidget = new QWidget(SignInBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 231, 54));
        TextLayer = new QFormLayout(layoutWidget);
        TextLayer->setSpacing(6);
        TextLayer->setContentsMargins(11, 11, 11, 11);
        TextLayer->setObjectName(QStringLiteral("TextLayer"));
        TextLayer->setContentsMargins(0, 0, 0, 0);
        LabelUsername = new QLabel(layoutWidget);
        LabelUsername->setObjectName(QStringLiteral("LabelUsername"));

        TextLayer->setWidget(0, QFormLayout::LabelRole, LabelUsername);

        EditUsername = new QLineEdit(layoutWidget);
        EditUsername->setObjectName(QStringLiteral("EditUsername"));

        TextLayer->setWidget(0, QFormLayout::FieldRole, EditUsername);

        LabelPassword = new QLabel(layoutWidget);
        LabelPassword->setObjectName(QStringLiteral("LabelPassword"));

        TextLayer->setWidget(1, QFormLayout::LabelRole, LabelPassword);

        EditPassword = new QLineEdit(layoutWidget);
        EditPassword->setObjectName(QStringLiteral("EditPassword"));

        TextLayer->setWidget(1, QFormLayout::FieldRole, EditPassword);

        indicator = new QLabel(centralWidget);
        indicator->setObjectName(QStringLiteral("indicator"));
        indicator->setGeometry(QRect(100, 250, 121, 21));
        Login->setCentralWidget(centralWidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        SignInBox->setTitle(QApplication::translate("Login", "Sign In", 0));
        BtnForget->setText(QApplication::translate("Login", "Forget Password", 0));
        BtnSignUp->setText(QApplication::translate("Login", "Sign Up!", 0));
        BtnSignIn->setText(QApplication::translate("Login", "Sign In", 0));
        LabelUsername->setText(QApplication::translate("Login", "Username ", 0));
        LabelPassword->setText(QApplication::translate("Login", "Password", 0));
        indicator->setText(QApplication::translate("Login", "     File -- ", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
