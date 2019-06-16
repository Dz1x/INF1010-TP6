#include "exceptioncreaturemorte.h"

int ExceptionCreatureMorte::compteur_=0;

ExceptionCreatureMorte::ExceptionCreatureMorte(const string&erreur) : runtime_error(erreur){
    compteur_++;


};

 int ExceptionCreatureMorte::obtenirValeurCompteur() {
    return compteur_;
}
