#include "ui_connexion.h"
#include "ui_ui_connexion.h"

ui_Connexion::ui_Connexion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_Connexion)
{
    ui->setupUi(this);
}

ui_Connexion::~ui_Connexion()
{
    delete ui;
}
