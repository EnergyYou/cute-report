#############################################################################
# Makefile for building: DatasetEditor
# Generated by qmake (2.01a) (Qt 4.8.0) on: ??? ?? 8 11:33:28 2017
# Project:  dataset_editor.pro
# Template: lib
# Command: d:\Qt\OpenSource4.8.0\bin\qmake.exe -o Makefile dataset_editor.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DUNICODE -DQT_LARGEFILE_SUPPORT -DREPORT_LICENSE=\"LGPL\" -DDESIGNER_LICENSE=\"GPL\" -DLGPL -DBUILD_DATETIME="\"??? ?? 8 11:33:28 2017\"" -DGLOBAL_LOG_FILE -DREPORT_VARS_PATH=\"temp/cutereport/\" -DREPORT_BINARIES_PATH=\"\" -DREPORT_LIBS_PATH=\"\" -DREPORT_HEADERS_PATH=\"development/include/cutereport\" -DREPORT_RESOURCES_PATH=\"cutereport_resources/share\" -DREPORT_IMAGES_PATH=\"cutereport_resources/images\" -DREPORT_PLUGINS_PATH=\"development/Qt4/plugins/debug/core/\" -DREPORT_EXAMPLES_PATH=\"development/examples\" -DREPORT_TEMPLATES_PATH=\"cutereport_resources/templates\" -DREPORT_DESIGNER_PATH=\"\" -DREPORT_DESIGNER_PLUGINS_PATH=\"development/Qt4/plugins/debug/designer\" -DREPORT_DESIGNER_LIBS_PATH=\"\" -DREPORT_DESIGNER_IMAGES_PATH=\"cutereport_resources/designer/images\" -DREPORT_DESIGNER_RESOURCES_PATH=\"cutereport_resources/designer/share\" -DPROPERTYEDITOR_LIBS=\"\" -DPROPERTYEDITOR_HEADERS_PATH=\"development/include/propertyeditor\" -DPROPERTYEDITOR_PLUGINS_PATH=\"development/Qt4/plugins/debug/propertyeditor\" -DREPORT_LOGFILENAME=\"\" -DCOMPILER_VER=\"mingw\" -DPROCESSOR_TYPE=\"\" -DREPORT_VERSION=\"1.3.1\" -DQT_DLL -DQT_NO_DEBUG -DQT_PLUGIN -DQT_SCRIPT_LIB -DQT_SQL_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_HAVE_MMX -DQT_HAVE_3DNOW -DQT_HAVE_SSE -DQT_HAVE_MMXEXT -DQT_HAVE_SSE2 -DQT_THREAD_SUPPORT
CFLAGS        = -O2 -Wall $(DEFINES)
CXXFLAGS      = -O2 -frtti -fexceptions -mthreads -Wall $(DEFINES)
INCPATH       = -I"d:\Qt\OpenSource4.8.0\include\QtCore" -I"d:\Qt\OpenSource4.8.0\include\QtGui" -I"d:\Qt\OpenSource4.8.0\include\QtXml" -I"d:\Qt\OpenSource4.8.0\include\QtSql" -I"d:\Qt\OpenSource4.8.0\include\QtScript" -I"d:\Qt\OpenSource4.8.0\include" -I"lib" -I"..\..\..\core" -I"..\..\..\widgets\widgets" -I"..\..\..\widgets\widgets_thirdparty" -I"..\..\..\thirdparty\propertyeditor\lib" -I"..\..\..\apps\designer" -I"..\..\..\appsCore\designerCore" -I"..\..\..\appsCore\designerCore\widgets" -I"..\..\..\appsCore\designerCore\widgets\objectinspector" -I"..\..\..\appsCore\designerCore\widgets\fonteditor" -I"d:\Qt\OpenSource4.8.0\include\ActiveQt" -I"." -I"." -I"d:\Qt\OpenSource4.8.0\mkspecs\default"
LINK        =        g++
LFLAGS        =        -Wl,-s -mthreads -shared -Wl,--out-implib,..\..\..\..\build\development\Qt4\plugins\debug\designer\libDatasetEditor1.a
LIBS        =        -L"d:\Qt\OpenSource4.8.0\lib" DatasetEditor_resource_res.o -L../../../../build -L../../../../build/ -lCuteReportCore -lPropertyEditor -lCuteDesigner -lCuteReportWidgets -lCuteReportWidgetsThirdparty -lQtScript4 -lQtSql4 -lQtXml4 -lQtGui4 -lQtCore4 
QMAKE         = d:\Qt\OpenSource4.8.0\bin\qmake.exe
IDC           = d:\Qt\OpenSource4.8.0\bin\idc.exe
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = DatasetEditor_resource_res.o
COPY          = copy /y
COPY_FILE     = $(COPY)
COPY_DIR      = xcopy /s /q /y /i
DEL_FILE      = del
DEL_DIR       = rmdir
MOVE          = move
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
INSTALL_FILE    = $(COPY_FILE)
INSTALL_PROGRAM = $(COPY_FILE)
INSTALL_DIR     = $(COPY_DIR)

