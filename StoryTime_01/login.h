#ifndef LOGIN_H
#define LOGIN_H


#include <QMainWindow>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include "entry.h"


namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:


    void on_BtnSignIn_released();

private:
    Ui::Login *ui;
    QSqlDatabase loginData; // phone id + password
};

#endif // LOGIN_H
