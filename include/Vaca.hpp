#ifndef VACA_HPP
#define VACA_HPP

#include "ProductoCarne.hpp"
using namespace std;

class Vaca : public ProductoCarne {
   
    public:
        Vaca(string _code, string _name, double _price);
        void show() override;

};

#endif

