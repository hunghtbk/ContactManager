TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    contactmodel.cpp \
    datamodel.cpp \
    server.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

DISTFILES += \
    ContactQML/ContactQML.qml \
    ContactQML/Button.qml \
    ContactQML/ConfigContact.qml \
    ContactQML/ContactQML.qmlproject \
    ContactQML/Icon/background.jfif \
    ContactQML/Icon/contact-background.jpg \
    ContactQML/Icon/delete_icon.png \
    ContactQML/Icon/eidt_icon.png

HEADERS += \
    contactmodel.h \
    datamodel.h \
    server.h
