/****************************************************************************
 * Fichier: ExceptionEchecCapture.h
 * Auteurs : Anass Bahir <anass.bahir@polymtl.ca> et Haroun Khalfi <haroun.khalfi@polymtl.ca>
 * Date: 17 juin 2019
 * Description: Implementation de la classe ExceptionEchecCapture
 ****************************************************************************/

#include "ExceptionEchecCapture.h"

ExceptionEchecCapture::ExceptionEchecCapture(const std::string& descriptionErreur): std::runtime_error (descriptionErreur){}
