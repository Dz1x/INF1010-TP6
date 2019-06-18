/****************************************************************************
 * Fichier: ExceptionAttaqueEchouee.h
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Définition de la classe ExceptionAttaqueEchouee
 ****************************************************************************/

#ifndef EXCEPTIONATTAQUEECHOUEE_H
#define EXCEPTIONATTAQUEECHOUEE_H

#include <stdexcept>
#include <string>

class ExceptionAttaqueEchouee : public std::runtime_error
{
public:
    ExceptionAttaqueEchouee(const std::string & descriptionErreur);
};

#endif // EXCEPTIONATTAQUEECHOUEE_H
