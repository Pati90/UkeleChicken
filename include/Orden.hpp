#ifndef ORDEN_HPP 
#define ORDEN_HPP

#include <iostream>
#include <string> 
#include <list> 

#include "Cliente.hpp"
#include "Empleado.hpp"
#include "ProductoCarne.hpp"
#include "DetalleOrden.hpp"

using namespace std;

class Orden {
    private:
        string code;
        Cliente* cliente; 
        Empleado* empleado;
        list<DetalleOrden*> ListaDetalleOrden; 
           
    public:
        Orden(string _code, Cliente* _cliente, Empleado* _Empleado); 
        void attachDetalle (DetalleOrden* _DetalleOrden); 
        void showOrden();
};

#endif