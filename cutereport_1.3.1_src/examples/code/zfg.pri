#QMAKE_CFLAGS = -nologo -Zm200 -Zc:wchar_t
build\development\include\cutereport

INCLUDEPATH += ../../build/development/include/cutereport
DEPENDPATH += $$INCLUDEPATH

LIBS += -L$$PWD../../build 
win32: CONFIG(debug, debug|release): LIBS += -lPropertyEditord -lCuteReportCored -lCuteReportWidgetsd -lCuteReportWidgetsThirdpartyd
else: LIBS += -lPropertyEditor -lCuteReportCore -lCuteReportWidgets -lCuteReportWidgetsThirdparty

CONFIG -= debug_and_release
CONFIG += release
#QMAKE_LFLAGS += /INCREMENTAL:NO
#QMAKE_LFLAGS += /VERBOSE

#CONFIG(debug, debug|release) {
#    TARGET = $$join(TARGET,,,d)
#    message("debug mode")
#    message("Target =" $$TARGET)
#}else {
##    message("release mode")
#}
