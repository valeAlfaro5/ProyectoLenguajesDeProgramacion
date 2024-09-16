QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ManejoRestaurante.cpp \
    buscarreservacion.cpp \
    crearmesas3.cpp \
    databasemanager.cpp \
    form.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    manejarmesas2.cpp \
    nuevareserva.cpp \
    modificar_reserva.cpp \
    nuevareserva_cliente.cpp


HEADERS += \
    ManejoRestaurante.h \
    buscarreservacion.h \
    crearmesas3.h \
    databasemanager.h \
    form.h \
    login.h \
    mainwindow.h \
    manejarmesas2.h \
    nuevareserva.h \
    modificar_reserva.h \
    nuevareserva_cliente.h

FORMS += \
    buscarreservacion.ui \
    crearmesas3.ui \
    form.ui \
    login.ui \
    mainwindow.ui \
    manejarmesas2.ui \
    nuevareserva.ui \
    modificar_reserva.ui \
    nuevareserva_cliente.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
