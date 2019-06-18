/****************************************************************************
 * Fichier: Foncteur.h
 * Auteur: Alexandre Mao
 * Date: 15 novembre 2016
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Definition et implementation de la classe Foncteur
 ****************************************************************************/

#ifndef  FONCTEUR_H
#define  FONCTEUR_H

#include "Dresseur.h"
#include <string>
#include <stdlib.h>

#define RAND_MIN_DEFAUT 0
#define RAND_MAX_DEFAUT 6

/****************************************************************************
 * Foncteur: Permet d'obtenir l'attaque de la créature passée en argument
 ****************************************************************************/
class FoncteurObtenirAttaqueCreature
{
public:
    FoncteurObtenirAttaqueCreature() {}
    ~FoncteurObtenirAttaqueCreature() {}

    unsigned int operator() (const Creature* creature) const {
        return creature->obtenirAttaque();
    }
};

/****************************************************************************
 * Foncteur: Prend en argument deux pointeurs de créature et renvoie true si la première créature a une attaque inférieure à celle de la deuxième.
 ****************************************************************************/
class FoncteurComparerCreature
{
public:
	FoncteurComparerCreature() {}
	~FoncteurComparerCreature() {}

	bool operator() (const Creature* comparant, const Creature* compare) const {
		return comparant->obtenirAttaque() < compare->obtenirAttaque();
	}
};

/****************************************************************************
 * Foncteur: Prend en argument deux pointeurs de dresseurs et renvoie true si le premier a un
             nom strictement inférieur au nom du second. Cette comparaison se fera selon l’ordre
             alphanumérique.
 ****************************************************************************/
class FoncteurComparerDresseur
{
public:
	FoncteurComparerDresseur() {}
	~FoncteurComparerDresseur() {}

	bool operator() (const Dresseur* comparant, const Dresseur* compare) const {
		return comparant->obtenirNom() < compare->obtenirNom();
	}
};

/****************************************************************************
 * Foncteur: Prend en argument deux pointeurs de pouvoir et renvoie true si le premier pouvoir a
             un nombre de dégâts inférieur à celui du deuxième.
 ****************************************************************************/
class FoncteurComparerPouvoir
{
public:
	FoncteurComparerPouvoir() {}
	~FoncteurComparerPouvoir() {}

	bool operator() (const Pouvoir* comparant, const Pouvoir* compare) const {
		return comparant->obtenirNombreDeDegat() < compare->obtenirNombreDeDegat();
	}
};

/****************************************************************************
 * Foncteur: Prend en argument un pointeur vers une créature et incrémente une variable interne
             si les points de vie de la créature sont entre ces bornes
 ****************************************************************************/
class FoncteurCreatureVie
{
public:
	FoncteurCreatureVie(unsigned int vieMin, unsigned int vieMAx) {
		vieMax_ = vieMAx;
		vieMin_ = vieMin;
		compteur_ = 0;
	}
	~FoncteurCreatureVie() {}

	unsigned int obtenirCompteur() const {
		return compteur_;
	}

	void operator() (const Creature* creaure) {
		if (creaure->obtenirPointDeVie() >= vieMin_ && creaure->obtenirPointDeVie() <= vieMax_)
			compteur_++;
	}

private:
	unsigned int vieMin_;
	unsigned int vieMax_;
	unsigned int compteur_;
};

/****************************************************************************
 * Foncteur: Prend en argument un pointeur de créature et renvoie true si cette créature a le même
             nom que l’attribut de la classe correspondant
 ****************************************************************************/
class FoncteurCreaturesDeMemeNom
{
public:
	FoncteurCreaturesDeMemeNom(const std::string& nom) {
		nom_ = nom;
	}
	~FoncteurCreaturesDeMemeNom() {};

	bool operator() (const Creature* creature) const {
		return *creature == nom_;
	}

private:
	std::string nom_;
};

/****************************************************************************
 * Foncteur: Ce foncteur prend en argument un pointeur de créature et renvoie true si cette créatures est égale
             à l’attribut creature du foncteur (au sens de leur opérateur ==).
 ****************************************************************************/
class FoncteurEgalCreatures
{
public:
	FoncteurEgalCreatures(Creature* creature) {
		creature_ = creature;
	}
	~FoncteurEgalCreatures() {}

	bool FoncteurEgalCreatures::operator() (const Creature* creatureAComparer) const {
		return *creatureAComparer == *creature_;
	}

private:
	Creature* creature_;
};

/****************************************************************************
 * Foncteur: Permet de générer un nombre aléatoire compris dans un intervalle
 ****************************************************************************/
class FoncteurGenerateurNombresAlea
{
public:
	FoncteurGenerateurNombresAlea() {
		min_ = RAND_MIN_DEFAUT;
		max_ = RAND_MAX_DEFAUT;
	}

	FoncteurGenerateurNombresAlea(unsigned int min, unsigned int max) {
		min_ = min;
		max_ = max;
	}

	~FoncteurGenerateurNombresAlea() {}

	unsigned int operator() () const {
		return rand() % (max_ - min_ + 1) + min_;
	}

private:
	unsigned int min_;
	unsigned int max_;
};


#endif; // !FONCTEUR_H
