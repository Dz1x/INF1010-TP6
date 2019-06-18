/****************************************************************************
 * Fichier: ExceptionEchecCapture.h
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Définition de la classe ExceptionEchecCapture
 ****************************************************************************/

#ifndef EXCEPTIONEHECCAPTURE_H
#define EXCEPTIONEHECCAPTURE_H

#include <stdexcept>

class ExceptionEchecCapture : public std::runtime_error
{
public:
    ExceptionEchecCapture(const std::string& descriptionErreur);

};

#endif // EXCEPTIONEHECCAPTURE_H

