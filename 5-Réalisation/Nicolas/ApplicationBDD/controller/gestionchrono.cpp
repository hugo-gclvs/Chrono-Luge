///////////////////////////////////////////////////////////
//  GestionChrono.cpp
//  Implementation of the Class GestionChrono
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "gestionChrono.h"


GestionChrono::GestionChrono(){

}



GestionChrono::~GestionChrono(){

}





bool GestionChrono::sauvegardeChrono(QString tagRFID, double vitesse, double temps)
{
    int numeroLuge;

    m_InterfaceBDD->ajouterDescente(,,vitesse,temps);
    numeroLuge = m_InterfaceBDD->getLuge(tagRFID);
    encoderTrame();

    return  NULL;
}

//trame de test $12599/2153/1bf3221a/ff*
//reception = 12599 2153 1bf3221a ff
//temps = 125.59
//vitesse = 21.53
//tagRFID = 1bf3221a
//controleur = ff
void GestionChrono::decoderTrame(QString trame)
{
    qDebug()<<trame;

    QString tempsConversion,vitesseConversion,tagRFID;
    int nombreCarac;
    double temps,vitesse;

    QStringList trameSeparer = trame.split("/");

    tempsConversion=trameSeparer[0];
    vitesseConversion=trameSeparer[1];
    tagRFID=trameSeparer[2];

    tempsConversion.insert(3,QString("."));
    vitesseConversion.insert(2,QString("."));

    temps=tempsConversion.toDouble();
    vitesse=vitesseConversion.toDouble();

    qDebug()<<temps;
    qDebug()<<vitesse;
    qDebug()<<tagRFID;

    /*Creer les entitées avec les data*/

    sauvegardeChrono(tagRFID,vitesse,temps);

}


QString GestionChrono::encoderTrame(QString tagRFIDLuge, int numeroLuge, int taillePiste){

    return  NULL;
}


int GestionChrono::getLuge(QString tagRFIDLuge){

    return 0;
}


int GestionChrono::getTaillePiste(int numeroLuge){

    return 0;
}


QString GestionChrono::stockerRFID(QString tagRFIDLuge){

    return  NULL;
}
