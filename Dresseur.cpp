/****************************************************************************
 * Fichier: Dresseur.cpp
 * Auteur: Alexandre MAO
 * Date: 31 aout 2016
 * Mise à jour: 06 sept 2016 par Maude Carrier
 * Mise à jour: 17 juin 2019 par Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Description: Implémentation de la classe Dresseur
 *				Les dresseurs sont les êtres capables d'attraper des créatures.
 ****************************************************************************/

#include "Dresseur.h"
#include "Foncteur.h"

/****************************************************************************
 * Fonction: Dresseur::Dresseur
 * Description: Constructeur par défaut
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Dresseur::Dresseur() :nom_(""), equipe_("") {};

/****************************************************************************
 * Fonction: Dresseur::Dresseur
 * Description: Constructeur par paramètres
 * Paramètres: - (string) nom: nom du dresseur
 *             - (string) equipe: nom de l'equipe
 * Retour: aucun
 ****************************************************************************/
Dresseur::Dresseur(const std::string& nom, const std::string& equipe) : nom_(nom), equipe_(equipe) {};

/****************************************************************************
 * Fonction: Dresseur::~Dresseur
 * Description: Destructeur de l'objet Dresseur
 * Paramètres: aucun
 * Retour: aucun
 ****************************************************************************/
Dresseur::~Dresseur()
{
	for (auto it = creatures_.begin(); it != creatures_.end(); ++it) {
		delete *it;
	}
}

/****************************************************************************
 * Fonction: Dresseur::obtenirDresseur
 * Description: Retourne le nom du dresseur
 * Paramètres: aucun
 * Retour: - (string) nom_: le nom du dresseur
 ****************************************************************************/
std::string Dresseur::obtenirNom() const
{
	return nom_;
}

/****************************************************************************
 * Fonction: Dresseur::obtenirEquipe
 * Description: Retourne le nom de l'équipe du dresseur
 * Paramètres: aucun
 * Retour: - (string) equipe_: le nom de l'equipe
 ****************************************************************************/
std::string Dresseur::obtenirEquipe() const
{
    return equipe_;
}

/****************************************************************************
 * Fonction: Dresseur::obtenirUneCreatures
 * Description: Retourne d'adresse d'une créature
 * Paramètres: - (string) nom : le nom de la créature que l'on cherche
 * Retour:  *position
 ****************************************************************************/
Creature* Dresseur::obtenirUneCreature(const std::string& nom) const //A Compl�ter
{
    FoncteurCreaturesDeMemeNom fronteurComparaison(nom);
    auto position = find_if(creatures_.begin(), creatures_.end(), fronteurComparaison);
    if (position == creatures_.end())
        return nullptr;

    return *position;
}

/****************************************************************************
 * Fonction: Dresseur::obtenirObjetMagique
 * Description: Retourne un objet magique d'un dresseur
 * Paramètres: aucun
 * Retour: (ObjetMagique) objetMagique_
 ****************************************************************************/
ObjetMagique Dresseur::obtenirObjetMagique() const
{
    return objetMagique_;
}

/****************************************************************************
 * Fonction: Dresseur::obtenirNombreCreatures
 * Description: Retourne un nombre de créature
 * Paramètres: aucun
 * Retour: (unsigned int) la valeur de nombreCreature_
 ****************************************************************************/
unsigned int Dresseur::obtenirNombreCreatures() const
{
	return creatures_.size();
}

/****************************************************************************
 * Fonction: Dresseur::obtenirCreatures
 * Description: Retourne la liste de créatures du dresseur sous forme de vecteur
 * Paramètres: aucun
 * Retour: (vector<Creature*>) la valeur de Creature_
 ****************************************************************************/
std::vector<Creature*> Dresseur::obtenirCreatures() const
{
	return creatures_;
}

/****************************************************************************
 * Fonction: Dresseur::modifierNom
 * Description: Modifie le nom du dresseur
 * Paramètres: - (string) nom: le nouveau nom
 * Retour: aucun
 ****************************************************************************/
void Dresseur::modifierNom(const std::string& nom)
{
    nom_ = nom;
}

/****************************************************************************
 * Fonction: Dresseur::modifierEquipe
 * Description: Modifie le nom de l'équipe du dresseur
 * Paramètres: - (string) equipe: le nouveau nom de l'equipe
 * Retour: aucun
 ****************************************************************************/
void Dresseur::modifierEquipe(const std::string& equipe)
{
    equipe_ = equipe;
}

/****************************************************************************
 * Fonction: Dresseur::modifierCreature
 * Description: Modifie le tableau creatures_
 * Paramètres: - (Creature**) creature: les nouvelles données du tableau Creatures_
 * Retour: aucun
 ****************************************************************************/
void Dresseur::modifierCreature(std::vector<Creature*> creatures) //A Compl�ter
{
	creatures_ = creatures;
}

/****************************************************************************
 * Fonction: Dresseur::modifierObjetMagique
 * Description: Modifie objetMagique_
 * Paramètres: - (ObjetMagique) objetMagique: la nouvelle valeur de objetMagique_
 * Retour: aucun
 ****************************************************************************/
void Dresseur::modifierObjetMagique(const ObjetMagique & objetMagique)
{
    objetMagique_ = objetMagique;
}

