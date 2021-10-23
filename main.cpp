#include "Pila.hpp"
#include "Cola.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <time.h>       /* time */
#include <math.h>
#include <conio.h>      /*Para coger un solo caracter de opcion*/
#include "funciones_aparte.h"
using namespace std;

Pila pilaconreserva;
Cola colaregistrados;
Cola colasinregistrar;

void funcionA();    void funcionB();    void funcionC();
void funcionD();    void funcionE();    void funcionF();
void funcionG();    void funcionH();    void funcionI();
void funcionJ();

bool mostrarMenú(){
    char x;
    cout << "Seleccione una opcion del menu\n";
    cout << "------------------------------\n";
    cout << "             MENU             \n";
    cout << "A: Generar una nueva pila y dos nuevas colas, cada estructura con un\n   numero aleatorio entre 5 y 15 (incluidos) de clientes aleatorios\n";
    cout << "B: Generar un numero concreto de clientes aleatorios con reserva\n";
    cout << "C: Generar un numero concreto de clientes registrados aleatorios, sin reserva,\n   y un numero concreto de de clientes sin registrar aleatorios, sin reserva\n";
    cout << "D: Incluir manualmente un cliente con reserva\n";
    cout << "E: Incluir manualmente un cliente sin reserva, registrado o no registrado\n";
    cout << "F: Mostrar todos los clientes con reserva\n";
    cout << "G: Eliminar todos los clientes con reserva\n";
    cout << "H: Mostrar todos los clientes registrados sin reserva\n";
    cout << "I: Mostrar todos los clientes sin registrar y sin reserva\n";
    cout << "J: Eliminar un tipo o ambos de clientes sin reserva\n";
    cout << "$: Salir del menu\n";
    cout << "Pulse una letra para elegir \n";
    x=getch() ;
    cout << "\n Letra escogida: "<<x<< "\n";
    if ((x>='a' and x<='z') or (x>='A' and x<='Z')){
        if( x == 'a' or x == 'A' ){ funcionA(); }
        if( x == 'b' or x == 'B' ){ funcionB(); }
        return true;
    } else if (x=='$'){
        return false;
    } else{
        cout << "Lo siento, esa opcion no esta disponible\n";
        return true;
    }
}

void funcionA(){
    //limpiar la pila y las colas
    funcionG();
    pilaconreserva.quitar(pilaconreserva.contar());
    //llenar la pila de clientes con reserva
    int numero_clientes = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes; i++ ){
        Cliente c;
        pilaconreserva.apilar( c );
    }
    //llenar la cola de clientes registrados
    int numero_clientes_2 = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes_2; i++ ){
        Cliente c;
        colaregistrados.encolar( c );
    }
    //llenar la cola de clientes registrados
    int numero_clientes_3 = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes_3; i++ ){
        Cliente c;
        colasinregistrar.encolar( c );
    }
}

void funcionB(){
    
}

void funcionF(){
    pilaconreserva.mostrarToda();
}
void funcionG(){
    while !(pilaconreserva.esVacia())
    {
        pilaconreserva.desapilar();
    }
}
void funcionH(){
    colaregistrados.mostrarCola();
}
void funcionI(){
    colasinregistrar.mostrarCola();
}
void funcionJ(){
    char seleccion;
    cout << "Inserte 'R' para borrar la cola de registrados, 'N' para borrar la de no registrados y 'A' para ambas";
    seleccion.getchar();
    if (seleccion=="R"){
        while !(colaregistrados.esVacia()){
            colaregistrados.desencolar();
        }
    }
    else if (seleccion=="N"){
        while !(colasinregistrar.esVacia()){
            colasinregistrar.desencolar();
        }
    }
    else if (seleccion=="A"){
        while !(colaregistrados.esVacia()){
            colaregistrados.desencolar();
        }
        while !(colasinregistrar.esVacia()){
            colasinregistrar.desencolar();
        }
    }
    else{
    cout << "Opcion no permitida";
    }
}

void funcion$(){
    
}

int main()
{
    bool seguir=true;
    srand (time(NULL));
    
    //funcionB();
    while (seguir){
        seguir=mostrarMenú();
    }
    
    for( int i = 0; i < 20; i++ ){
        colaregistrados.mostrarCola();
        Cliente c;
        colaregistrados.encolar(c);
        cout << colaregistrados.get_longitud();
    }
    
    cout << "\n\n Hay: " << colaregistrados.get_longitud() << " elementos\n\n";
    for( int i = 0; i < colaregistrados.get_longitud(); i++ ){
        colaregistrados.desencolar();
    }
    colaregistrados.mostrarCola();
    
cout << "\n\n"; return 0; }
