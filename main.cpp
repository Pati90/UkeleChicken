#include <iostream>
#include "Cliente.hpp" 
#include "Empleado.hpp"
#include "Orden.hpp"
#include "DetalleOrden.hpp"
#include "Cerdo.hpp"
#include "Pollo.hpp"
#include "ProductoCarne.hpp"
#include "Vaca.hpp"

using namespace std;

int main () {
    cout << "-----------------Ropa de Seguridad--------------------\n----------------PEDIDOS--------------------" << endl;
    cout << endl;
    
    // Creo clientes
    Cliente* cliente1 = new Cliente ("C009", "Agustina Gonzalez", "San Luis 3345"); 
    Cliente* cliente2 = new Cliente ("C002", "Elsa Perez", "Mitre 2856");
    Cliente* cliente3 = new Cliente ("C003", "Zulema Fernandez", "Almafuerte 3756");

    // Creo empleados
    Empleado* empleado1 = new Empleado ("E009", "Esteban Mc Cain", "Supervisor");
    Empleado* empleado2 = new Empleado ("E002", "Graciela Garcia", "Vendedora");
    Empleado* empleado3 = new Empleado ("E003", "Hector Gomez ", "Vendedor");

    // Creo pedido
    ProductoCarne* pollo1 = new Pollo ("PC009", "Pata/Muslo", 1300);
    ProductoCarne* pollo2 = new Pollo ("PC002", "Menudos", 100);
    ProductoCarne* cerdo1 = new Cerdo ("PC003", "Bondiola", 12000);
    ProductoCarne* cerdo2 = new Cerdo ("PC004", "Costillas", 8000);
    ProductoCarne* vaca1 = new Vaca ("PC005", "Vacío", 6500);
    ProductoCarne* vaca2 = new Vaca ("PC004", "Asado", 8000);

     // Cargo algunos detalles de pedidos (cantidad exacta por producto)
    DetalleOrden* detalleOrden1 = new DetalleOrden(2, 0); // Cantidad (y precio en 0)
    detalleOrden1->attachProducts(pollo1);
    DetalleOrden* detalleOrden2 = new DetalleOrden(4, 0); 
    detalleOrden1->attachProducts(pollo2);

    DetalleOrden* detalleOrden3 = new DetalleOrden(1, 0);
    detalleOrden2->attachProducts(vaca1);
    DetalleOrden* detalleOrden4 = new DetalleOrden(5, 0);
    detalleOrden2->attachProducts(vaca2);

    DetalleOrden* detalleOrden5 = new DetalleOrden(1, 0);
    detalleOrden3->attachProducts(cerdo1);


// Cargo algunos pedidos
    Orden* ordenCliente1 = new Orden ("0001", cliente1, empleado1);
    ordenCliente1-> attachDetalle(detalleOrden2);
    ordenCliente1-> attachDetalle(detalleOrden3);


    Orden* ordenCliente2 = new Orden ("0002", cliente2, empleado2);
    ordenCliente2-> attachDetalle(detalleOrden1);
    ordenCliente2-> attachDetalle(detalleOrden3);
    ordenCliente2-> attachDetalle(detalleOrden5);
   

    Orden* ordenCliente3 = new Orden ("0003", cliente3, empleado3);
    ordenCliente3-> attachDetalle(detalleOrden1);
    ordenCliente3-> attachDetalle(detalleOrden2);
    ordenCliente3-> attachDetalle(detalleOrden3);
    ordenCliente3->attachDetalle(detalleOrden4);


    // Mostrar pedidos
    cout << "Orden de Compra Nro 1 " << endl;
    ordenCliente1-> showOrden();
    cout << "Orden de Compra Nro 2 " << endl;
    ordenCliente2-> showOrden();
    cout << "Orden de Compra Nro 3 " << endl;
    ordenCliente3-> showOrden();

    // Libero memoria
    delete cliente1;
    delete cliente2;
    delete cliente3;
    delete empleado1;
    delete empleado2;
    delete empleado3;
    delete pollo1;
    delete pollo2;
    delete vaca1;
    delete vaca2;
    delete cerdo1;
    delete cerdo2;
    delete ordenCliente1;
    delete ordenCliente2;
    delete ordenCliente3;
    delete detalleOrden1;
    delete detalleOrden2;
    delete detalleOrden3;
    delete detalleOrden4;

    return 0;
}