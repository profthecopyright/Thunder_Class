QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Qt/adminwindow.cpp \
    Qt/classroomwindow.cpp \
    Qt/dialogadduser.cpp \
    Qt/loginwindow.cpp \
    Qt/qtworkflow.cpp \
    Qt/teachwindow.cpp \
    core/csvio.cpp \
    core/loginbot.cpp

HEADERS += \
    Qt/adminwindow.h \
    Qt/classroomwindow.h \
    Qt/dialogadduser.h \
    Qt/loginwindow.h \
    Qt/qtworkflow.h \
    Qt/teachwindow.h \
    core/csvio.h \
    core/loginbot.h \
    core/workflow.h


FORMS += \
    Qt/adminwindow.ui \
    Qt/classroomwindow.ui \
    Qt/dialogadduser.ui \
    Qt/loginwindow.ui \
    Qt/teachwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Qt/ThunderClass_zh_CN.ts \
    Qt/readme.md \
    core/adminList.csv \
    core/readme.md
