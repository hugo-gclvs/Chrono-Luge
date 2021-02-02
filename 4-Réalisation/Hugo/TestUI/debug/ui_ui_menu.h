/********************************************************************************
** Form generated from reading UI file 'ui_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_MENU_H
#define UI_UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_Menu
{
public:
    QPushButton *button_CONNEXION;
    QFrame *bandeau_BLANC;
    QLabel *Logo;
    QLabel *label_HISTORIQUE;
    QLabel *label_PROFIL;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ui_Menu)
    {
        if (ui_Menu->objectName().isEmpty())
            ui_Menu->setObjectName(QString::fromUtf8("ui_Menu"));
        ui_Menu->resize(433, 745);
        ui_Menu->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.982955, stop:0 rgba(79, 199, 21, 255), stop:1 rgba(68, 118, 168, 255));"));
        button_CONNEXION = new QPushButton(ui_Menu);
        button_CONNEXION->setObjectName(QString::fromUtf8("button_CONNEXION"));
        button_CONNEXION->setGeometry(QRect(20, 100, 391, 41));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        button_CONNEXION->setFont(font);
        button_CONNEXION->setStyleSheet(QString::fromUtf8("background: #6B6B6B;\n"
"border: none;\n"
"border-radius: 7px;\n"
"color: rgb(240, 240, 240);"));
        bandeau_BLANC = new QFrame(ui_Menu);
        bandeau_BLANC->setObjectName(QString::fromUtf8("bandeau_BLANC"));
        bandeau_BLANC->setGeometry(QRect(-10, -1, 451, 81));
        bandeau_BLANC->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.9);"));
        bandeau_BLANC->setFrameShape(QFrame::StyledPanel);
        bandeau_BLANC->setFrameShadow(QFrame::Raised);
        Logo = new QLabel(bandeau_BLANC);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(10, 0, 111, 81));
        Logo->setStyleSheet(QString::fromUtf8("background: none;\n"
"margin: 10px;"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../../../8-Ressources/Image/logo.png")));
        Logo->setScaledContents(true);
        label_HISTORIQUE = new QLabel(bandeau_BLANC);
        label_HISTORIQUE->setObjectName(QString::fromUtf8("label_HISTORIQUE"));
        label_HISTORIQUE->setGeometry(QRect(120, 10, 221, 61));
        QFont font1;
        font1.setPointSize(16);
        label_HISTORIQUE->setFont(font1);
        label_HISTORIQUE->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: rgba(0, 0, 0, 0.5);"));
        label_PROFIL = new QLabel(bandeau_BLANC);
        label_PROFIL->setObjectName(QString::fromUtf8("label_PROFIL"));
        label_PROFIL->setGeometry(QRect(350, -1, 91, 81));
        label_PROFIL->setStyleSheet(QString::fromUtf8("background: none;\n"
"margin: 8px;"));
        label_PROFIL->setPixmap(QPixmap(QString::fromUtf8("../icon/profile.png")));
        label_PROFIL->setScaledContents(true);
        scrollArea = new QScrollArea(ui_Menu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 160, 391, 561));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.4);\n"
"border-radius: 8px;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 391, 561));
        scrollArea->setWidget(scrollAreaWidgetContents);
        bandeau_BLANC->raise();
        button_CONNEXION->raise();
        scrollArea->raise();

        retranslateUi(ui_Menu);

        QMetaObject::connectSlotsByName(ui_Menu);
    } // setupUi

    void retranslateUi(QWidget *ui_Menu)
    {
        ui_Menu->setWindowTitle(QCoreApplication::translate("ui_Menu", "Form", nullptr));
        button_CONNEXION->setText(QCoreApplication::translate("ui_Menu", "AJOUTER UNE DESCENTE", nullptr));
        Logo->setText(QString());
        label_HISTORIQUE->setText(QCoreApplication::translate("ui_Menu", "Historique de Descente", nullptr));
        label_PROFIL->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_Menu: public Ui_ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MENU_H
