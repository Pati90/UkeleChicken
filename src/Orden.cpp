#include "Orden.hpp"

Orden::Orden(string _code, Cliente* _cliente, Empleado* _empleado) {
    code = _code;
    cliente = _cliente;
    empleado = _empleado;
  }
  
void Orden::attachDetalle(DetalleOrden* _detalleOrden) {
    this->ListaDetalleOrden.push_back(_detalleOrden);
  }


 void Orden::showOrden () {
  double totalPrice = 0;
    
  cout << "-------------------PRODUCTOS---------------------------" << endl;
  cout << "Codigo de la orden: " << code << endl;
  cout << "Cliente: " << cliente->getName() << endl;
  cout << endl;
  cout << "Atendido por empleado: " << empleado->getName() << endl;
  cout << "Cargo: " << empleado->getJobTittle() << endl;
  cout << endl;
  cout << "--------------------------------------------" << endl;

  // Recorrer cada OrderDetails en la lista y mostrar sus detalles
  for (DetalleOrden* detalleOrden : ListaDetalleOrden) {
      detalleOrden->showDetalleOrden();  // Llama a showOrDetails para mostrar cada detalle del producto
      totalPrice += detalleOrden->setSubtotal();  // Sumo el subtotal de cada detalle
  }

  cout << "--------------------------------------------" << endl;
  cout << endl;
  cout << "Precio total de la orden: $" << totalPrice << endl;
  cout << "--------------------------------------------" << endl;
  cout << endl;
  cout << "Gracias por su compra. " << endl;
  cout << endl;

  }