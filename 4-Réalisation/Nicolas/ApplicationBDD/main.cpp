#include <QCoreApplication>
#include <stdio.h>
#include "./boundary/interfacebdd.h"
#include "./boundary/interfacechrono.h"

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);


    InterfaceBDD interfaceBaseDeDonnee;
    InterfaceChrono interfaceChronometre;

    return a.exec();
}
