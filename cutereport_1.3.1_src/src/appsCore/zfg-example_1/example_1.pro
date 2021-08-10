#-------------------------------------------------
#
# Project created by QtCreator 2016-06-04T01:55:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CuteReportExample1
TEMPLATE = app

INCLUDEPATH += ../../core \
            ../../widgets/widgets \
            ../../widgets/widgets_thirdparty \
            #../../_common \
            #../../core/log \
            ../../thirdparty/propertyeditor/lib  \
            ../designer/ \
            widgets \
            widgets/objectinspector \
            ../../../src/appsCore/designerCore

DEPENDPATH += $$INCLUDEPATH


LIBS += -L$$PWD/../../../build  #-L$$PWD/../../../build/$$REPORT_DESIGNER_LIBS_PATH
win32: CONFIG(debug, debug|release): LIBS += -lPropertyEditord -lCuteReportCored -lCuteReportWidgetsd -lCuteReportWidgetsThirdpartyd
else: LIBS += -lPropertyEditor -lCuteReportCore -lCuteReportWidgets -lCuteReportWidgetsThirdparty


SOURCES += main.cpp\

#win32:!include( "C:/Program Files (x86)/CuteReport/development/include/CuteReport.pri" ) {
#    error( Cannot find the CuteReport.pri file! )
#}

#win32:!include( "../zfg.pri" ) {
#    error( Cannot find the zfg.pri file! )
#}




