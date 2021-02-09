///////////////////////////////////////////////////////////
//  InterfaceChrono.h
//  Implementation of the Class InterfaceChrono
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "./controller/gestionchrono.h"
#include <QString>
#include <QTcpServer>
#include <QTcpSocket>
#include <QDataStream>

#ifndef INTERFACECHRONO_H
#define INTERFACECHRONO_H


class InterfaceChrono : public QTcpServer
{
    Q_OBJECT

public:
    InterfaceChrono();
    virtual ~InterfaceChrono();
    GestionChrono *m_GestionChrono;

    bool sauvegardeChrono(QString trame);
    bool envoieEsp(QString trame);

private:
    QString trame;
    QString ip;
    int port;

private slots :
    void onNewConnection();
    void onReadyRead();
    void onDisconnect();

};
#endif // INTERFACECHRONO_H
