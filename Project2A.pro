INCLUDEPATH += C:/Users/Mega pc/Desktop/OpenSSL-1.1.1h_win32/include
LIBS += -LC:/Users/Mega\ pc/Documents/Project2A/OpenSSL-1.1.1h_win32/magma_impl -lssleay32 -llibeay32








    QT       += sql charts printsupport network

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
    crud.cpp \
    employe.cpp \
    main.cpp \
    mainwindow.cpp \
    pdf.cpp \
    rh.cpp \
    connection.cpp \
    signup.cpp \
    clickablelabel.cpp \
    user.cpp

HEADERS += \
    crud.h \
    employe.h \
    mainwindow.h \
    pdf.h \
    rh.h \
    connection.h \
    signup.h \
    clickablelabel.h \
    user.h

FORMS += \
    crud.ui \
    mainwindow.ui \
    pdf.ui \
    rh.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc
