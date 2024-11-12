#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
    private:
        string code;
        string name;
        string address;

    public:
        Cliente(string _code, string _name, string _address);
        //~Cliente();
        string getCode();
        string getName();
        string getAddress();
};

#endif 
