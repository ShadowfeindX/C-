#-------------------------------------------------
#
# Project created by QtCreator 2016-09-17T18:58:06
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = coffee-shop
TEMPLATE = app


SOURCES += main.cpp\
    sales.cpp \
    mainwindow.cpp \
    purchase.cpp \
    receipt.cpp

HEADERS  += \
    mainwindow.h \
    sales.h \
    purchase.h \
    receipt.h

FORMS    += \
    sales.ui \
    mainwindow.ui \
    purchase.ui \
    receipt.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
