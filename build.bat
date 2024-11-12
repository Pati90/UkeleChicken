g++ -std=c++17 -Wall -I./include -c ./src/Cliente.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Empleado.cpp
g++ -std=c++17 -Wall -I./include -c ./src/ProductoCarne.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Pollo.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Vaca.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Cerdo.cpp
g++ -std=c++17 -Wall -I./include -c ./src/DetalleOrden.cpp
g++ -std=c++17 -Wall -I./include -c ./src/Orden.cpp
g++ -std=c++17 -Wall -I./include -c main.cpp


g++ -std=c++17 -Wall -Wextra -Wpedantic -Werror -I./include Cliente.o Empleado.o ProductoCarne.o Pollo.o Vaca.o Cerdo.o DetalleOrden.o Orden.o main.o -o app.exe


DEL .\*.o 


app.exe