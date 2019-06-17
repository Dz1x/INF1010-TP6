#include "ExceptionCreatureMorte.h"

int ExceptionCreatureMorte::compteur_ = 0;

ExceptionCreatureMorte::ExceptionCreatureMorte(const std::string& descriptionErreur) : runtime_error(descriptionErreur){
    compteur_++;
};

 int ExceptionCreatureMorte::obtenirValeurCompteur() {
    return compteur_;
}
