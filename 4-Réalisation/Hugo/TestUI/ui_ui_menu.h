/********************************************************************************
** Form generated from reading UI file 'ui_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
    QWidget *zoneWidget;
    QWidget *descente_1;
    QLabel *icon_fleche_1;
    QLabel *label;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *descente_2;
    QLabel *info_descente_2;
    QLabel *icon_fleche_2;
    QWidget *descente_3;
    QLabel *info_descente_8;
    QLabel *icon_fleche_8;

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
        zoneWidget = new QWidget();
        zoneWidget->setObjectName(QString::fromUtf8("zoneWidget"));
        zoneWidget->setGeometry(QRect(0, 0, 391, 561));
        descente_1 = new QWidget(zoneWidget);
        descente_1->setObjectName(QString::fromUtf8("descente_1"));
        descente_1->setGeometry(QRect(0, 0, 391, 201));
        descente_1->setStyleSheet(QString::fromUtf8("background: #A6A6A6;\n"
"border: 1px solid rgb(84, 84, 84);"));
        icon_fleche_1 = new QLabel(descente_1);
        icon_fleche_1->setObjectName(QString::fromUtf8("icon_fleche_1"));
        icon_fleche_1->setGeometry(QRect(350, 0, 41, 41));
        icon_fleche_1->setStyleSheet(QString::fromUtf8("border: none;\n"
"margin: 10px;"));
        icon_fleche_1->setPixmap(QPixmap(QString::fromUtf8("../icon/arrow-down.png")));
        icon_fleche_1->setScaledContents(true);
        label = new QLabel(descente_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 311, 16));
        label->setStyleSheet(QString::fromUtf8("border-radius: 0;\n"
"border: none;\n"
"border-top: 2px solid grey;"));
        frame = new QFrame(descente_1);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 40, 351, 141));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0.6);\n"
"border: none;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 331, 121));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, -1, 69, 31));
        label_2->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #696969;"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 0, 69, 31));
        label_3->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #696969;"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 30, 141, 16));
        label_4->setStyleSheet(QString::fromUtf8("border-radius: 0;\n"
"background: none;\n"
"border: none;\n"
"border-top: 1px solid grey;"));
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 30, 121, 20));
        label_5->setStyleSheet(QString::fromUtf8("border-radius: 0;\n"
"background: none;\n"
"border: none;\n"
"border-top: 1px solid grey;"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 91, 141, 16));
        label_6->setStyleSheet(QString::fromUtf8("border-radius: 0;\n"
"background: none;\n"
"border: none;\n"
"border-top: 1px solid grey;"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 60, 69, 31));
        label_7->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #696969;"));
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 90, 91, 31));
        QFont font2;
        font2.setPointSize(11);
        label_8->setFont(font2);
        label_8->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #8A8A8A;"));
        label_9 = new QLabel(frame_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 30, 91, 31));
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #8A8A8A;"));
        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 30, 91, 31));
        label_10->setFont(font2);
        label_10->setStyleSheet(QString::fromUtf8("background: none;\n"
"color: #8A8A8A;"));
        descente_2 = new QWidget(zoneWidget);
        descente_2->setObjectName(QString::fromUtf8("descente_2"));
        descente_2->setGeometry(QRect(0, 200, 391, 53));
        descente_2->setStyleSheet(QString::fromUtf8("background: #A6A6A6;\n"
"border: 1px solid rgb(84, 84, 84);"));
        info_descente_2 = new QLabel(descente_2);
        info_descente_2->setObjectName(QString::fromUtf8("info_descente_2"));
        info_descente_2->setGeometry(QRect(20, 10, 311, 31));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        info_descente_2->setFont(font3);
        info_descente_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: none;"));
        icon_fleche_2 = new QLabel(descente_2);
        icon_fleche_2->setObjectName(QString::fromUtf8("icon_fleche_2"));
        icon_fleche_2->setGeometry(QRect(340, 0, 51, 51));
        icon_fleche_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"margin: 10px;"));
        icon_fleche_2->setPixmap(QPixmap(QString::fromUtf8("../icon/arrow.png")));
        icon_fleche_2->setScaledContents(true);
        descente_3 = new QWidget(zoneWidget);
        descente_3->setObjectName(QString::fromUtf8("descente_3"));
        descente_3->setGeometry(QRect(0, 250, 391, 53));
        descente_3->setStyleSheet(QString::fromUtf8("background: #A6A6A6;\n"
"border: 1px solid rgb(84, 84, 84);"));
        info_descente_8 = new QLabel(descente_3);
        info_descente_8->setObjectName(QString::fromUtf8("info_descente_8"));
        info_descente_8->setGeometry(QRect(20, 10, 311, 31));
        info_descente_8->setFont(font3);
        info_descente_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border: none;"));
        icon_fleche_8 = new QLabel(descente_3);
        icon_fleche_8->setObjectName(QString::fromUtf8("icon_fleche_8"));
        icon_fleche_8->setGeometry(QRect(340, 0, 51, 51));
        icon_fleche_8->setStyleSheet(QString::fromUtf8("border: none;\n"
"margin: 10px;"));
        icon_fleche_8->setPixmap(QPixmap(QString::fromUtf8("../icon/arrow.png")));
        icon_fleche_8->setScaledContents(true);
        scrollArea->setWidget(zoneWidget);
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
        icon_fleche_1->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ui_Menu", "TEMPS", nullptr));
        label_3->setText(QCoreApplication::translate("ui_Menu", "DATE", nullptr));
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("ui_Menu", "VITESSE", nullptr));
        label_8->setText(QCoreApplication::translate("ui_Menu", "12.25 km/h", nullptr));
        label_9->setText(QCoreApplication::translate("ui_Menu", "02:12:59", nullptr));
        label_10->setText(QCoreApplication::translate("ui_Menu", "2021-02-12", nullptr));
        info_descente_2->setText(QCoreApplication::translate("ui_Menu", "2021-02-22 / 02:37:11", nullptr));
        icon_fleche_2->setText(QString());
        info_descente_8->setText(QCoreApplication::translate("ui_Menu", "2021-02-22 / 02:37:11", nullptr));
        icon_fleche_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ui_Menu: public Ui_ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_MENU_H
