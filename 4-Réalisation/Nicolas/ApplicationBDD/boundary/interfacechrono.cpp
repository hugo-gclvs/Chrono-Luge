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





bool InterfaceChrono::sauvegardeChrono(QString trame){

    return  NULL;
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
}

void InterfaceChrono::onDisconnect()
{
    QTcpSocket* client=static_cast<QTcpSocket*>(QObject::sender());
    client->deleteLater();
}
