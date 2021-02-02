#include "ui_menu.h"
#include "ui_ui_menu.h"

ui_Menu::ui_Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_Menu)
{
    ui->setupUi(this);
}

ui_Menu::~ui_Menu()
{
    delete ui;
}
