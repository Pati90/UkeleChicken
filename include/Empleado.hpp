#ifndef EMPLEADO_HPP
#define EMPLEADO_HPP

#include <string>

using namespace std;

class Empleado {

    private:
        string code;
        string name;
        string jobTittle;

    public:
        Empleado(string _code, string _name, string _jobTittle);
        // ~Empleado();
        string getCode();
        string getName();
        string getJobTittle();

};
#endif 
