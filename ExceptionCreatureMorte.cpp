/****************************************************************************
 * Fichier: ExceptionAttaqueMorte.cpp
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Implementation de la classe ExceptionAttaqueMorte
 ****************************************************************************/

#include "ExceptionCreatureMorte.h"

int ExceptionCreatureMorte::compteur_ = 0;

ExceptionCreatureMorte::ExceptionCreatureMorte(const std::string& descriptionErreur) : runtime_error(descriptionErreur){
    compteur_++;
};

 int ExceptionCreatureMorte::obtenirValeurCompteur() {
    return compteur_;
}
