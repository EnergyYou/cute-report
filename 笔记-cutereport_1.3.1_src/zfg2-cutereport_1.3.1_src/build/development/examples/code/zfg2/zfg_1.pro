#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T01:55:54
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ZFG-3
TEMPLATE = app


SOURCES += main.cpp\

#win32:!include( "C:/Program Files (x86)/CuteReport/development/include/CuteReport.pri" ) {
 #   error( Cannot find the CuteReport.pri file! )
 # }

 # unix:!include( /usr/include/cutereport/CuteReport.pri ) {
 #     error( Cannot find the CuteReport.pri file! )
 # }

INCLUDEPATH+=../../../include/cutereport
DEPENDPATH+=$$INCLUDEPATH
LIBS+=-L../../../../  -lCuteReportCore  -lCuteReportWidgets

DESTDIR=../../../../
