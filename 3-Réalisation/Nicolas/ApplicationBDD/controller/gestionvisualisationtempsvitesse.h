///////////////////////////////////////////////////////////
//  GestionVisualisationTempsVitesse.h
//  Implementation of the Class GestionVisualisationTempsVitesse
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////


#include "../entity/piste.h"
#include "../boundary/interfacebdd.h"
#include <QString>
#include "../entity/profil.h"


#ifndef GESTIONVISUALISATIONTEMPSVITESSE_H
#define GESTIONVISUALISATIONTEMPSVITESSE_H


class GestionVisualisationTempsVitesse
{

public:
    GestionVisualisationTempsVitesse();
    virtual ~GestionVisualisationTempsVitesse();
    Profil *m_Profil;
    InterfaceBDD *m_InterfaceBDD;


    bool ajouterProfil(int photoProfil, QString mailProfil, int ageProfil, QString prenomProfil, QString nomProfil);
    bool lierProfilDescente(int idProfil, QString QRCode);
    bool rechercheHistoriqueDescente(int idProfil);
    bool rechercheStatistique(int idProfil);
    bool rechercheProfil(QString pseudoUtilisateur, QString mdpUtilisateur);

};
#endif // GESTIONVISUALISATIONTEMPSVITESSE_H
