#ifndef UI_CONNEXION_H
#define UI_CONNEXION_H

#include <QWidget>

namespace Ui {
class ui_Connexion;
}

class ui_Connexion : public QWidget
{
    Q_OBJECT

public:
    explicit ui_Connexion(QWidget *parent = nullptr);
    ~ui_Connexion();

private:
    Ui::ui_Connexion *ui;
};

#endif // UI_CONNEXION_H
