#ifndef UI_INSCRIPTION_H
#define UI_INSCRIPTION_H

#include <QWidget>

namespace Ui {
class ui_Inscription;
}

class ui_Inscription : public QWidget
{
    Q_OBJECT

public:
    explicit ui_Inscription(QWidget *parent = nullptr);
    ~ui_Inscription();

private:
    Ui::ui_Inscription *ui;
};

#endif // UI_INSCRIPTION_H
