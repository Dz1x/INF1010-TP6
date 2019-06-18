/****************************************************************************
 * Fichier: ObjetMagique.h
 * Auteur: Alexandre Mao
 * Date: 31 août 2016
 * Mise à jour : 06 sept 2016 par Maude Carrier
 * Mise à jour : 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Définition de la classe ObjetMagique
 *				La classe ObjetMagique correspond aux differents objets utilisable
 *				par le dresseur sur ses créatures.
 ****************************************************************************/

#ifndef OBJETMAGIQUE_H
#define OBJETMAGIQUE_H

#include <string>
#include <iostream>


class ObjetMagique
{
public:
	ObjetMagique();
	ObjetMagique(const std::string &nom, int bonus);
	~ObjetMagique();

	std::string obtenirNom() const;
	int obtenirBonus() const;

	void modifierNom(const std::string& nom);
	void modifierBonus(int bonus);

	friend std::ostream& operator<<(std::ostream& os, const ObjetMagique& objet);

private:
	std::string nom_;
	int bonus_;
};

#endif
