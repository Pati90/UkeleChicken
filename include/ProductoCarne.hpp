#ifndef PRODUCTOCARNE_HPP
#define PRODUCTOCARNE_HPP

#include <string>
using namespace std;

class ProductoCarne {
    protected: 
        string code;
        string name;
        double price;

    public:
        ProductoCarne(string _code, string _name, double _price);
        virtual ~ProductoCarne() {} // Destructor virtual para los delete
        string getCode();
        string getName();
        double getPrice();
        virtual void show() = 0; // Metodo virtual puro (clase abstracta)

};

#endif 