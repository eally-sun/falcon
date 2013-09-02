# =====================================================================================
# 
#       Filename:  falcon.pro
#
#    Description:  为 Win32 环境书写的 Qt 项目文件
#
#        Created:  2013年08月18日 20时30分01秒
#
#         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
#        Company:  Class 1107 of Computer Science and Technology
#
# =====================================================================================

QT += xml
QT += network

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += include

# debug control
#DEFINES+= QT_NO_DEBUG_OUTPUT

# include file
HEADERS +=  include/MainWindow.h include/Debug.h include/LinkTreeWidget.h \
			include/MainStackWidget.h include/ProcessTreeView.h include/FluxViewWidget.h \
			include/LinkProcessWidget.h include/LinkCmdWidget.h include/InfoWidget.h \
			include/MainListWidget.h include/ScreenViewWidget.h include/FluxWidget.h \
			include/qcustomplot.h include/FalconXml.h include/ControlSocket.h \
			include/SettingDialog.h

# code file
SOURCES +=  src/Main.cpp src/MainWindow.cpp src/LinkTreeWidget.cpp \
			src/MainStackWidget.cpp src/ProcessTreeView.cpp src/FluxViewWidget.cpp \
			src/LinkProcessWidget.cpp src/LinkCmdWidget.cpp src/InfoWidget.cpp \
			src/MainListWidget.cpp src/ScreenViewWidget.cpp src/FluxWidget.cpp \
			src/qcustomplot.cpp src/FalconXml.cpp src/ControlSocket.cpp \
			src/SettingDialog.cpp

# ui file
FORMS += ui/SettingDialog.ui 

RESOURCES += falcon.qrc
RC_FILE = logo.rc

# language
TRANSLATIONS = tr/language.ts
