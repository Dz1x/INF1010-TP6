/****************************************************************************
 * Fichier: Polyland.cpp
 * Auteur: Alexandre Mao
 * Date: 31 aout 2016
 * Mise à jour: 06 sept 2016 par Maude Carrier
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Implémentation de la classe Polyland
 *				Polyland represente le pays que l'on va explorer, il va contenir les differents éléments du jeu.
 ****************************************************************************/

#include "PolyLand.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/****************************************************************************
   * Fonction: PolyLand::PolyLand
   * Description: Constructeur par parametre
   * Paramètres: - (Dresseur) dresseur: le dresseur qui est passé par adresse
   * Retour: aucun
   ****************************************************************************/
PolyLand::PolyLand(Dresseur& dresseur):hero_(dresseur) {};
//
//
//PolyLand::~PolyLand()
//{
//	while (creatures_.size() != 0)
//	{
//		delete creatures_.back();
//		creatures_.back() = nullptr;
//		creatures_.pop_back();
//	}
//	while (dresseurs_.size() != 0)
//	{
//		dresseurs_.back() = nullptr;
//		dresseurs_.pop_back();
//	}
//}

/****************************************************************************
 * Fonction: PolyLand::ajouterDresseur
 * Description: Il prend en paramètre un dresseur et qui l’ajoute au
 *				tableau de dresseur. Deux dresseurs ne peuvent pas avoir le même nom.
 * Paramètres: - (Dresseur*) dresseur: C'est le nouveau dresseur à ajouter au tableau dresseurs_
 * Retour: (bool) true or false
 ****************************************************************************/
//bool PolyLand::ajouterDresseur(Dresseur* dresseur)
//{
//	for (unsigned int i = 0; i < dresseurs_.size(); i++)
//	{
//		if (dresseur->obtenirNom() == *(dresseurs_[i]))
//		{
//			std::cout << dresseur->obtenirNom() << " n'a pas ete ajoute" << std::endl;
//			return false;
//		}
//	}
//	dresseurs_.push_back(dresseur);
//	std::cout << dresseur->obtenirNom() << " a bien �t� ajout� !" << std::endl;
//	return true;
//}

/****************************************************************************
 * Fonction: PolyLand::ajouterCreature
 * Description: Il qui permet d’ajouter la créature reçue en paramètre au
 *				tableau de créature. Deux créature ne peuvent pas avoir le même nom.
 * Paramètres: - (Creature) creature: C'est la nouvelle créature à ajouter au tableau creatures_
 * Retour: (bool) true or false
 ****************************************************************************/
//bool PolyLand::ajouterCreature(Creature* creature)
//{
//	creatures_.push_back(new Creature(*creature));
//	std::cout << creature->obtenirNom() << " a bien �t� ajout� !" << std::endl;
//	return true;
//}

/****************************************************************************
 * Fonction: PolyLand::retirerDresseur
 * Description: Il prend en paramètre le nom d'un dresseur et retire le dresseur
 *				associé à ce nom du tableau dresseurs_, si celui-ci le possède. Cette méthode doit renvoyer true si
 *				l’opération est un succès, false sinon.
 * Paramètres: - (string) nom: C'est le nom du dresseur à retirer du tableau dresseurs_
 * Retour: (bool) true or false
 ****************************************************************************/
//bool PolyLand::retirerDresseur(const std::string& nom)
//{
//	for (unsigned int i = 0; i < dresseurs_.size(); i++)
//	{
//		if (*(dresseurs_[i]) == nom)
//		{
//			dresseurs_[i] = dresseurs_.back();
//			dresseurs_.pop_back();
//			std::cout << nom << " a bien �t� retire !" << std::endl;
//			return true;
//		}
//	}
//	return false;
//}

/****************************************************************************
 * Fonction: PolyLand::retirerCreature
 * Description: Il prend en paramètre le nom d'une créature et retire la créature
 *				associé à ce nom du tableau creatures_, si celui-ci le possède. Cette méthode doit renvoyer true si
 *				l’opération est un succès, false sinon.
 * Paramètres: - (string) nom: C'est le nom de la créature à retirer du tableau creatures_
 * Retour: (bool) true or false
 ****************************************************************************/
//bool PolyLand::retirerCreature(const std::string& nom)
//{
//	for (unsigned int i = 0; i < creatures_.size(); i++)
//	{
//		if (creatures_[i]->obtenirNom() == nom)
//		{
//			delete creatures_[i];
//			creatures_[i] = creatures_.back();
//			creatures_.pop_back();
//			std::cout << nom << " a bien �t� retire !" << std::endl;
//			return true;
//		}
//	}
//	return false;
//}

/****************************************************************************
 * Fonction: PolyLand::choisirDresseurAleatoire
 * Description: Il retourne un dresseur choisi aléatoirement
 *				dans le tableau de dresseurs.
 * Paramètres: aucun
 * Retour: Un pointeur vers un dresseur.
 ****************************************************************************/
//Dresseur* PolyLand::choisirDresseurAleatoire()
//{
//	if (listMaitre_.size() > 0) {
//		unsigned int indice = rand() % listMaitre_.size();
//		return listMaitre_[indice];
//	}
//	else {
//		return nullptr;
//	}
//}

