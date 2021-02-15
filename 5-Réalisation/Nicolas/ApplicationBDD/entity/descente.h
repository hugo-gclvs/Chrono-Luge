///////////////////////////////////////////////////////////
//  Descente.h
//  Implementation of the Class Descente
//  Created on:      08-f�vr.-2021 11:35:50
//  Original author: doulayn
///////////////////////////////////////////////////////////

#ifndef DESCENTE_H
#define DESCENTE_H

#include "piste.h"
#include "luge.h"
#include "profil.h"
#include <QString>
#include <QDateTime>

class Descente
{

public:
    Descente();
    virtual ~Descente();
    Piste *m_Piste;
    Luge *m_Luge;
    Profil *m_Profil;

private:
    double tempsDescente;
    double vitesseDescente;
    QDate dateDescente;
    QTime heureDescente;
    int classement10JoursDescente;
    int classement10MoisDescente;
    int classement20GlobalDescente;

};
#endif
