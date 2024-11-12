#include "Cliente.hpp"

// Cliente::Cliente(string _code, string _name, string _address) : code (_code) , name (_name) , adress (_adress) {}
Cliente::Cliente(string _code, string _name, string _address) { 
    code = _code; 
    name = _name;
    address = _address;
}

string Cliente::getCode () { 
    return this->code; 
}

string Cliente::getName () {
    return this->name;
}

string Cliente::getAddress () {
    return this->address;
}