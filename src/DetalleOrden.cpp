#include "DetalleOrden.hpp"
#include <iostream>
using namespace std;

DetalleOrden::DetalleOrden(int _quantity, double _totalPrice ) {

    quantity = _quantity;
    totalPrice = _totalPrice;

  }

void DetalleOrden::attachProducts(ProductoCarne* _productoCarne) {

    this->ListaProductoCarne.push_back(_productoCarne);
  }

int DetalleOrden::getQuantity(){
    return this->quantity;

}

double DetalleOrden::setSubtotal() {

    double subTotal = 0;
    
    for (ProductoCarne* ProductoCarne : ListaProductoCarne) {
        subTotal += (ProductoCarne->getPrice())*quantity;
    }
    
    return subTotal;
}

void DetalleOrden::showDetalleOrden () {
  cout << endl;
  cout << "Detalles de la orden de compra: " << endl;
  cout << endl;

  for (ProductoCarne* productoCarne : ListaProductoCarne) {
    productoCarne->show();
    cout << "Cantidad: " << quantity << endl;
    cout << "Subtotal: $" << productoCarne->getPrice() * quantity << endl;
    cout << "--------------------------------------------" << endl;
    }
    cout << "Subtotal: $" << setSubtotal() << endl;
}


        
