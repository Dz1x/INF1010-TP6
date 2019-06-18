/****************************************************************************
 * Fichier: PolyLand.h
 * Auteur: Alexandre Mao
 * Date: 31 août 2016
 * Mise à jour : 06 sept 2016 par Maude Carrier
 * Mise à jour : 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Définition de la classe PolyLand
 *				Polyland represente le pays que l'on va explorer, il va contenir les differents éléments du jeu.
 ****************************************************************************/

#ifndef POLYLAND_H
#define POLYLAND_H

#include "MondeMagique.h"
#include "Dresseur.h"
#include "Creature.h"

#include "Foncteur.h"
#include <vector>
#include <iostream>
#include <list>

class PolyLand : public MondeMagique<Dresseur, Creature>
{
public:
	PolyLand(Dresseur& dresseur);
	//~PolyLand();

	//bool ajouterDresseur(Dresseur* dresseur);
	//bool retirerDresseur(const std::string& nom);

	//bool ajouterCreature(Creature* creature);
	//bool retirerCreature(const std::string& nom);
	Dresseur& obtenirHero() const;
	//Creature* choisirCreatureAleatoire();

    void attraperCreature(Dresseur* dresseur, Creature* creature);
	bool relacherCreature(Dresseur* dresseur, const std::string& nomCreature);

	//PolyLand& operator+=(Dresseur* dresseur);
	//PolyLand& operator-=(Dresseur* dresseur);
	//PolyLand& operator+=(Creature* creature);
	//PolyLand& operator-=(Creature* creature);

	friend std::ostream& operator<<(std::ostream& os, const PolyLand& poly);

private:
//	std::vector<Dresseur*> dresseurs_;
//	std::vector<Creature*> creatures_;
	Dresseur& hero_;
};
#endif // !POLYLAND_H
