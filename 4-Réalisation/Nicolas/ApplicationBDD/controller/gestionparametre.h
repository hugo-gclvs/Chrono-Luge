///////////////////////////////////////////////////////////
//  GestionParametre.h
//  Implementation of the Class GestionParametre
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "../entity/piste.h"
#include "../boundary/interfacebdd.h"
#include <QString>

#ifndef GESTIONPARAMETRE_H
#define GESTIONPARAMETRE_H


class GestionParametre
{

public:
    GestionParametre();
    virtual ~GestionParametre();
    Piste *m_Piste;
    InterfaceBDD *m_InterfaceBDD;

    QString ajouterLuge(QString tagRFIDLuge, int numeroLuge);
    bool supprimerLuge(QString tagRFIDLuge, int numeroLuge);
    bool modifierPiste(int taillePiste);

};
#endif // GESTIONPARAMETRE_H
