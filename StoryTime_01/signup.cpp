#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    ui->setupUi(this);
}

SignUp::SignUp(QSqlDatabase& userData, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp),
    existingUsers(userData)
{
    ui->setupUi(this);
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_BtnSignUp_released()
{
    QString uname, pwd, confirm;
    uname = ui->EditUsername->text();
    pwd = ui->EditPassword->text();
    confirm = ui->EditConfirm-text();

    if (!loginData.open()){
        ui->indicator->setText("Failed to open data file.\n");
    }
    else{
        QSqlQuery qry("select * from stunData where username='" + username + "' and password='" + password + "'" );

        if(qry.next()){ // if valid, do something    //str = qry.value("username").toString();

            ui->indicator->setText("Username is");
            this->hide();
            Entry en;
            en.setModal(true);
            en.exec();

           // en.exec();
        }
        else{
             ui->indicator->setText("Invalid Username or/and Password");
        }
    }
}

void SignUp::on_BtnCancel_released()
{
    this->hide();
    this->close();
}
