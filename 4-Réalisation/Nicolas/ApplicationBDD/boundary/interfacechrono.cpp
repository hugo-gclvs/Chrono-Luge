///////////////////////////////////////////////////////////
//  InterfaceChrono.cpp
//  Implementation of the Class InterfaceChrono
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "interfacechrono.h"


InterfaceChrono::InterfaceChrono()
{
    if(listen(QHostAddress::Any,5588))
        qDebug()<<"serveur demarré sur le port 5588";
    else
        qDebug()<<"le serveur n'a pu demarré :" <<errorString();

    connect(this,SIGNAL(newConnection()),this,SLOT(onNewConnection()));

}


InterfaceChrono::~InterfaceChrono()
{

}


bool InterfaceChrono::sauvegardeChrono(QString trame)
{
    QString controllerDeTrame;
    int nombreCarac;

    if(trame.startsWith("$"))
    {
        if(trame.endsWith("*"))
        {
            trame.remove("$");
            trame.remove("*");

            nombreCarac=trame.count("/");

            if(nombreCarac==3)
            {
                QStringList trameSeparer = trame.split("/");
                controllerDeTrame=trameSeparer[3];

                if(controllerDeTrame == "ff")
                {
                    m_GestionChrono->decoderTrame(trame);
                    return 1;
                }
                else
                {
                    qDebug()<<"trame incorrect4";
                    return 0;
                }
            }
            else
            {
                qDebug()<<"trame incorrect3";
                return 0;
            }
        }
        else
        {
            qDebug()<<"trame incorrect2";
            return 0;
        }
    }
    else
    {
        qDebug()<<"trame incorrect1";
        return 0;
    }
}


bool InterfaceChrono::envoieEsp(QString trame){

    return  NULL;
}

void InterfaceChrono::onNewConnection()
{
    QTcpSocket* client=nextPendingConnection();
    connect(client,SIGNAL(readyRead()),this,SLOT(onReadyRead()));
    connect(client,SIGNAL(disconnected()),this,SLOT(onDisconnect()));
}

void InterfaceChrono::onReadyRead()
{
    QTcpSocket* client=static_cast<QTcpSocket*>(QObject::sender());
    QByteArray message = client->readAll();
    QDataStream flux(&message,QIODevice::ReadWrite);
    QString trameSauvegarde;
    flux >> trameSauvegarde;
    qDebug() <<trameSauvegarde;
    if(sauvegardeChrono(trameSauvegarde))
    {
        qDebug()<<"trame sauvegarder";
    }
    else
    {
        qDebug()<<"Erreur de conformite de la trame";
    }

}

void InterfaceChrono::onDisconnect()
{
    QTcpSocket* client=static_cast<QTcpSocket*>(QObject::sender());
    client->deleteLater();
}
