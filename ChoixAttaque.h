/****************************************************************************
 * Fichier: ChoixAttaque.h
 * Auteur: Alexandre Mao
 * Date: 15 novembre 2016
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Widget graphique permettant l'affichage des boutons des attaques
 ****************************************************************************/

#ifndef CHOIXATTAQUE_H
#define CHOIXATTAQUE_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include "Creature.h"

class ChoixAttaque : public QWidget
{
    Q_OBJECT
public:

    explicit ChoixAttaque(QWidget *parent = 0);

    //ChoixAttaque(int attaque1,int attaque2,int attaque3,int attaque4);
    QPushButton* attaque1_;
    QPushButton* attaque2_;
    QPushButton* attaque3_;
    QPushButton* attaque4_;

public slots:
    void afficherAttaques();
    void afficherAttaques(Creature* creature);
    void masquerAttaques();
};
#endif // CHOIXATTAQUE_H
