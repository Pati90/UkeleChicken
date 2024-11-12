#include "Pollo.hpp"
#include <iostream>
using namespace std;


Pollo::Pollo (string _code, string _name, double _price) : ProductoCarne(_code, _name, _price) {} // me traigo explicitamente los parametros de MeatProduct

void Pollo::show() {

    cout << "Pollo: ";
    ProductoCarne::show();
}



