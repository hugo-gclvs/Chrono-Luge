///////////////////////////////////////////////////////////
//  GestionChrono.h
//  Implementation of the Class GestionChrono
//  Created on:      08-f�vr.-2021 11:35:50
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "../entity/descente.h"
#include "../boundary/interfacebdd.h"
#include <QString>


#ifndef GESTIONCHRONO_H
#define GESTIONCHRONO_H

class GestionChrono
{

public:
    GestionChrono();
    virtual ~GestionChrono();
    Descente *m_Descente;
    InterfaceBDD *m_InterfaceBDD;

    bool sauvegardeChrono(QString tagRFID, double vitesse, double temps);
    void decoderTrame(QString trame);
    QString encoderTrame(QString tagRFIDLuge, int numeroLuge, int taillePiste);
    int getLuge(QString tagRFIDLuge);
    int getTaillePiste(int numeroLuge);
    QString stockerRFID(QString tagRFIDLuge);


};
#endif //GESTIONCHRONO_H
