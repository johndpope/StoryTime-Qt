#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T16:20:19
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StoryTime_01
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    entry.cpp

HEADERS  += login.h \
    entry.h

FORMS    += login.ui \
    entry.ui

CONFIG += mobility
MOBILITY = 

DISTFILES +=

RESOURCES +=

