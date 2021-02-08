///////////////////////////////////////////////////////////
//  InterfaceBDD.h
//  Implementation of the Class InterfaceBDD
//  Created on:      08-f�vr.-2021 11:35:51
//  Original author: doulayn
///////////////////////////////////////////////////////////

#ifndef INTERFACEBDD_H
#define INTERFACEBDD_H

#include <QString>
#include <QDateTime>

class InterfaceBDD
{

public:
    InterfaceBDD();
    virtual ~InterfaceBDD();

    bool connectBDD();
    bool ajouterDescente(QTime heureDescente, QDate dateDescente, double vitesseDescente, double tempsDescente);
    bool ajouterProfil(photo photoProfil, QString mailProfil, int ageProfil, QString prenomProfil, QString nomProfil);
    bool ajouterLuge(QString QRCodeLuge, QString tagRFIDLuge, int numeroLuge);
    bool supprimerLuge(QString tagRFIDLuge, int numeroLuge);
    bool modifierPiste(int taillePiste);
    bool classer10Jours(int classement10JoursDescente);
    bool classer10Mois(int classement10MoisDescente);
    bool classer20Global(int classement20GlobalDescente);
    int getLuge(QString tagRFIDLuge);
    int getTaillePiste(int numeroLuge);
    bool lierProfilDescente(int idProfil, QString QRCode);
    bool rechercheStatistique(int idProfil);
    bool rechercheHistoriqueDescente(int idProfil);
    bool rechercheProfil(QString pseudoUtilisateur, QString mdpUtilisateur);

private:
    QString adresse;
    int port;
    QString login;
    QString password;

};
#endif // INTERFACEBDD_H
