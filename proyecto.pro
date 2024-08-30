QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buscarreservacion.cpp \
    crearmesas.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    modificar_reserva.cpp \
    nuevareserva.cpp

HEADERS += \
    buscarreservacion.h \
    crearmesas.h \
    login.h \
    mainwindow.h \
    modificar_reserva.h \
    nuevareserva.h

FORMS += \
    buscarreservacion.ui \
    crearmesas.ui \
    login.ui \
    mainwindow.ui \
    modificar_reserva.ui \
    nuevareserva.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