####### Output directory

OBJECTS_DIR   = . 

####### Files

SOURCES       = datasetcontainer.cpp \
		dataseteditor.cpp moc_datasetcontainer.cpp \
		moc_dataseteditor.cpp \
		qrc_dataset_editor.cpp
OBJECTS       = datasetcontainer.o \
		dataseteditor.o \
		moc_datasetcontainer.o \
		moc_dataseteditor.o \
		qrc_dataset_editor.o
DIST          = 
QMAKE_TARGET  = DatasetEditor
DESTDIR        = ..\..\..\..\build\development\Qt4\plugins\debug\designer\ #avoid trailing-slash linebreak
TARGET         = DatasetEditor1.dll
DESTDIR_TARGET = ..\..\..\..\build\development\Qt4\plugins\debug\designer\DatasetEditor1.dll

####### Implicit rules

.SUFFIXES: .cpp .cc .cxx .c

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

first: all
all: Makefile  $(DESTDIR_TARGET)

$(DESTDIR_TARGET): ui_datasetcontainer.h $(OBJECTS) DatasetEditor_resource_res.o
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) $(OBJECTS)  $(LIBS)

DatasetEditor_resource_res.o: DatasetEditor_resource.rc
	windres -i DatasetEditor_resource.rc -o DatasetEditor_resource_res.o --include-dir=. $(DEFINES)

Makefile: dataset_editor.pro  d:/Qt/OpenSource4.8.0/mkspecs/default/qmake.conf d:/Qt/OpenSource4.8.0/mkspecs/qconfig.pri \
		d:/Qt/OpenSource4.8.0/mkspecs/modules/qt_webkit_version.pri \
		d:/Qt/OpenSource4.8.0/mkspecs/features/qt_functions.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/qt_config.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/win32-g++/qmake.conf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/exclusive_builds.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/default_pre.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/default_pre.prf \
		../../../../build.cfg \
		../../../../profiles/win.pri \
		../../../../profiles/common.pri \
		../designerModules.pri \
		d:/Qt/OpenSource4.8.0/mkspecs/features/release.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/default_post.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/default_post.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/rtti.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/exceptions.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/stl.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/shared.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/dll.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/warn_on.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/qt.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/thread.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/moc.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/windows.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/resources.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/uic.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/yacc.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/lex.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/include_source_dir.prf
	$(QMAKE) -o Makefile dataset_editor.pro
d:\Qt\OpenSource4.8.0\mkspecs\qconfig.pri:
d:\Qt\OpenSource4.8.0\mkspecs\modules\qt_webkit_version.pri:
d:\Qt\OpenSource4.8.0\mkspecs\features\qt_functions.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\qt_config.prf:
d:\Qt\OpenSource4.8.0\mkspecs\win32-g++\qmake.conf:
d:\Qt\OpenSource4.8.0\mkspecs\features\exclusive_builds.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\default_pre.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_pre.prf:
..\..\..\..\build.cfg:
..\..\..\..\profiles\win.pri:
..\..\..\..\profiles\common.pri:
..\designerModules.pri:
d:\Qt\OpenSource4.8.0\mkspecs\features\release.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\default_post.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_post.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\rtti.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\exceptions.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\stl.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\shared.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\dll.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\warn_on.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\qt.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\thread.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\moc.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\windows.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\resources.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\uic.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\yacc.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\lex.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\include_source_dir.prf:
qmake:  FORCE
	@$(QMAKE) -o Makefile dataset_editor.pro

