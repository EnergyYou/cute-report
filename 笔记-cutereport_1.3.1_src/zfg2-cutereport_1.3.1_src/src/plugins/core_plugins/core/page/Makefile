#############################################################################
# Makefile for building: Page
# Generated by qmake (2.01a) (Qt 4.8.0) on: ??? ?? 8 11:25:40 2017
# Project:  page.pro
# Template: lib
# Command: d:\Qt\OpenSource4.8.0\bin\qmake.exe -o Makefile page.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DUNICODE -DQT_LARGEFILE_SUPPORT -DREPORT_LICENSE=\"LGPL\" -DDESIGNER_LICENSE=\"GPL\" -DLGPL -DBUILD_DATETIME="\"??? ?? 8 11:25:40 2017\"" -DGLOBAL_LOG_FILE -DREPORT_VARS_PATH=\"temp/cutereport/\" -DREPORT_BINARIES_PATH=\"\" -DREPORT_LIBS_PATH=\"\" -DREPORT_HEADERS_PATH=\"development/include/cutereport\" -DREPORT_RESOURCES_PATH=\"cutereport_resources/share\" -DREPORT_IMAGES_PATH=\"cutereport_resources/images\" -DREPORT_PLUGINS_PATH=\"development/Qt4/plugins/debug/core/\" -DREPORT_EXAMPLES_PATH=\"development/examples\" -DREPORT_TEMPLATES_PATH=\"cutereport_resources/templates\" -DREPORT_DESIGNER_PATH=\"\" -DREPORT_DESIGNER_PLUGINS_PATH=\"development/Qt4/plugins/debug/designer\" -DREPORT_DESIGNER_LIBS_PATH=\"\" -DREPORT_DESIGNER_IMAGES_PATH=\"cutereport_resources/designer/images\" -DREPORT_DESIGNER_RESOURCES_PATH=\"cutereport_resources/designer/share\" -DPROPERTYEDITOR_LIBS=\"\" -DPROPERTYEDITOR_HEADERS_PATH=\"development/include/propertyeditor\" -DPROPERTYEDITOR_PLUGINS_PATH=\"development/Qt4/plugins/debug/propertyeditor\" -DREPORT_LOGFILENAME=\"\" -DCOMPILER_VER=\"mingw\" -DPROCESSOR_TYPE=\"\" -DREPORT_VERSION=\"1.3.1\" -DQT_DLL -DQT_NO_DEBUG -DQT_PLUGIN -DQT_SCRIPT_LIB -DQT_SQL_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_HAVE_MMX -DQT_HAVE_3DNOW -DQT_HAVE_SSE -DQT_HAVE_MMXEXT -DQT_HAVE_SSE2 -DQT_THREAD_SUPPORT
CFLAGS        = -O2 -Wall $(DEFINES)
CXXFLAGS      = -O2 -frtti -fexceptions -mthreads -Wall $(DEFINES)
INCPATH       = -I"d:\Qt\OpenSource4.8.0\include\QtCore" -I"d:\Qt\OpenSource4.8.0\include\QtGui" -I"d:\Qt\OpenSource4.8.0\include\QtXml" -I"d:\Qt\OpenSource4.8.0\include\QtSql" -I"d:\Qt\OpenSource4.8.0\include\QtScript" -I"d:\Qt\OpenSource4.8.0\include" -I"lib" -I".." -I"..\.." -I"..\..\..\..\core" -I"..\..\..\..\widgets\widgets" -I"..\..\..\..\appsCore\designerCore" -I"d:\Qt\OpenSource4.8.0\include\ActiveQt" -I"." -I"d:\Qt\OpenSource4.8.0\mkspecs\default"
LINK        =        g++
LFLAGS        =        -Wl,-s -mthreads -shared -Wl,--out-implib,..\..\..\..\..\build\development\Qt4\plugins\debug\core\\libPage1.a
LIBS        =        -L"d:\Qt\OpenSource4.8.0\lib" Page_resource_res.o -L../../../../../build -L../../../../../build/ -lCuteReportCore -lCuteReportWidgets -lCuteDesigner -lQtScript4 -lQtSql4 -lQtXml4 -lQtGui4 -lQtCore4 
QMAKE         = d:\Qt\OpenSource4.8.0\bin\qmake.exe
IDC           = d:\Qt\OpenSource4.8.0\bin\idc.exe
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = Page_resource_res.o
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

SOURCES       = page.cpp \
		pagegui.cpp \
		layoutmanager.cpp \
		pagemanipulator.cpp \
		pageitemselection.cpp \
		magnets.cpp \
		scene.cpp \
		view.cpp moc_page.cpp \
		moc_pagegui.cpp \
		moc_pagemanipulator.cpp \
		moc_pageitemselection.cpp \
		moc_magnets.cpp \
		moc_scene.cpp \
		moc_view.cpp \
		qrc_page.cpp
