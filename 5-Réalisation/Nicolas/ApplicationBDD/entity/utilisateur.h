///////////////////////////////////////////////////////////
//  Utilisateur.h
//  Implementation of the Class Utilisateur
//  Created on:      08-f�vr.-2021 11:35:52
//  Original author: doulayn
///////////////////////////////////////////////////////////

#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>

class Utilisateur
{

public:
    Utilisateur();
    virtual ~Utilisateur();

private:
    QString pseudoUtilisateur;
    QString mdpUtilisateur;
    enum { user, admin } droitUtilisateur;

};
#endif // UTILISATEUR_H
