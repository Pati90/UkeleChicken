#ifndef DETALLEORDEN_HPP
#define DETALLEORDEN_HPP


#include <iostream>
#include <string>
#include <list>

#include "ProductoCarne.hpp"
#include "Cliente.hpp"
#include "Empleado.hpp"


using namespace std;


class DetalleOrden {
    private:
        int quantity;
        list <ProductoCarne*> ListaProductoCarne;
        double totalPrice;
        
        
    
    public:
        DetalleOrden(int _quantity, double _totalPrice);
        int getQuantity();
        double setSubtotal();
        void attachProducts(ProductoCarne* _ProductoCarne);
        void showDetalleOrden();
                
};



#endif