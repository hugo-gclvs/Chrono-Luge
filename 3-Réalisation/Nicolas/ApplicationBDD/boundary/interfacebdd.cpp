///////////////////////////////////////////////////////////
//  InterfaceBDD.cpp
//  Implementation of the Class InterfaceBDD
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#include "interfacebdd.h"


InterfaceBDD::InterfaceBDD(){

}



InterfaceBDD::~InterfaceBDD(){

}





bool InterfaceBDD::connectBDD(){

    return  NULL;
}


bool InterfaceBDD::ajouterDescente(QTime heureDescente, QDate dateDescente, double vitesseDescente, double tempsDescente){

    return  NULL;
}


bool InterfaceBDD::ajouterProfil(photo photoProfil, QString mailProfil, int ageProfil, QString prenomProfil, QString nomProfil){

    return  NULL;
}


bool InterfaceBDD::ajouterLuge(QString QRCodeLuge, QString tagRFIDLuge, int numeroLuge){

    return  NULL;
}


bool InterfaceBDD::supprimerLuge(QString tagRFIDLuge, int numeroLuge){

    return  NULL;
}


bool InterfaceBDD::modifierPiste(int taillePiste){

    return  NULL;
}


bool InterfaceBDD::classer10Jours(int classement10JoursDescente){

    return  NULL;
}


bool InterfaceBDD::classer10Mois(int classement10MoisDescente){

    return  NULL;
}


bool InterfaceBDD::classer20Global(int classement20GlobalDescente){

    return  NULL;
}


/**
 * return numero de luge
 */
int InterfaceBDD::getLuge(QString tagRFIDLuge){

    return 0;
}


int InterfaceBDD::getTaillePiste(int numeroLuge){

    return 0;
}


bool InterfaceBDD::lierProfilDescente(int idProfil, QString QRCode){

    return  NULL;
}


/**
 * retourne =
 * idUtilisateur: int, photoProfil: photo, ageProfil: int, prenomProfil: string,
 * nomProfil: string, vitesseMoyenStatistique: double, vitesseMaxStatistique:
 * double, vitesseMinStatistique:
 * double, tempsMoyenStatistique: double, tempsMinStatistique: double,
 * tempsMaxStatistique: double, nombreDescenteStatistique: int
 */
bool InterfaceBDD::rechercheStatistique(int idProfil){

    return  NULL;
}


/**
 * tableau � 2 dimension historiqueDescente: string
 * vitesseDescente: double, tempsDescente: double, dateDescente: date
 */
bool InterfaceBDD::rechercheHistoriqueDescente(int idProfil){

    return  NULL;
}


bool InterfaceBDD::rechercheProfil(QString pseudoUtilisateur, QString mdpUtilisateur){

    return  NULL;
}
