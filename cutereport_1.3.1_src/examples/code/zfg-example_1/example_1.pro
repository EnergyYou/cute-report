#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T01:55:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CuteReportExample1
TEMPLATE = app

INCLUDEPATH +=../../../src/core \
               ../../../src/appsCore/designerCore \
               ../../../src/widgets/widgets \



DEPENDPATH += $$INCLUDEPATH


SOURCES += main.cpp\

#win32:!include( "C:/Program Files (x86)/CuteReport/development/include/CuteReport.pri" ) {
#    error( Cannot find the CuteReport.pri file! )
#}

#win32:!include( "../zfg.pri" ) {
#    error( Cannot find the zfg.pri file! )
#}




