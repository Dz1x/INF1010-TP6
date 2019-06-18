/****************************************************************************
 * Fichier: ExceptionAttaqueMorte.h
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Définition de la classe ExceptionAttaqueMorte
 ****************************************************************************/

#ifndef EXCEPTIONCREATUREMORTE_H
#define EXCEPTIONCREATUREMORTE_H

#include <stdexcept>
#include <string>

class ExceptionCreatureMorte : public std::runtime_error
{
public:

    ExceptionCreatureMorte(const std::string& descriptionErreur);

    static int obtenirValeurCompteur();

private:

        static int compteur_;
};

#endif // EXCEPTIONCREATUREMORTE_H

