///////////////////////////////////////////////////////////
//  InterfaceChrono.h
//  Implementation of the Class InterfaceChrono
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "../controller/gestionchrono.h"
#include <QString>


#ifndef INTERFACECHRONO_H
#define INTERFACECHRONO_H


class InterfaceChrono
{

public:
    InterfaceChrono();
    virtual ~InterfaceChrono();
    GestionChrono *m_GestionChrono;

    bool sauvegardeChrono(QString trame);
    bool envoieEsp(QString trame);

private:
    QString trame;
    QString ip;
    int port;

};
#endif // INTERFACECHRONO_H
