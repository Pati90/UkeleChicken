#include "Vaca.hpp"
#include <iostream>
using namespace std;

Vaca::Vaca (string _code, string _name, double _price) : ProductoCarne (_code, _name, _price) {}

void Vaca::show() {

    cout << "Carne de vaca: ";
    ProductoCarne::show();
}