/****************************************************************************
 * Fonction: PolyLand::choisirCreatureAleatoire
 * Description: Il retourne une créature choisi aléatoirement
 *				dans le tableau de dresseurs.
 * Paramètres: aucun
 * Retour: Un pointeur vers une créature.
 ****************************************************************************/
//Creature* PolyLand::choisirCreatureAleatoire()
//{
//	if (listCompagnon_.size() > 0) {
//		unsigned int indice = rand() % listCompagnon_.size();
//		return listCompagnon_[indice];
//	}
//	else {
//		return nullptr;
//	}
//}

/****************************************************************************
 * Fonction: PolyLand::obtenirHero
 * Description: Retourne le dresseur principal
 * Paramètres: aucun
 * Retour: - (Dresseur&) hero_: l'addribue hero qui est l'adresse du dreseur principal
 ****************************************************************************/
Dresseur& PolyLand::obtenirHero() const{
	return hero_;
}

/****************************************************************************
 * Fonction: PolyLand::attraperCreature
 * Description: Il prend en paramètre un dresseur et une créature, elle
 *				renvoie true si la créature a bien été capturée par le dresseur, false sinon. Chaque
 *				dresseur possède une version unique de ses créatures.
 * Paramètres: - (Creature*) creature: C'est la créature à capturer
 *			   - (Dresseur*) dresseur: C'est le dresseur qui a capturé la créature
 * Retour: (bool) true or false
 ****************************************************************************/
void PolyLand::attraperCreature(Dresseur* dresseur, Creature* creature)
{
    dresseur->ajouterCreature(creature);
}

/****************************************************************************
 * Fonction: PolyLand::relacherCreature
 * Description:  Il prend en paramètre un dresseur et le nom d’une
 *				 créature, elle renvoie true si la créature a bien été relâchée par le dresseur, false sinon.
 * Paramètres: - (Creature*) creature: C'est la créature à relâcher
 *			   - (Dresseur*) dresseur: C'est le dresseur qui relâche sa créature
 * Retour: (bool) true or false
 ****************************************************************************/
bool PolyLand::relacherCreature(Dresseur* dresseur, const std::string& nomCreature)
{
	return dresseur->enleverCreature(nomCreature);
}

/****************************************************************************
 * Fonction: operator+=
 * Description: Surcharge l'opérateur += qui prend en paramètre un dresseur,
 *				qui l’ajoute au vecteur de dresseurs et qui retourne la Polyland
 *				avec les nouvelles modifications
 * Paramètres: - (Dresseur) dresseur : Le dresseur à ajouter
 * Retour: *this
 ****************************************************************************/
//PolyLand& PolyLand::operator+= (Dresseur* dresseur)
//{
//	ajouterDresseur(dresseur);
//	return *this;
//}

/****************************************************************************
 * Fonction: operator+=
 * Description: Surcharge l'opérateur += qui prend en paramètre une créature,
 *				qui l’ajoute au vecteur de créatures et qui retourne la Polyland
 *				avec les nouvelles modifications
 * Paramètres: - (Creature) creature : La créature à ajouter
 * Retour: *this
 ****************************************************************************/
//PolyLand& PolyLand::operator+= (Creature* creature)
//{
//	ajouterCreature(creature);
//	return *this;
//}

/****************************************************************************
 * Fonction: operator-=
 * Description: Surcharge l'opérateur -= qui prend en paramètre un dresseur,
                qui l’enlève du vecteur de dresseurs et qui retourne la Polyland
                avec les nouvelles modifications
 * Paramètres: - (Dresseur) dresseur : Le dresseur à enlever
 * Retour: *this
 ****************************************************************************/
//PolyLand& PolyLand::operator-=(Dresseur* dresseur)
//{
//	retirerDresseur(dresseur->obtenirNom());
//	return *this;
//}

/****************************************************************************
 * Fonction: operator-=
 * Description: Surcharge l'opérateur -= qui prend en paramètre une créature,
 *				qui l’enlève du vecteur de créatures et qui retourne la Polyland
 *				avec les nouvelles modifications
 * Paramètres: - (Creature) creature : La créature à retirer
 * Retour: *this
 ****************************************************************************/
//PolyLand& PolyLand::operator-=(Creature* creature)
//{
//	retirerCreature(creature->obtenirNom());
//	return *this;
//}


/****************************************************************************
 * Fonction: operator<<
 * Description: Surcharge l'opérateur << pour afficher toute les informations d'un pays
 * Paramètres: - (ostream&) os : objet de la classe ios qui permet la sortie
 *			   - (PolyLand) objetMagique  : L'objet polyLand que l'on veut afficher
 * Retour: aucun
 ****************************************************************************/
std::ostream& operator<<(std::ostream& os, const PolyLand& poly)
{
	if (!poly.listMaitre_.empty())
	{
		list<Dresseur*> listDresseurTemp = poly.obtenirListMaitre();
		listDresseurTemp.sort(FoncteurComparerDresseur());
        for (Dresseur* dresseur : listDresseurTemp)
		{
			os << *dresseur << std::endl;
		}
	}

	if (!poly.listCompagnon_.empty())
	{
		list<Creature*> listCreatureTemp = poly.obtenirListCompagnon();
		listCreatureTemp.sort(FoncteurComparerCreature());
        for (Creature* creature : listCreatureTemp)
		{
			os << *creature << std::endl;
		}
	}

	return os;
}
