///////////////////////////////////////////////////////////
//  Profil.h
//  Implementation of the Class Profil
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "statistique.h"
#include "utilisateur.h"
#include <QString>


#ifndef PROFIL_H
#define PROFIL_H


class Profil
{

public:
    Profil();
    virtual ~Profil();
    Statistique *m_Statistique;
    Utilisateur *m_Utilisateur;

private:
    QString nomProfil;
    QString prenomProfil;
    int ageProfil;
    QString mailProfil;
    photo photoProfil;

};
#endif // PROFIL_H