OBJECTS       = page.o \
		pagegui.o \
		layoutmanager.o \
		pagemanipulator.o \
		pageitemselection.o \
		magnets.o \
		scene.o \
		view.o \
		moc_page.o \
		moc_pagegui.o \
		moc_pagemanipulator.o \
		moc_pageitemselection.o \
		moc_magnets.o \
		moc_scene.o \
		moc_view.o \
		qrc_page.o
DIST          = 
QMAKE_TARGET  = Page
DESTDIR        = ..\..\..\..\..\build\development\Qt4\plugins\debug\core\ #avoid trailing-slash linebreak
TARGET         = Page1.dll
DESTDIR_TARGET = ..\..\..\..\..\build\development\Qt4\plugins\debug\core\Page1.dll

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

$(DESTDIR_TARGET):  $(OBJECTS) Page_resource_res.o
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) object_script.Page  $(LIBS)

Page_resource_res.o: Page_resource.rc
	windres -i Page_resource.rc -o Page_resource_res.o --include-dir=. $(DEFINES)

Makefile: page.pro  d:/Qt/OpenSource4.8.0/mkspecs/default/qmake.conf d:/Qt/OpenSource4.8.0/mkspecs/qconfig.pri \
		d:/Qt/OpenSource4.8.0/mkspecs/modules/qt_webkit_version.pri \
		d:/Qt/OpenSource4.8.0/mkspecs/features/qt_functions.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/qt_config.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/win32-g++/qmake.conf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/exclusive_builds.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/default_pre.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/default_pre.prf \
		f:/softDevelop/2017/zfg2-cutereport_1.3.1_src/build.cfg \
		f:/softDevelop/2017/zfg2-cutereport_1.3.1_src/profiles/win.pri \
		f:/softDevelop/2017/zfg2-cutereport_1.3.1_src/profiles/common.pri \
		../../plugins.pri \
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
	$(QMAKE) -o Makefile page.pro
d:\Qt\OpenSource4.8.0\mkspecs\qconfig.pri:
d:\Qt\OpenSource4.8.0\mkspecs\modules\qt_webkit_version.pri:
d:\Qt\OpenSource4.8.0\mkspecs\features\qt_functions.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\qt_config.prf:
d:\Qt\OpenSource4.8.0\mkspecs\win32-g++\qmake.conf:
d:\Qt\OpenSource4.8.0\mkspecs\features\exclusive_builds.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\default_pre.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_pre.prf:
f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\build.cfg:
f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\profiles\win.pri:
f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\profiles\common.pri:
..\..\plugins.pri:
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
	@$(QMAKE) -o Makefile page.pro

dist:
	$(ZIP) Page.zip $(SOURCES) $(DIST) page.pro d:\Qt\OpenSource4.8.0\mkspecs\qconfig.pri d:\Qt\OpenSource4.8.0\mkspecs\modules\qt_webkit_version.pri d:\Qt\OpenSource4.8.0\mkspecs\features\qt_functions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt_config.prf d:\Qt\OpenSource4.8.0\mkspecs\win32-g++\qmake.conf d:\Qt\OpenSource4.8.0\mkspecs\features\exclusive_builds.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_pre.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_pre.prf f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\build.cfg f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\profiles\win.pri f:\softDevelop\2017\zfg2-cutereport_1.3.1_src\profiles\common.pri ..\..\plugins.pri d:\Qt\OpenSource4.8.0\mkspecs\features\release.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\rtti.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\exceptions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\stl.prf d:\Qt\OpenSource4.8.0\mkspecs\features\shared.prf d:\Qt\OpenSource4.8.0\mkspecs\features\dll.prf d:\Qt\OpenSource4.8.0\mkspecs\features\warn_on.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\thread.prf d:\Qt\OpenSource4.8.0\mkspecs\features\moc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\windows.prf d:\Qt\OpenSource4.8.0\mkspecs\features\resources.prf d:\Qt\OpenSource4.8.0\mkspecs\features\uic.prf d:\Qt\OpenSource4.8.0\mkspecs\features\yacc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\lex.prf d:\Qt\OpenSource4.8.0\mkspecs\features\include_source_dir.prf  HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) page.o pagegui.o layoutmanager.o pagemanipulator.o pageitemselection.o magnets.o scene.o view.o moc_page.o moc_pagegui.o moc_pagemanipulator.o moc_pageitemselection.o moc_magnets.o moc_scene.o moc_view.o qrc_page.o
	-$(DEL_FILE) ..\..\..\..\..\build\development\Qt4\plugins\debug\core\\libPage1.a
	-$(DEL_FILE) Page_resource_res.o

distclean: clean
	-$(DEL_FILE) $(DESTDIR_TARGET)
	-$(DEL_FILE) Makefile

