/****************************************************************************
 * Fichier: ExceptionAttaqueEchouee.cpp
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Implementation de la classe ExceptionAttaqueEchouee
 ****************************************************************************/

#include "ExceptionAttaqueEchouee.h"

ExceptionAttaqueEchouee::ExceptionAttaqueEchouee(const std::string& descriptionErreur): std::runtime_error(descriptionErreur){}
