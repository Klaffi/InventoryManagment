QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += "C:/Program Files/PostgreSQL/16/include"
LIBS += "C:/Program Files/PostgreSQL/16/lib/libpq.lib"

SOURCES += \
    all_users.cpp \
    delete_equipment.cpp \
    delete_user.cpp \
    edit_equip.cpp \
    edit_story.cpp \
    main.cpp \
    login.cpp \
    mainpage.cpp \
    mainpage_user.cpp \
    new_equipment.cpp \
    new_user.cpp \
    take_place.cpp

HEADERS += \
    all_users.h \
    delete_equipment.h \
    delete_user.h \
    edit_equip.h \
    edit_story.h \
    login.h \
    mainpage.h \
    mainpage_user.h \
    new_equipment.h \
    new_user.h \
    take_place.h

FORMS += \
    all_users.ui \
    delete_equipment.ui \
    delete_user.ui \
    edit_equip.ui \
    edit_story.ui \
    login.ui \
    mainpage.ui \
    mainpage_user.ui \
    new_equipment.ui \
    new_user.ui \
    take_place.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
