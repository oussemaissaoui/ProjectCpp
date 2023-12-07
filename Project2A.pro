
QT       += sql charts printsupport serialport
QT       += core gui sql multimedia multimediawidgets network printsupport widgets axcontainer charts serialport svg
QT += multimedia multimediawidgets

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
    aidialog.cpp \
    crud.cpp \
    dialog.cpp \
    employe.cpp \
    finger.cpp \
    fourn.cpp \
    fournisseur.cpp \
    gest_vehi.cpp \
    main.cpp \
    mainwindow.cpp \
    notification.cpp \
    pdf.cpp \
    piec.cpp \
    reserv.cpp \
    reservation.cpp \
    rh.cpp \
    connection.cpp \
    signup.cpp \
    arduino.cpp \
    clickablelabel.cpp \
    qrcodegen.cpp \
    stat_vehi.cpp \
    user.cpp \
    piece.cpp \
    smtp.cpp \
    Facture.cpp \
    voiture.cpp \
    widget.cpp

HEADERS += \
    aidialog.h \
    crud.h \
    dialog.h \
    employe.h \
    finger.h \
    fourn.h \
    fournisseur.h \
    gest_vehi.h \
    mainwindow.h \
    notification.h \
    pdf.h \
    piec.h \
    reserv.h \
    reservation.h \
    rh.h \
    connection.h \
    signup.h \
    arduino.h \
    clickablelabel.h \
    qrcodegen.h \
    stat_vehi.h \
    user.h \
    piece.h \
    smtp.h \
    Facture.h \
    voiture.h \
    widget.h

FORMS += \
    aidialog.ui \
    crud.ui \
    dialog.ui \
    finger.ui \
    fourn.ui \
    gest_vehi.ui \
    mainwindow.ui \
    notification.ui \
    pdf.ui \
    piec.ui \
    reserv.ui \
    rh.ui \
    signup.ui \
    stat_vehi.ui \
    widget.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc



