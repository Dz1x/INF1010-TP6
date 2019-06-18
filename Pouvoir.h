/****************************************************************************
 * Fichier: Pouvoir.h
 * Auteur: Alexandre Mao
 * Date: 31 août 2016
 * Mise à jour: 03 sept 2016
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Définition de la classe Pouvoir
 *				La classe Pouvoir correspond aux differentes attaques.
 ****************************************************************************/

#ifndef POUVOIR_H
#define POUVOIR_H

#include <string>
#include <iostream>


class Pouvoir
{
public:
	Pouvoir();
	Pouvoir(const std::string& nom, 
		unsigned int nombreDeDegat, unsigned int energieNecessaire);
	~Pouvoir();

	unsigned int obtenirNombreDeDegat() const;
	unsigned int obtenirEnergieNecessaire() const;
	std::string obtenirNom() const;

	void modifierNombreDeDegat(unsigned int nombreDegat);
	void modifierEnergieNecessarie(unsigned int energieNecessaire);
	void modifierNom(const std::string& nom);

	Pouvoir(const Pouvoir& pouvoir);
	Pouvoir& operator=(const Pouvoir& pouvoir);

	bool operator==(const Pouvoir& pouvoir) const;

	friend std::ostream& operator<<(std::ostream& os, const Pouvoir& pouvoir);

private:
	std::string nom_;
	unsigned int nombreDeDegat_ ;
	unsigned int energieNecessaire_;

};

#endif // !POUVOIR_H
