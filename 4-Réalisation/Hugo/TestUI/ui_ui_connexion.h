/********************************************************************************
** Form generated from reading UI file 'ui_connexion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_CONNEXION_H
#define UI_UI_CONNEXION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_Connexion
{
public:
    QLabel *Logo;
    QPlainTextEdit *champ_PSEUDO;
    QLabel *icon_USER;
    QPlainTextEdit *champ_MDP;
    QLabel *icon_MDP;
    QCheckBox *check_SOUVENIR;
    QPushButton *button_CONNEXION;

    void setupUi(QWidget *ui_Connexion)
    {
        if (ui_Connexion->objectName().isEmpty())
            ui_Connexion->setObjectName(QString::fromUtf8("ui_Connexion"));
        ui_Connexion->resize(400, 659);
        ui_Connexion->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.982955, stop:0 rgba(79, 199, 21, 255), stop:1 rgba(68, 118, 168, 255));"));
        Logo = new QLabel(ui_Connexion);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(110, 50, 171, 131));
        Logo->setStyleSheet(QString::fromUtf8("background: none;"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../../../8-Ressources/Image/logo.png")));
        Logo->setScaledContents(true);
        champ_PSEUDO = new QPlainTextEdit(ui_Connexion);
        champ_PSEUDO->setObjectName(QString::fromUtf8("champ_PSEUDO"));
        champ_PSEUDO->setGeometry(QRect(50, 250, 291, 41));
        QFont font;
        font.setPointSize(12);
        champ_PSEUDO->setFont(font);
        champ_PSEUDO->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        icon_USER = new QLabel(ui_Connexion);
        icon_USER->setObjectName(QString::fromUtf8("icon_USER"));
        icon_USER->setGeometry(QRect(50, 250, 41, 41));
        icon_USER->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_USER->setPixmap(QPixmap(QString::fromUtf8("../icon/utilisateur.png")));
        icon_USER->setScaledContents(true);
        champ_MDP = new QPlainTextEdit(ui_Connexion);
        champ_MDP->setObjectName(QString::fromUtf8("champ_MDP"));
        champ_MDP->setGeometry(QRect(50, 310, 291, 41));
        champ_MDP->setFont(font);
        champ_MDP->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        icon_MDP = new QLabel(ui_Connexion);
        icon_MDP->setObjectName(QString::fromUtf8("icon_MDP"));
        icon_MDP->setGeometry(QRect(50, 310, 41, 41));
        icon_MDP->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_MDP->setPixmap(QPixmap(QString::fromUtf8("../icon/padlock.png")));
        icon_MDP->setScaledContents(true);
        check_SOUVENIR = new QCheckBox(ui_Connexion);
        check_SOUVENIR->setObjectName(QString::fromUtf8("check_SOUVENIR"));
        check_SOUVENIR->setGeometry(QRect(50, 350, 94, 26));
        QFont font1;
        font1.setPointSize(10);
        check_SOUVENIR->setFont(font1);
        check_SOUVENIR->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: rgb(240, 240, 240);\n"
""));
        button_CONNEXION = new QPushButton(ui_Connexion);
        button_CONNEXION->setObjectName(QString::fromUtf8("button_CONNEXION"));
        button_CONNEXION->setGeometry(QRect(100, 420, 191, 31));
        button_CONNEXION->setFont(font1);
        button_CONNEXION->setStyleSheet(QString::fromUtf8("background: #6B6B6B;\n"
"border: none;\n"
"border-radius: 7px;\n"
"color: rgb(240, 240, 240);"));

        retranslateUi(ui_Connexion);

        QMetaObject::connectSlotsByName(ui_Connexion);
    } // setupUi

    void retranslateUi(QWidget *ui_Connexion)
    {
        ui_Connexion->setWindowTitle(QCoreApplication::translate("ui_Connexion", "Form", nullptr));
        Logo->setText(QString());
        champ_PSEUDO->setPlaceholderText(QCoreApplication::translate("ui_Connexion", "Pseudo", nullptr));
        icon_USER->setText(QString());
        champ_MDP->setPlaceholderText(QCoreApplication::translate("ui_Connexion", "Mot de Passe", nullptr));
        icon_MDP->setText(QString());
        check_SOUVENIR->setText(QCoreApplication::translate("ui_Connexion", "Se Souvenir", nullptr));
        button_CONNEXION->setText(QCoreApplication::translate("ui_Connexion", "CONNEXION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ui_Connexion: public Ui_ui_Connexion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_CONNEXION_H