/****************************************************************************
 * Fonction: Dresseur::utiliserObjetMagique
 * Description:  Elle applique le bonus de l’attribut objetMagique du dresseur
 *				 à une créature. L’application de l’objet magique sur la créature
 *				 va augmenter l’attribut point de vie et l’attribut energie de
 *               la créature selon la valeur du bonus de l’objetMagique.
 * Paramètres: - (Creature*) creature: un pointeur sur une créature
 * Retour: aucun
 ****************************************************************************/
void Dresseur::utiliserObjetMagique(Creature* creature)
{

    if ((creature->obtenirPointDeVieTotal() - creature->obtenirPointDeVie()) >= objetMagique_.obtenirBonus()) {
        creature->modifierPointDeVie(creature->obtenirPointDeVie() + objetMagique_.obtenirBonus());
    }
    else {
        creature->modifierPointDeVie(creature->obtenirPointDeVieTotal());
    }
    if ((creature->obtenirEnergieTotale() - creature->obtenirEnergie()) > objetMagique_.obtenirBonus()) {
        creature->modifierEnergie(creature->obtenirEnergie() + objetMagique_.obtenirBonus());
    }
    else {
        creature->modifierEnergie(creature->obtenirEnergieTotale());
    }
}

/****************************************************************************
 * Fonction: Dresseur::ajouterCreature
 * Description: Il prend en paramètre une créature et qui l’ajoute au
 *				vecteur de créatures du dresseur. L’ajout de la créature ne se
 *				fait que si le dresseur ne la possède pas encore. Cette méthode doit renvoyer true si
 *				l’opération est un succès, false sinon.
 * Paramètres: - (Creature) creature: C'est la nouvelle créature à ajouter au vecteur creatures_
 * Retour: (bool) true or false
 ****************************************************************************/
void Dresseur::ajouterCreature(Creature* creature)
{
    //!!!!!! A COMPLETER !!!!!!
    FoncteurEgalCreatures comparaison(creature);
    auto position_creature = find_if(creatures_.begin(), creatures_.end(), comparaison);
    if (position_creature != creatures_.end()){
        throw ExceptionEchecCapture("Capture Impossible!");
    }
    else{
        creatures_.push_back(new Creature(*creature));
    }
}

/****************************************************************************
 * Fonction: Dresseur::retirerCreature
 * Description: Il qui prend en paramètre un nom et retire la créature
 *				avec le nom associé si le dresseur la possède. Cette méthode doit renvoyer true si
 *				l’opération est un succès, false sinon.
 * Paramètres: - (string) nom: C'est le nom de la créature à retirer
 * Retour: (bool) true or false
 ****************************************************************************/
bool Dresseur::enleverCreature(const std::string& nom)
{
    FoncteurCreaturesDeMemeNom fronteurComparaison(nom);
    auto position = find_if(creatures_.begin(), creatures_.end(), fronteurComparaison);
    if (position == creatures_.end())
        return false;
	delete *position;
    creatures_.erase(position);

	return true;
}

/****************************************************************************
 * Fonction: operator==
 * Description: Surcharge l'opérateur == pour comparer deux dresseurs
 * Paramètres: - (Dresseur) dresseur : L'objet à comparer
 * Retour: (bool) true or false
 ****************************************************************************/
bool Dresseur::operator==(const Dresseur& dresseur) const
{
    if (creatures_.size() == 0 && dresseur.creatures_.size() == 0)
        return true;
    else if (creatures_.size() != dresseur.creatures_.size())
        return false;

    for (auto it = creatures_.begin(); it != creatures_.end(); ++it) {
        FoncteurEgalCreatures comparaison(*it);
        auto position_creature = find_if(dresseur.creatures_.begin(), dresseur.creatures_.end(), comparaison);
        if (position_creature == dresseur.creatures_.end())
            return false;
    }

	return true;
}

/****************************************************************************
 * Fonction: operator==
 * Description: Surcharge l'opérateur == pour comparer deux nom de dresseur
 * Paramètres:  - (String) nom : le nom à comparer
 * Retour: (bool) true or false
 ****************************************************************************/
bool Dresseur::operator==(const std::string& nom) const
{
	return (nom_ == nom);
}

/****************************************************************************
 * Fonction: operator==
 * Description: Surcharge l'opérateur == pour comparer un nom de dresseur avec un dresseur
 * Paramètres:  - (String) nom : le nom à comparer
 *				- (Dresseur) dresseur : L'objet à comparer
 * Retour: (bool) true or false
 ****************************************************************************/
bool operator==(const std::string& nom, const Dresseur& dresseur)
{
	return dresseur == nom;
}

/****************************************************************************
 * Fonction: operator<<
 * Description: Surcharge l'opérateur << pour afficher toute les informations d'un dresseur
 * Paramètres: - (ostream&) os : objet de la classe ios qui permet la sortie
 *			   - (Dresseur) dresseur : L'objet dresseur que l'on veut afficher
 * Retour: aucun
 ****************************************************************************/
std::ostream& operator<<(std::ostream& os, const Dresseur& dresseur)
{
    return os << dresseur.nom_ << " possede " << dresseur.creatures_.size()
        << " creature(s) et appartient a l'equipe " << dresseur.equipe_ << std::endl;
}
