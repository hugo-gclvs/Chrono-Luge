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

    QString temps,vitesse;
    QString tagRFID;
    QString controleur;

    if(trame.startsWith=='$')
    {
        if(trame.endsWith=='*')
        {
            if(trameSeparer[3]=='ff')
            {

                temps=trameSeparer[0];
                vitesse=trameSeparer[1];
                tagRFID=trameSeparer[2];
                controleur=trameSeparer[3];
            }
        }
        else
        {
            qDebug()<<"trame incorrect2";
        }
    }
    else
    {
        qDebug()<<"trame incorrect1";
    }

    QStringList trameSeparer = trame.split("/");



    qDebug()<<temps;
    qDebug()<<vitesse;
    qDebug()<<tagRFID;
    qDebug()<<controleur;
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
