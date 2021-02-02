#include "ui_principale.h"
#include "ui_ui_principale.h"

ui_Principale::ui_Principale(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ui_Principale)
{
    ui->setupUi(this);
}

ui_Principale::~ui_Principale()
{
    delete ui;
}

