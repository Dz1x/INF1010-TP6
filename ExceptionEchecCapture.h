#ifndef EXCEPTIONEHECCAPTURE_H
#define EXCEPTIONEHECCAPTURE_H

#include <stdexcept>

class ExceptionEchecCapture : public std::runtime_error
{
public:
    ExceptionEchecCapture(const std::string& descriptionErreur);

};

#endif // EXCEPTIONEHECCAPTURE_H

