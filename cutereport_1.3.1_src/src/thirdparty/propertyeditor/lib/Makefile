#############################################################################
# Makefile for building: PropertyEditor
# Generated by qmake (2.01a) (Qt 4.8.0) on: ??? ?? 22 16:06:02 2017
# Project:  lib.pro
# Template: lib
# Command: d:\Qt\OpenSource4.8.0\bin\qmake.exe -o Makefile lib.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DUNICODE -DQT_LARGEFILE_SUPPORT -DREPORT_LICENSE=\"LGPL\" -DDESIGNER_LICENSE=\"GPL\" -DLGPL -DBUILD_DATETIME="\"??? ?? 22 16:06:01 2017\"" -DGLOBAL_LOG_FILE -DREPORT_VARS_PATH=\"temp/cutereport/\" -DREPORT_BINARIES_PATH=\"\" -DREPORT_LIBS_PATH=\"\" -DREPORT_HEADERS_PATH=\"development/include/cutereport\" -DREPORT_RESOURCES_PATH=\"cutereport_resources/share\" -DREPORT_IMAGES_PATH=\"cutereport_resources/images\" -DREPORT_PLUGINS_PATH=\"development/Qt4/plugins/debug/core/\" -DREPORT_EXAMPLES_PATH=\"development/examples\" -DREPORT_TEMPLATES_PATH=\"cutereport_resources/templates\" -DREPORT_DESIGNER_PATH=\"\" -DREPORT_DESIGNER_PLUGINS_PATH=\"development/Qt4/plugins/debug/designer\" -DREPORT_DESIGNER_LIBS_PATH=\"\" -DREPORT_DESIGNER_IMAGES_PATH=\"cutereport_resources/designer/images\" -DREPORT_DESIGNER_RESOURCES_PATH=\"cutereport_resources/designer/share\" -DPROPERTYEDITOR_LIBS=\"\" -DPROPERTYEDITOR_HEADERS_PATH=\"development/include/propertyeditor\" -DPROPERTYEDITOR_PLUGINS_PATH=\"development/Qt4/plugins/debug/propertyeditor\" -DREPORT_LOGFILENAME=\"\" -DCOMPILER_VER=\"mingw\" -DPROCESSOR_TYPE=\"\" -DREPORT_VERSION=\"1.3.1\" -DPROPERTYEDITOR_LIB_EXPORTS -DQT_DLL -DQT_NO_DEBUG -DQT_SCRIPT_LIB -DQT_SQL_LIB -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_HAVE_MMX -DQT_HAVE_3DNOW -DQT_HAVE_SSE -DQT_HAVE_MMXEXT -DQT_HAVE_SSE2 -DQT_THREAD_SUPPORT
CFLAGS        = -O2 -Wall $(DEFINES)
CXXFLAGS      = -O2 -frtti -fexceptions -mthreads -Wall $(DEFINES)
INCPATH       = -I"d:\Qt\OpenSource4.8.0\include\QtCore" -I"d:\Qt\OpenSource4.8.0\include\QtGui" -I"d:\Qt\OpenSource4.8.0\include\QtXml" -I"d:\Qt\OpenSource4.8.0\include\QtSql" -I"d:\Qt\OpenSource4.8.0\include\QtScript" -I"d:\Qt\OpenSource4.8.0\include" -I"lib" -I".." -I"." -I"d:\Qt\OpenSource4.8.0\include\ActiveQt" -I"." -I"." -I"d:\Qt\OpenSource4.8.0\mkspecs\default"
LINK        =        g++
LFLAGS        =        -Wl,-s -shared -mthreads -Wl,--out-implib,..\..\..\..\build\\libPropertyEditor1.a
LIBS        =        -L"d:\Qt\OpenSource4.8.0\lib" PropertyEditor_resource_res.o -lQtScript4 -lQtSql4 -lQtXml4 -lQtGui4 -lQtCore4 
QMAKE         = d:\Qt\OpenSource4.8.0\bin\qmake.exe
IDC           = d:\Qt\OpenSource4.8.0\bin\idc.exe
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = PropertyEditor_resource_res.o
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

