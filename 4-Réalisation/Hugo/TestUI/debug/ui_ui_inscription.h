/********************************************************************************
** Form generated from reading UI file 'ui_inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_INSCRIPTION_H
#define UI_UI_INSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ui_Inscription
{
public:
    QLabel *Logo;
    QPlainTextEdit *champ_PSEUDO;
    QPlainTextEdit *champ_MDP;
    QLabel *icon_MDP;
    QLabel *icon_USER;
    QPushButton *button_INSCRIRE;
    QPlainTextEdit *champ_EMAIL;
    QLabel *icon_MAIL;
    QPlainTextEdit *champ_NOM;
    QLabel *icon_NOM;
    QLabel *icon_PRENOM;
    QPlainTextEdit *champ_PRENOM;
    QLabel *icon_AGE;
    QPlainTextEdit *champ_AGE;

    void setupUi(QWidget *ui_Inscription)
    {
        if (ui_Inscription->objectName().isEmpty())
            ui_Inscription->setObjectName(QString::fromUtf8("ui_Inscription"));
        ui_Inscription->resize(408, 669);
        ui_Inscription->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.982955, stop:0 rgba(79, 199, 21, 255), stop:1 rgba(68, 118, 168, 255));"));
        Logo = new QLabel(ui_Inscription);
        Logo->setObjectName(QString::fromUtf8("Logo"));
        Logo->setGeometry(QRect(110, 40, 171, 131));
        Logo->setStyleSheet(QString::fromUtf8("background: none;"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("../../../8-Ressources/Image/logo.png")));
        Logo->setScaledContents(true);
        champ_PSEUDO = new QPlainTextEdit(ui_Inscription);
        champ_PSEUDO->setObjectName(QString::fromUtf8("champ_PSEUDO"));
        champ_PSEUDO->setGeometry(QRect(50, 220, 291, 41));
        QFont font;
        font.setPointSize(12);
        champ_PSEUDO->setFont(font);
        champ_PSEUDO->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        champ_MDP = new QPlainTextEdit(ui_Inscription);
        champ_MDP->setObjectName(QString::fromUtf8("champ_MDP"));
        champ_MDP->setGeometry(QRect(50, 470, 291, 41));
        champ_MDP->setFont(font);
        champ_MDP->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        icon_MDP = new QLabel(ui_Inscription);
        icon_MDP->setObjectName(QString::fromUtf8("icon_MDP"));
        icon_MDP->setGeometry(QRect(50, 470, 41, 41));
        icon_MDP->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_MDP->setPixmap(QPixmap(QString::fromUtf8("../icon/padlock.png")));
        icon_MDP->setScaledContents(true);
        icon_USER = new QLabel(ui_Inscription);
        icon_USER->setObjectName(QString::fromUtf8("icon_USER"));
        icon_USER->setGeometry(QRect(50, 220, 41, 41));
        icon_USER->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_USER->setPixmap(QPixmap(QString::fromUtf8("../icon/utilisateur.png")));
        icon_USER->setScaledContents(true);
        button_INSCRIRE = new QPushButton(ui_Inscription);
        button_INSCRIRE->setObjectName(QString::fromUtf8("button_INSCRIRE"));
        button_INSCRIRE->setGeometry(QRect(100, 570, 191, 31));
        QFont font1;
        font1.setPointSize(10);
        button_INSCRIRE->setFont(font1);
        button_INSCRIRE->setStyleSheet(QString::fromUtf8("background: #6B6B6B;\n"
"border: none;\n"
"border-radius: 7px;\n"
"color: rgb(240, 240, 240);"));
        champ_EMAIL = new QPlainTextEdit(ui_Inscription);
        champ_EMAIL->setObjectName(QString::fromUtf8("champ_EMAIL"));
        champ_EMAIL->setGeometry(QRect(50, 270, 291, 41));
        champ_EMAIL->setFont(font);
        champ_EMAIL->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        champ_EMAIL->setPlaceholderText(QString::fromUtf8("E-Mail"));
        icon_MAIL = new QLabel(ui_Inscription);
        icon_MAIL->setObjectName(QString::fromUtf8("icon_MAIL"));
        icon_MAIL->setGeometry(QRect(50, 270, 41, 41));
        icon_MAIL->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_MAIL->setPixmap(QPixmap(QString::fromUtf8("../icon/email.png")));
        icon_MAIL->setScaledContents(true);
        champ_NOM = new QPlainTextEdit(ui_Inscription);
        champ_NOM->setObjectName(QString::fromUtf8("champ_NOM"));
        champ_NOM->setGeometry(QRect(50, 320, 291, 41));
        champ_NOM->setFont(font);
        champ_NOM->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        champ_NOM->setPlaceholderText(QString::fromUtf8("Nom"));
        icon_NOM = new QLabel(ui_Inscription);
        icon_NOM->setObjectName(QString::fromUtf8("icon_NOM"));
        icon_NOM->setGeometry(QRect(50, 320, 41, 41));
        icon_NOM->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_NOM->setPixmap(QPixmap(QString::fromUtf8("../icon/id-card.png")));
        icon_NOM->setScaledContents(true);
        icon_PRENOM = new QLabel(ui_Inscription);
        icon_PRENOM->setObjectName(QString::fromUtf8("icon_PRENOM"));
        icon_PRENOM->setGeometry(QRect(50, 370, 41, 41));
        icon_PRENOM->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_PRENOM->setPixmap(QPixmap(QString::fromUtf8("../icon/id-card.png")));
        icon_PRENOM->setScaledContents(true);
        champ_PRENOM = new QPlainTextEdit(ui_Inscription);
        champ_PRENOM->setObjectName(QString::fromUtf8("champ_PRENOM"));
        champ_PRENOM->setGeometry(QRect(50, 370, 291, 41));
        champ_PRENOM->setFont(font);
        champ_PRENOM->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        champ_PRENOM->setPlaceholderText(QString::fromUtf8("Pr\303\251nom"));
        icon_AGE = new QLabel(ui_Inscription);
        icon_AGE->setObjectName(QString::fromUtf8("icon_AGE"));
        icon_AGE->setGeometry(QRect(50, 420, 41, 41));
        icon_AGE->setStyleSheet(QString::fromUtf8("background: none;\n"
"padding: 6px;"));
        icon_AGE->setPixmap(QPixmap(QString::fromUtf8("../icon/id-card.png")));
        icon_AGE->setScaledContents(true);
        champ_AGE = new QPlainTextEdit(ui_Inscription);
        champ_AGE->setObjectName(QString::fromUtf8("champ_AGE"));
        champ_AGE->setGeometry(QRect(50, 420, 291, 41));
        champ_AGE->setFont(font);
        champ_AGE->setStyleSheet(QString::fromUtf8("background-color: rgba(235, 235, 235, 0.8);\n"
"border-radius: 8px;\n"
"padding-left: 40px;\n"
"padding-top: 7px;"));
        champ_AGE->setPlaceholderText(QString::fromUtf8("Age"));
        champ_AGE->raise();
        icon_AGE->raise();
        champ_PRENOM->raise();
        Logo->raise();
        champ_PSEUDO->raise();
        champ_MDP->raise();
        icon_MDP->raise();
        icon_USER->raise();
        button_INSCRIRE->raise();
        champ_EMAIL->raise();
        icon_MAIL->raise();
        champ_NOM->raise();
        icon_NOM->raise();
        icon_PRENOM->raise();

        retranslateUi(ui_Inscription);

        QMetaObject::connectSlotsByName(ui_Inscription);
    } // setupUi

    void retranslateUi(QWidget *ui_Inscription)
    {
        ui_Inscription->setWindowTitle(QCoreApplication::translate("ui_Inscription", "Form", nullptr));
        Logo->setText(QString());
        champ_PSEUDO->setPlaceholderText(QCoreApplication::translate("ui_Inscription", "Pseudo", nullptr));
        champ_MDP->setPlaceholderText(QCoreApplication::translate("ui_Inscription", "Mot de Passe", nullptr));
        icon_MDP->setText(QString());
        icon_USER->setText(QString());
        button_INSCRIRE->setText(QCoreApplication::translate("ui_Inscription", "S'INSCRIRE", nullptr));
        champ_EMAIL->setPlainText(QString());
        icon_MAIL->setText(QString());
        champ_NOM->setPlainText(QString());
        icon_NOM->setText(QString());
        icon_PRENOM->setText(QString());
        champ_PRENOM->setPlainText(QString());
        icon_AGE->setText(QString());
        champ_AGE->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_Inscription: public Ui_ui_Inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_INSCRIPTION_H