dist:
	$(ZIP) DatasetEditor.zip $(SOURCES) $(DIST) dataset_editor.pro d:\Qt\OpenSource4.8.0\mkspecs\qconfig.pri d:\Qt\OpenSource4.8.0\mkspecs\modules\qt_webkit_version.pri d:\Qt\OpenSource4.8.0\mkspecs\features\qt_functions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt_config.prf d:\Qt\OpenSource4.8.0\mkspecs\win32-g++\qmake.conf d:\Qt\OpenSource4.8.0\mkspecs\features\exclusive_builds.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_pre.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_pre.prf ..\..\..\..\build.cfg ..\..\..\..\profiles\win.pri ..\..\..\..\profiles\common.pri ..\designerModules.pri d:\Qt\OpenSource4.8.0\mkspecs\features\release.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\rtti.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\exceptions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\stl.prf d:\Qt\OpenSource4.8.0\mkspecs\features\shared.prf d:\Qt\OpenSource4.8.0\mkspecs\features\dll.prf d:\Qt\OpenSource4.8.0\mkspecs\features\warn_on.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\thread.prf d:\Qt\OpenSource4.8.0\mkspecs\features\moc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\windows.prf d:\Qt\OpenSource4.8.0\mkspecs\features\resources.prf d:\Qt\OpenSource4.8.0\mkspecs\features\uic.prf d:\Qt\OpenSource4.8.0\mkspecs\features\yacc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\lex.prf d:\Qt\OpenSource4.8.0\mkspecs\features\include_source_dir.prf  HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) datasetcontainer.o dataseteditor.o moc_datasetcontainer.o moc_dataseteditor.o qrc_dataset_editor.o
	-$(DEL_FILE) ..\..\..\..\build\development\Qt4\plugins\debug\designer\libDatasetEditor1.a
	-$(DEL_FILE) DatasetEditor_resource_res.o

distclean: clean
	-$(DEL_FILE) $(DESTDIR_TARGET)
	-$(DEL_FILE) Makefile

check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_datasetcontainer.cpp moc_dataseteditor.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_datasetcontainer.cpp moc_dataseteditor.cpp
moc_datasetcontainer.cpp: datasetcontainer.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 datasetcontainer.h -o moc_datasetcontainer.cpp

moc_dataseteditor.cpp: ../../../appsCore/designerCore/moduleinterface.h \
		../../../appsCore/designerCore/designer_globals.h \
		../../../appsCore/designerCore/designercore.h \
		../../../core/cutereport_globals.h \
		../../../core/cutereport_types.h \
		dataseteditor.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 dataseteditor.h -o moc_dataseteditor.cpp

compiler_rcc_make_all: qrc_dataset_editor.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_dataset_editor.cpp
qrc_dataset_editor.cpp: dataset_editor.qrc \
		images/trash-empty.png \
		images/database_48.png
	d:\Qt\OpenSource4.8.0\bin\rcc.exe -name dataset_editor dataset_editor.qrc -o qrc_dataset_editor.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_datasetcontainer.h
compiler_uic_clean:
	-$(DEL_FILE) ui_datasetcontainer.h
ui_datasetcontainer.h: datasetcontainer.ui \
		../../../widgets/widgets_thirdparty/fancytabs.h \
		../../../widgets/widgets_thirdparty/widgets_thirdparty_export.h
	d:\Qt\OpenSource4.8.0\bin\uic.exe datasetcontainer.ui -o ui_datasetcontainer.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 



####### Compile

datasetcontainer.o: datasetcontainer.cpp datasetcontainer.h \
		ui_datasetcontainer.h \
		../../../core/datasetinterface.h \
		../../../core/cutereport_globals.h \
		../../../core/reportplugininterface.h \
		../../../core/cutereport_types.h \
		../../../widgets/widgets_thirdparty/fancytabs.h \
		../../../widgets/widgets_thirdparty/widgets_thirdparty_export.h \
		../../../appsCore/designerCore/designercore.h \
		../../../appsCore/designerCore/designer_globals.h \
		dataseteditor.h \
		../../../appsCore/designerCore/moduleinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o datasetcontainer.o datasetcontainer.cpp

dataseteditor.o: dataseteditor.cpp dataseteditor.h \
		../../../appsCore/designerCore/moduleinterface.h \
		../../../appsCore/designerCore/designer_globals.h \
		../../../appsCore/designerCore/designercore.h \
		../../../core/cutereport_globals.h \
		../../../core/cutereport_types.h \
		datasetcontainer.h \
		../../../core/reportcore.h \
		../../../core/datasetinterface.h \
		../../../core/reportplugininterface.h \
		../../../thirdparty/propertyeditor/lib/propertyeditor.h \
		../../../thirdparty/propertyeditor/lib/globals.h \
		../../../core/reportinterface.h \
		../../../appsCore/designerCore/widgets/renamedialog.h \
		../../../appsCore/designerCore/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o dataseteditor.o dataseteditor.cpp

moc_datasetcontainer.o: moc_datasetcontainer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_datasetcontainer.o moc_datasetcontainer.cpp

moc_dataseteditor.o: moc_dataseteditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_dataseteditor.o moc_dataseteditor.cpp

qrc_dataset_editor.o: qrc_dataset_editor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_dataset_editor.o qrc_dataset_editor.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

