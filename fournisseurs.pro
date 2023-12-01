QT       += core gui sql multimedia multimediawidgets network printsupport widgets axcontainer charts serialport svg
QT += multimedia multimediawidgets


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    widget.cpp \
    connection.cpp \
    fourn.cpp \
    fournisseur.cpp \
    main.cpp \
    mainwindow.cpp \
    qrcodegen.cpp

HEADERS += \
    arduino.h \
    widget.h \
    connection.h \
    fourn.h \
    fournisseur.h \
    mainwindow.h \
    qrcodegen.h

FORMS += \
    widget.ui \
    fourn.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
