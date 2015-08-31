/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QPushButton *BtnSignUp;
    QPushButton *BtnCancel;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *LabelUsername;
    QLineEdit *EditUsername;
    QLabel *LabelPassword;
    QLineEdit *EditPassword;
    QLabel *LabelConfirm;
    QLineEdit *EditConfirm;
    QLabel *label;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(240, 320);
        BtnSignUp = new QPushButton(SignUp);
        BtnSignUp->setObjectName(QStringLiteral("BtnSignUp"));
        BtnSignUp->setGeometry(QRect(60, 220, 113, 32));
        BtnCancel = new QPushButton(SignUp);
        BtnCancel->setObjectName(QStringLiteral("BtnCancel"));
        BtnCancel->setGeometry(QRect(60, 260, 113, 32));
        formLayoutWidget = new QWidget(SignUp);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 50, 231, 121));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        LabelUsername = new QLabel(formLayoutWidget);
        LabelUsername->setObjectName(QStringLiteral("LabelUsername"));

        formLayout->setWidget(1, QFormLayout::LabelRole, LabelUsername);

        EditUsername = new QLineEdit(formLayoutWidget);
        EditUsername->setObjectName(QStringLiteral("EditUsername"));

        formLayout->setWidget(1, QFormLayout::FieldRole, EditUsername);

        LabelPassword = new QLabel(formLayoutWidget);
        LabelPassword->setObjectName(QStringLiteral("LabelPassword"));

        formLayout->setWidget(2, QFormLayout::LabelRole, LabelPassword);

        EditPassword = new QLineEdit(formLayoutWidget);
        EditPassword->setObjectName(QStringLiteral("EditPassword"));

        formLayout->setWidget(2, QFormLayout::FieldRole, EditPassword);

        LabelConfirm = new QLabel(formLayoutWidget);
        LabelConfirm->setObjectName(QStringLiteral("LabelConfirm"));

        formLayout->setWidget(3, QFormLayout::LabelRole, LabelConfirm);

        EditConfirm = new QLineEdit(formLayoutWidget);
        EditConfirm->setObjectName(QStringLiteral("EditConfirm"));

        formLayout->setWidget(3, QFormLayout::FieldRole, EditConfirm);

        label = new QLabel(SignUp);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 190, 61, 16));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Dialog", 0));
        BtnSignUp->setText(QApplication::translate("SignUp", "Sign Up!", 0));
        BtnCancel->setText(QApplication::translate("SignUp", "Cancel", 0));
        LabelUsername->setText(QApplication::translate("SignUp", "username", 0));
        LabelPassword->setText(QApplication::translate("SignUp", "password", 0));
        LabelConfirm->setText(QApplication::translate("SignUp", "retype password", 0));
        label->setText(QApplication::translate("SignUp", "Indicator", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
