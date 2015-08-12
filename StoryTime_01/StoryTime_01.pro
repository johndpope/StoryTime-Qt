#-------------------------------------------------
#
# Project created by QtCreator 2015-07-30T16:20:19
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StoryTime_01
TEMPLATE = app


SOURCES +=\
    main/main.cpp \
    main/entry.cpp \
    main/login.cpp \
    Write/writestory.cpp \
    Write/writingforoptions.cpp \
    Read/readstory.cpp

HEADERS  += \
    main/entry.h \
    main/login.h \
    Write/writestory.h \
    Write/writingforoptions.h \
    Read/readstory.h

FORMS    += \
    main/entry.ui \
    main/login.ui \
    Write/writestory.ui \
    Write/writingforoptions.ui \
    Read/readstory.ui

CONFIG += mobility
MOBILITY = 

DISTFILES += \
    Background \
    WritePart

RESOURCES +=

