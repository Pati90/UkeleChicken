#include "Empleado.hpp"

Empleado::Empleado(string _code, string _name, string _jobTittle) {
    code = _code;
    name = _name;
    jobTittle = _jobTittle;
}

string Empleado::getCode () {
    return this->code;
}

string Empleado::getName () {
    return this->name;
   
}

string Empleado::getJobTittle () {
    return this->jobTittle;   
}