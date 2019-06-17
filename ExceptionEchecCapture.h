#ifndef EXCEPTIONEHECCAPTURE_H
#define EXCEPTIONEHECCAPTURE_H

#include <stdexcept>

class ExceptionEchecCapture : public std::runtime_error
{
public:
    ExceptionEchecCapture(const std::string& descriptionErreur = "Vous possedez deja cette creature!");

};

#endif // EXCEPTIONEHECCAPTURE_H

