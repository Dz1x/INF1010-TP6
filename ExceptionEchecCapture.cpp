#include "ExceptionEchecCapture.h"

ExceptionEchecCapture::ExceptionEchecCapture(const std::string& descriptionErreur): std::runtime_error (descriptionErreur){}
