#include <iostream>
#include "ProductoCarne.hpp"

using namespace std;

ProductoCarne::ProductoCarne (string _code, string _name, double _price) {

    code = _code;
    name = _name;
    price = _price; 

}


string ProductoCarne::getCode () {

    return this->code;
}


string ProductoCarne::getName () {

    return this->name;
}


double ProductoCarne::getPrice () {

    return this->price;
}

void ProductoCarne::show(){
    cout << "\nCod: " << code << "\nNombre: " << name << "\nPrecio Unitario: " << price << " \n";
}
