#ifndef EXCEPTIONCREATUREMORTE_H
#define EXCEPTIONCREATUREMORTE_H

#include <stdexcept>
#include <string>

class ExceptionCreatureMorte : public std::runtime_error
{
public:

    ExceptionCreatureMorte(const std::string& descriptionErreur = "");

    static int obtenirValeurCompteur();

private:

        static int compteur_;
};

#endif // EXCEPTIONCREATUREMORTE_H

