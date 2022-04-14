QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ExitWindow.cpp \
    MainWindow.cpp \
    SettingsWindow.cpp \
    TopicOneLevelEnd.cpp \
    TopicOneLevelOne.cpp \
    TopicOneLevelTwo.cpp \
    TopicOneLevelsWindow.cpp \
    TopicWindow.cpp \
    main.cpp

HEADERS += \
    ExitWindow.h \
    MainWindow.h \
    SettingsWindow.h \
    TopicOneLevelEnd.h \
    TopicOneLevelOne.h \
    TopicOneLevelTwo.h \
    TopicOneLevelsWindow.h \
    TopicWindow.h

FORMS += \
    ExitWindow.ui \
    MainWindow.ui \
    SettingsWindow.ui \
    TopicOneLevelEnd.ui \
    TopicOneLevelOne.ui \
    TopicOneLevelTwo.ui \
    TopicOneLevelsWindow.ui \
    TopicWindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
