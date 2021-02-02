#ifndef UI_MENU_H
#define UI_MENU_H

#include <QWidget>

namespace Ui {
class ui_Menu;
}

class ui_Menu : public QWidget
{
    Q_OBJECT

public:
    explicit ui_Menu(QWidget *parent = nullptr);
    ~ui_Menu();

private:
    Ui::ui_Menu *ui;
};

#endif // UI_MENU_H
