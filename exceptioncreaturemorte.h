#ifndef EXCEPTIONCREATUREMORTE_H
#define EXCEPTIONCREATUREMORTE_H

#include <stdexcept>
using namespace std;

class ExceptionCreatureMorte : public runtime_error{

    public:
    ExceptionCreatureMorte(const string&erreur);
    static int obtenirValeurCompteur() ;


private:
    static int compteur_;

};







#endif // EXCEPTIONCREATUREMORTE_H