SOURCES       = propertyeditor.cpp \
		propertymodel.cpp \
		propertyinterface.cpp \
		propertydelegate.cpp \
		propertyvalidator.cpp \
		propertyeditorcore.cpp moc_propertyeditor.cpp \
		moc_propertymodel.cpp \
		moc_propertyinterface.cpp \
		moc_propertydelegate.cpp \
		moc_propertyvalidator.cpp \
		moc_propertyeditorcore.cpp
OBJECTS       = propertyeditor.o \
		propertymodel.o \
		propertyinterface.o \
		propertydelegate.o \
		propertyvalidator.o \
		propertyeditorcore.o \
		moc_propertyeditor.o \
		moc_propertymodel.o \
		moc_propertyinterface.o \
		moc_propertydelegate.o \
		moc_propertyvalidator.o \
		moc_propertyeditorcore.o
DIST          = 
QMAKE_TARGET  = PropertyEditor
DESTDIR        = ..\..\..\..\build\ #avoid trailing-slash linebreak
TARGET         = PropertyEditor.dll
DESTDIR_TARGET = ..\..\..\..\build\PropertyEditor.dll

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

$(DESTDIR_TARGET): ui_propertyeditor.h $(OBJECTS) PropertyEditor_resource_res.o
	$(LINK) $(LFLAGS) -o $(DESTDIR_TARGET) object_script.PropertyEditor  $(LIBS)

PropertyEditor_resource_res.o: PropertyEditor_resource.rc
	windres -i PropertyEditor_resource.rc -o PropertyEditor_resource_res.o --include-dir=. $(DEFINES)

Makefile: lib.pro  d:/Qt/OpenSource4.8.0/mkspecs/default/qmake.conf d:/Qt/OpenSource4.8.0/mkspecs/qconfig.pri \
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
		d:/Qt/OpenSource4.8.0/mkspecs/features/release.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/default_post.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/default_post.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/shared.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/dll.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/rtti.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/exceptions.prf \
		d:/Qt/OpenSource4.8.0/mkspecs/features/win32/stl.prf \
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
	$(QMAKE) -o Makefile lib.pro
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
d:\Qt\OpenSource4.8.0\mkspecs\features\release.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\default_post.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_post.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\shared.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\dll.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\rtti.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\exceptions.prf:
d:\Qt\OpenSource4.8.0\mkspecs\features\win32\stl.prf:
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
	@$(QMAKE) -o Makefile lib.pro

dist:
	$(ZIP) PropertyEditor.zip $(SOURCES) $(DIST) lib.pro d:\Qt\OpenSource4.8.0\mkspecs\qconfig.pri d:\Qt\OpenSource4.8.0\mkspecs\modules\qt_webkit_version.pri d:\Qt\OpenSource4.8.0\mkspecs\features\qt_functions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt_config.prf d:\Qt\OpenSource4.8.0\mkspecs\win32-g++\qmake.conf d:\Qt\OpenSource4.8.0\mkspecs\features\exclusive_builds.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_pre.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_pre.prf ..\..\..\..\build.cfg ..\..\..\..\profiles\win.pri ..\..\..\..\profiles\common.pri d:\Qt\OpenSource4.8.0\mkspecs\features\release.prf d:\Qt\OpenSource4.8.0\mkspecs\features\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\default_post.prf d:\Qt\OpenSource4.8.0\mkspecs\features\shared.prf d:\Qt\OpenSource4.8.0\mkspecs\features\dll.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\rtti.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\exceptions.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\stl.prf d:\Qt\OpenSource4.8.0\mkspecs\features\warn_on.prf d:\Qt\OpenSource4.8.0\mkspecs\features\qt.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\thread.prf d:\Qt\OpenSource4.8.0\mkspecs\features\moc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\win32\windows.prf d:\Qt\OpenSource4.8.0\mkspecs\features\resources.prf d:\Qt\OpenSource4.8.0\mkspecs\features\uic.prf d:\Qt\OpenSource4.8.0\mkspecs\features\yacc.prf d:\Qt\OpenSource4.8.0\mkspecs\features\lex.prf d:\Qt\OpenSource4.8.0\mkspecs\features\include_source_dir.prf  HEADERS RESOURCES IMAGES SOURCES OBJECTIVE_SOURCES FORMS YACCSOURCES YACCSOURCES LEXSOURCES 

