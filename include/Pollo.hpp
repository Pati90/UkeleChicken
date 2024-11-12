#ifndef POLLO_HPP
#define POLLO_HPP

#include "ProductoCarne.hpp"
using namespace std;

class Pollo : public ProductoCarne {
   
    public:
        Pollo(string _code, string _name, double _price);
        void show() override; // sobrecargo metodo show

};

#endif
