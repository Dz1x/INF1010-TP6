/****************************************************************************
 * Fichier: Dresseur.h
 * Auteur: Alexandre Mao
 * Date: 31 août 2016
 * Mise à jour : 6 sept par Maude Carrier
 * Mise à jour : 17 juin par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Définition de la classe Dresseur
 *				Les dresseurs sont les êtres capables d'attraper des créatures.
 ****************************************************************************/

#ifndef DRESSEUR_H
#define DRESSEUR_H

#include <string>
#include <iostream>
#include <list>
#include <algorithm>

#include "Creature.h"
#include "ObjetMagique.h"
#include "ExceptionEchecCapture.h"

class Dresseur
{
public:
	Dresseur();
	Dresseur(const std::string& nom, const std::string& equipe);
	~Dresseur();

	std::string obtenirNom() const;
    std::string obtenirEquipe() const;
    Creature* obtenirUneCreature(const std::string& nom) const;
    ObjetMagique obtenirObjetMagique() const;
    unsigned int obtenirNombreCreatures() const;
    std::vector<Creature*> obtenirCreatures() const;

	void modifierNom(const std::string& nom);
    void modifierEquipe(const std::string& equipe);
    void modifierCreature(std::vector<Creature*>  creatures);
    void modifierObjetMagique(const ObjetMagique& objetMagique);

    void utiliserObjetMagique(Creature* creature);

	void ajouterCreature(Creature* creature);
	bool enleverCreature(const std::string& nom);

	bool operator==(const Dresseur& dresseur) const;
	bool operator==(const std::string& nom) const;
	friend bool operator==(const std::string& nom, const Dresseur& dresseur);

    friend std::ostream& operator<<(std::ostream& os, const Dresseur& dresseur);

    //TODO : Methodes TP5
    template<typename PredicatUnaire>
    void appliquerFoncteurUnaire(PredicatUnaire& froncteur) const;

    template<typename PredicatUnaire>
    void supprimerElements(PredicatUnaire& froncteur);

    template<typename PredicatBinaire>
    Creature* obtenirCreatureMax(const PredicatBinaire& predicat);

private:
    // Attribues
	std::string nom_;
    std::string equipe_;

	std::vector<Creature*> creatures_;
	ObjetMagique objetMagique_;

};

template<typename PredicatUnaire>
void Dresseur::appliquerFoncteurUnaire(PredicatUnaire & froncteur) const
{
    for (Creature* creature : creatures_)
    {
        froncteur(creature);
    }
}

template<typename PredicatUnaire>
void Dresseur::supprimerElements(PredicatUnaire & foncteur)
{
    creatures_.remove_if(foncteur);
}

template<typename PredicatBinaire>
Creature* Dresseur::obtenirCreatureMax(const PredicatBinaire & predicat)
{
    auto max_it = std::max_element(creatures_.begin(), creatures_.end(), predicat);
    if (max_it != creatures_.end())
        return *max_it;

    return nullptr;
}

#endif // !DRESSEUR_H
