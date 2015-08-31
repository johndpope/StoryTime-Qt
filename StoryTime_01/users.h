#ifndef USERS_H
#define USERS_H

#include "storydata.h"
#include <QString>

class Users
{
public:
    Users(){ }
    Users(QString uname, QString pwd):username(uname), password(pwd){}

private:
    QString username;
    QString password;
    StoryData *read;
    StoryData *write;


    //int     score;
};

#endif // USERS_H
