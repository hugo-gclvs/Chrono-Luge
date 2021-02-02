#include "ui_inscription.h"
#include "ui_ui_inscription.h"

ui_Inscription::ui_Inscription(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_Inscription)
{
    ui->setupUi(this);
}

ui_Inscription::~ui_Inscription()
{
    delete ui;
}
