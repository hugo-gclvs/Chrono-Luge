#include "ui_principale.h"
#include "ui_connexion.h"
#include "ui_inscription.h"
#include "ui_menu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ui_Connexion connex;
    ui_Inscription insc;
    ui_Menu menu;

    connex.show();
    insc.show();
    menu.show();


    return a.exec();
}
