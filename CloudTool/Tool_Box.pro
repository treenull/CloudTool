#-------------------------------------------------
# The LGPL License
#
# Project created by QtCreator 2019-09-14T16:42:25
#
# Author :  WYJ
#
#-------------------------------------------------


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ToolBox

TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

RC_FILE += version_logo.rc


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    Page_0/page_0.cpp \
    Page_1/page_1.cpp \
    Page_2/page_2.cpp \
    Page_3/page_3.cpp \
    Page_4/page_4.cpp \
    Page_5/page_5.cpp \
    Page_6/page_6.cpp \
    Menu/menu.cpp \



HEADERS += \
        mainwindow.h \
    Page_0/page_0.h \
    Page_1/page_1.h \
    Page_2/page_2.h \
    Page_3/page_3.h \
    Page_4/page_4.h \
    Page_5/page_5.h \
    Page_6/page_6.h \
    Menu/menu.h \


FORMS += \
        mainwindow.ui \
    Page_0/page_0.ui \
    Page_1/page_1.ui \
    Page_2/page_2.ui \
    Page_3/page_3.ui \
    Page_4/page_4.ui \
    Page_5/page_5.ui \
    Page_6/page_6.ui \
    Menu/menu.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

