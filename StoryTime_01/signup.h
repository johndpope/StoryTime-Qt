#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QtSql>
#include "users.h"

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0);
    SignUp(QSqlDatabase& userData, QWidget *parent = 0);
    ~SignUp();


private slots:
    void on_BtnSignUp_released();
    void on_BtnCancel_released();

private:
    Ui::SignUp *ui;
    QSqlDatabase existingUsers;
    bool signUpSuccess;
    User newUser;

};

#endif // SIGNUP_H
