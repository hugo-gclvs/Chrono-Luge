QT -= gui
QT += sql widgets
QT += network

CONFIG += c++11 console
CONFIG -= app_bundle

DEFINES += _CRT_SECURE_NO_WARNINGS

SOURCES +=         main.cpp \
    boundary/interfacebdd.cpp \
    boundary/interfacechrono.cpp \
    controller/gestionchrono.cpp \
    controller/gestionparametre.cpp \
    controller/gestionvisualisationtempsvitesse.cpp \
    entity/descente.cpp \
    entity/luge.cpp \
    entity/piste.cpp \
    entity/profil.cpp \
    entity/statistique.cpp \
    entity/utilisateur.cpp

HEADERS += \
    boundary/interfacebdd.h \
    boundary/interfacechrono.h \
    controller/gestionchrono.h \
    controller/gestionparametre.h \
    controller/gestionvisualisationtempsvitesse.h \
    entity/descente.h \
    entity/luge.h \
    entity/piste.h \
    entity/profil.h \
    entity/statistique.h \
    entity/utilisateur.h
