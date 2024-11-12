#ifndef CERDO_HPP
#define CERDO_HPP

#include "ProductoCarne.hpp"
using namespace std;

class Cerdo : public ProductoCarne {
   
    public:
        Cerdo(string _code, string _name, double _price);
        
        void show() override;

};

#endif