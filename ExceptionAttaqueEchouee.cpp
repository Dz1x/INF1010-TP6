#include "ExceptionAttaqueEchouee.h"

ExceptionAttaqueEchouee::ExceptionAttaqueEchouee(const std::string& descriptionErreur): std::runtime_error(descriptionErreur){}
