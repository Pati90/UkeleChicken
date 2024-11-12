#include "Cerdo.hpp"
#include <iostream>
using namespace std;

Cerdo::Cerdo (string _code, string _name, double _price) : ProductoCarne (_code, _name, _price) {} 

// Cerdo::~Cerdo() {

// }

void Cerdo::show() {

    cout << "Carne de cerdo: ";
    ProductoCarne::show();
}