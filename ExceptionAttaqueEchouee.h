#ifndef EXCEPTIONATTAQUEECHOUEE_H
#define EXCEPTIONATTAQUEECHOUEE_H

#include <stdexcept>
#include <string>

class ExceptionAttaqueEchouee : public std::runtime_error
{
public:
    ExceptionAttaqueEchouee(const std::string & descriptionErreur = "Votre creature n'as plus d'energie!");
};

#endif // EXCEPTIONATTAQUEECHOUEE_H
