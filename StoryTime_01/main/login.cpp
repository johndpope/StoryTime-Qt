#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    //signUpForm = new SignUpForm();

    loginData = QSqlDatabase::addDatabase("QSQLITE");

    loginData.setDatabaseName("/Users/zthunder/Documents/z-SourceTree/StoryTime/StoryTime_01/dummyData/stunData.sqlite");


    //loginData.setDatabaseName("stunData");
    if (!loginData.open()){
        ui->indicator->setText("Failed");
    }
    else{
        ui->indicator->setText("Connected");
    }
}

Login::~Login()
{
    delete ui;
}

void Login::on_BtnSignIn_released()
{
    QString username, password;
    username = ui->EditUsername->text();
    password = ui->EditPassword->text();

    if (!loginData.open()){
        ui->indicator->setText("Failed to open data file.\n");
    }
    else{
        QSqlQuery qry("select * from stunData where username='" + username + "' and password='" + password + "'" );

        if(qry.next()){ // if valid, do something    //str = qry.value("username").toString();

            ui->indicator->setText("Logining in...");
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

void Login::on_BtnSignUp_released()
{
    //this->hide();
    signUp = new SignUp(loginData);
    signUp->show();


    // sign up, need a sign up interface
    // username --> unique
    // password
    // confirm password
    // email for reset password.

    // sign in and then go into entry UI.
}

void Login::on_BtnForget_released()
{
    // email address, after email is input, ask for codes. If it is temernated or out of time. give a warning message.
    // send an auto message (codes etc) to reset the password
}


