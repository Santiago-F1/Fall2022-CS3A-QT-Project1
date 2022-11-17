QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    help.cpp \
    main.cpp \
    mainwindow.cpp \
    readFile.cpp \
    teamClass.cpp \
    teamVector.cpp

HEADERS += \
    admin.h \
    help.h \
    mainwindow.h \
    readFile.h \
    teamDefinition.h \
    teamFile.h

FORMS += \
    admin.ui \
    help.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    newTeams.qrc \
    src.qrc \
    teamFile.qrc
