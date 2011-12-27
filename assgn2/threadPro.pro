#-------------------------------------------------
#
# Project created by QtCreator 2011-12-26T14:30:22
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = threadPro
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    sender.cpp \
    receiver.cpp \
    mythread.cpp

HEADERS += \
    sender.h \
    receiver.h \
    mythread.h
