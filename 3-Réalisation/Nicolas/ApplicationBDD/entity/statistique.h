///////////////////////////////////////////////////////////
//  Statistique.h
//  Implementation of the Class Statistique
//  Created on:      08-f�vr.-2021 11:35:52
//  Original author: doulayn
///////////////////////////////////////////////////////////

#ifndef STATISTIQUE_H
#define STATISTIQUE_H

#include <QString>


class Statistique
{

public:
    Statistique();
    virtual ~Statistique();

private:
    int nombreDescenteStatistique;
    double tempsMaxStatistique;
    double tempsMinStatistique;
    double tempsMoyenStatistique;
    double vitesseMaxStatistique;
    double vitesseMinStatistique;
    double vitesseMoyenneStatistique;

};
#endif // STATISTIQUE_H
