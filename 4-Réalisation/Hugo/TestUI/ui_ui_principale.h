/********************************************************************************
** Form generated from reading UI file 'ui_principale.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_PRINCIPALE_H
#define UI_UI_PRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_Principale
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ui_Principale)
    {
        if (ui_Principale->objectName().isEmpty())
            ui_Principale->setObjectName(QString::fromUtf8("ui_Principale"));
        ui_Principale->resize(800, 600);
        centralwidget = new QWidget(ui_Principale);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ui_Principale->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ui_Principale);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        ui_Principale->setMenuBar(menubar);
        statusbar = new QStatusBar(ui_Principale);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ui_Principale->setStatusBar(statusbar);

        retranslateUi(ui_Principale);

        QMetaObject::connectSlotsByName(ui_Principale);
    } // setupUi

    void retranslateUi(QMainWindow *ui_Principale)
    {
        ui_Principale->setWindowTitle(QCoreApplication::translate("ui_Principale", "ui_Principale", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ui_Principale: public Ui_ui_Principale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_PRINCIPALE_H