clean: compiler_clean 
	-$(DEL_FILE) propertyeditor.o propertymodel.o propertyinterface.o propertydelegate.o propertyvalidator.o propertyeditorcore.o moc_propertyeditor.o moc_propertymodel.o moc_propertyinterface.o moc_propertydelegate.o moc_propertyvalidator.o moc_propertyeditorcore.o
	-$(DEL_FILE) ..\..\..\..\build\\libPropertyEditor1.a
	-$(DEL_FILE) PropertyEditor_resource_res.o

distclean: clean
	-$(DEL_FILE) $(DESTDIR_TARGET)
	-$(DEL_FILE) Makefile

check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_propertyeditor.cpp moc_propertymodel.cpp moc_propertyinterface.cpp moc_propertydelegate.cpp moc_propertyvalidator.cpp moc_propertyeditorcore.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_propertyeditor.cpp moc_propertymodel.cpp moc_propertyinterface.cpp moc_propertydelegate.cpp moc_propertyvalidator.cpp moc_propertyeditorcore.cpp
moc_propertyeditor.cpp: globals.h \
		propertyeditor.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertyeditor.h -o moc_propertyeditor.cpp

moc_propertymodel.cpp: propertymodel.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertymodel.h -o moc_propertymodel.cpp

moc_propertyinterface.cpp: propertyvalidator.h \
		globals.h \
		propertyinterface.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertyinterface.h -o moc_propertyinterface.cpp

moc_propertydelegate.cpp: propertydelegate.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertydelegate.h -o moc_propertydelegate.cpp

moc_propertyvalidator.cpp: globals.h \
		propertyvalidator.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertyvalidator.h -o moc_propertyvalidator.cpp

moc_propertyeditorcore.cpp: globals.h \
		propertyeditorcore.h
	d:\Qt\OpenSource4.8.0\bin\moc.exe $(DEFINES) $(INCPATH) -D__GNUC__ -DWIN32 propertyeditorcore.h -o moc_propertyeditorcore.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_propertyeditor.h
compiler_uic_clean:
	-$(DEL_FILE) ui_propertyeditor.h
ui_propertyeditor.h: propertyeditor.ui
	d:\Qt\OpenSource4.8.0\bin\uic.exe propertyeditor.ui -o ui_propertyeditor.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 



####### Compile

propertyeditor.o: propertyeditor.cpp ui_propertyeditor.h \
		propertyeditor.h \
		globals.h \
		propertyinterface.h \
		propertyvalidator.h \
		propertymodel.h \
		propertydelegate.h \
		propertyeditorcore.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertyeditor.o propertyeditor.cpp

propertymodel.o: propertymodel.cpp propertymodel.h \
		propertyinterface.h \
		propertyvalidator.h \
		globals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertymodel.o propertymodel.cpp

propertyinterface.o: propertyinterface.cpp propertyinterface.h \
		propertyvalidator.h \
		globals.h \
		propertymodel.h \
		propertyeditor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertyinterface.o propertyinterface.cpp

propertydelegate.o: propertydelegate.cpp propertydelegate.h \
		propertyinterface.h \
		propertyvalidator.h \
		globals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertydelegate.o propertydelegate.cpp

propertyvalidator.o: propertyvalidator.cpp propertyvalidator.h \
		globals.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertyvalidator.o propertyvalidator.cpp

propertyeditorcore.o: propertyeditorcore.cpp propertyeditorcore.h \
		globals.h \
		propertyinterface.h \
		propertyvalidator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o propertyeditorcore.o propertyeditorcore.cpp

moc_propertyeditor.o: moc_propertyeditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertyeditor.o moc_propertyeditor.cpp

moc_propertymodel.o: moc_propertymodel.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertymodel.o moc_propertymodel.cpp

moc_propertyinterface.o: moc_propertyinterface.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertyinterface.o moc_propertyinterface.cpp

moc_propertydelegate.o: moc_propertydelegate.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertydelegate.o moc_propertydelegate.cpp

moc_propertyvalidator.o: moc_propertyvalidator.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertyvalidator.o moc_propertyvalidator.cpp

moc_propertyeditorcore.o: moc_propertyeditorcore.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_propertyeditorcore.o moc_propertyeditorcore.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

