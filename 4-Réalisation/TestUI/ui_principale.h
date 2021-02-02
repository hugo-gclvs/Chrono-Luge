#ifndef UI_PRINCIPALE_H
#define UI_PRINCIPALE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ui_Principale; }
QT_END_NAMESPACE

class ui_Principale : public QMainWindow
{
    Q_OBJECT

public:
    ui_Principale(QWidget *parent = nullptr);
    ~ui_Principale();

private:
    Ui::ui_Principale *ui;
};
#endif // UI_PRINCIPALE_H
