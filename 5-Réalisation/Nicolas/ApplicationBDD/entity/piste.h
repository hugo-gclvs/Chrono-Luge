///////////////////////////////////////////////////////////
//  Piste.h
//  Implementation of the Class Piste
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "luge.h"
#include <QString>


#ifndef PISTE_H
#define PISTE_H


class Piste
{

public:
    Piste();
    virtual ~Piste();
    Luge *m_Luge;

private:
    QString nomPiste;
    int taillePiste;

};
#endif // PISTE_H