check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_page.cpp moc_pagegui.cpp moc_pagemanipulator.cpp moc_pageitemselection.cpp moc_magnets.cpp moc_scene.cpp moc_view.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_page.cpp moc_pagegui.cpp moc_pagemanipulator.cpp moc_pageitemselection.cpp moc_magnets.cpp moc_scene.cpp moc_view.cpp
moc_page.cpp: ../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		page.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 page.h -o moc_page.cpp

moc_pagegui.cpp: page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		pagegui.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 pagegui.h -o moc_pagegui.cpp

moc_pagemanipulator.cpp: page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		pagemanipulator.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 pagemanipulator.h -o moc_pagemanipulator.cpp

moc_pageitemselection.cpp: ../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../../../core/cutereport_functions.h \
		../../plugins_common.h \
		pageitemselection.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 pageitemselection.h -o moc_pageitemselection.cpp

moc_magnets.cpp: ../../plugins_common.h \
		magnets.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 magnets.h -o moc_magnets.cpp

moc_scene.cpp: ../../plugins_common.h \
		scene.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 scene.h -o moc_scene.cpp

moc_view.cpp: page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		view.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 view.h -o moc_view.cpp

compiler_rcc_make_all: qrc_page.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_page.cpp
qrc_page.cpp: page.qrc \
		formats.txt \
		images/magnet_bottom.png \
		images/bring-forward.png \
		images/zoom-original.png \
		images/magnet_top.png \
		images/magnet_left.png \
		images/page_icon.png \
		images/align_width.png \
		images/zoom-fit-best.png \
		images/move_up.png \
		images/bring-backward.png \
		images/move_down.png \
		images/align_height.png \
		images/align_right.png \
		images/align_left.png \
		images/zoom-out.png \
		images/align_top.png \
		images/zoom-in.png \
		images/align_bottom.png \
		images/magnet_right.png
	d:\Qt\OpenSource4.8.0\bin\rcc.exe -name page page.qrc -o qrc_page.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 



####### Compile

page.o: page.cpp page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		pagegui.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/bandinterface.h \
		../../../../core/renderediteminterface.h \
		../../../../core/reportcore.h \
		../../../../core/reportinterface.h \
		layoutmanager.h \
		pagemanipulator.h \
		../../../../core/rendererpublicinterface.h \
		../../../../core/designeriteminterface.h \
		../../../../core/scriptengineinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o page.o page.cpp

pagegui.o: pagegui.cpp pagegui.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		../../../../core/reportcore.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/iteminterfaceview.h \
		../../../../core/bandinterface.h \
		pageitemselection.h \
		magnets.h \
		scene.h \
		view.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pagegui.o pagegui.cpp

layoutmanager.o: layoutmanager.cpp layoutmanager.h \
		../../plugins_common.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/bandinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o layoutmanager.o layoutmanager.cpp

pagemanipulator.o: pagemanipulator.cpp pagemanipulator.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		pagegui.h \
		magnets.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/bandinterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pagemanipulator.o pagemanipulator.cpp

pageitemselection.o: pageitemselection.cpp pageitemselection.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../../../core/cutereport_functions.h \
		../../plugins_common.h \
		page.h \
		../../../../core/pageinterface.h \
		pagegui.h \
		../../../../core/iteminterfaceview.h \
		../../../../core/bandinterface.h \
		../../../../core/reportcore.h \
		magnets.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pageitemselection.o pageitemselection.cpp

magnets.o: magnets.cpp magnets.h \
		../../plugins_common.h \
		pagegui.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../../../core/iteminterface.h \
		../../../../core/baseiteminterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/iteminterfaceview.h \
		scene.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o magnets.o magnets.cpp

scene.o: scene.cpp scene.h \
		../../plugins_common.h \
		../../../../core/cutereport_types.h \
		../../../../core/cutereport_globals.h \
		pagegui.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_functions.h \
		../../../../core/reportcore.h \
		../../../../core/baseiteminterface.h \
		magnets.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o scene.o scene.cpp

view.o: view.cpp view.h \
		page.h \
		../../../../core/pageinterface.h \
		../../../../core/reportplugininterface.h \
		../../../../core/cutereport_globals.h \
		../../../../core/cutereport_types.h \
		../../plugins_common.h \
		pagegui.h \
		../../../../core/cutereport_functions.h \
		../../../../core/reportcore.h \
		../../../../core/baseiteminterface.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o view.o view.cpp

moc_page.o: moc_page.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_page.o moc_page.cpp

moc_pagegui.o: moc_pagegui.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_pagegui.o moc_pagegui.cpp

moc_pagemanipulator.o: moc_pagemanipulator.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_pagemanipulator.o moc_pagemanipulator.cpp

moc_pageitemselection.o: moc_pageitemselection.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_pageitemselection.o moc_pageitemselection.cpp

moc_magnets.o: moc_magnets.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_magnets.o moc_magnets.cpp

moc_scene.o: moc_scene.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_scene.o moc_scene.cpp

moc_view.o: moc_view.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_view.o moc_view.cpp

qrc_page.o: qrc_page.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_page.o qrc_page.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

