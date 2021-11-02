#include "Pila.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <cctype>
#include <time.h>       /* time */
#include <math.h>
#include <conio.h>      /*Para coger un solo caracter de opcion*/
#include <string.h>
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
        if( tolower(x) == 'a' ){ funcionA(); }
        if( tolower(x) == 'b' ){ funcionB(); }
        if( tolower(x) == 'c' ){ funcionC(); }
        if( tolower(x) == 'd' ){ funcionD(); }
        if( tolower(x) == 'e' ){ funcionE(); }
        if( tolower(x) == 'f' ){ funcionF(); }
        if( tolower(x) == 'g' ){ funcionG(); }
        if( tolower(x) == 'h' ){ funcionH(); }
        if( tolower(x) == 'i' ){ funcionI(); }
        if( tolower(x) == 'j' ){ funcionJ(); }
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
    while (!colaregistrados.es_vacia()){ colaregistrados.desencolar(); }
    while (!colasinregistrar.es_vacia()){ colasinregistrar.desencolar(); }
    //llenar la pila de clientes con reserva
    int numero_clientes = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes; i++ ){
        Cliente c;
        pilaconreserva.apilarPorTipo( c );
    }
    //llenar la cola de clientes registrados
    int numero_clientes_2 = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes_2; i++ ){
        Cliente c_2( true );
        colaregistrados.encolar( c_2 );
    }
    //llenar la cola de clientes sin registrar
    int numero_clientes_3 = rand() % 11 + 5;
    for( int i = 0; i < numero_clientes_3; i++ ){
        Cliente c_3( false );
        colasinregistrar.encolar( c_3 );
    }
}

void funcionB(){
    char texto[] = "Por favor, intoducir un numero entero positivo: ";
    int numero_clientes = get_int(texto);
    for( int i = 0; i < numero_clientes; i++ ){
        Cliente c;
        pilaconreserva.apilarPorTipo( c );
    }
}

void funcionC(){
    char texto[] = "Por favor, para los clientes registrados, intoducir un numero entero positivo: ";
    int numero_clientes = get_int(texto);
    for( int i = 0; i < numero_clientes; i++ ){
        Cliente c(true);
        colaregistrados.encolar( c );
    }
    char texto2[] = "Por favor, para los clientes sin registrar, intoducir un numero entero positivo: ";
    numero_clientes = get_int(texto2);
    for( int i = 0; i < numero_clientes; i++ ){
        Cliente c(false);
        colasinregistrar.encolar( c );
    }
}

void funcionD(){
    Cliente c('I');
    if( !existeMismoIdentificador( pilaconreserva, c ) ){
        pilaconreserva.apilarPorTipo( c );
    } else { cout << "\nIdentificador repetido\n\n"; }
}

void funcionE(){
    Cliente c('I');
    if( c.getEstado() ){
        if( !existeMismoIdentificador( colaregistrados, c ) ){
            colaregistrados.encolar(c);
        } else { cout << "\nIdentificador repetido\n\n"; }
    } else {
        if( !existeMismoIdentificador( colasinregistrar, c ) ){
            colasinregistrar.encolar(c);
        } else { cout << "\nIdentificador repetido\n\n"; }
    }
    
}

void funcionF(){
    mostrar(pilaconreserva);
    cout << "\n";
}
void funcionG(){
    while (!pilaconreserva.esVacia())
    {
        pilaconreserva.desapilar();
    }
}
void funcionH(){
    mostrar(colaregistrados);
    cout << "\n";
}
void funcionI(){
    mostrar(colasinregistrar);
    cout << "\n";
}
void funcionJ(){
    char seleccion;
    cout << "Inserte 'R' para borrar la cola de registrados, 'N' para borrar la de no registrados y 'A' para ambas";
    seleccion=getch();
    if ( tolower(seleccion) == 'r' ){
        while (!colaregistrados.es_vacia()) {
            colaregistrados.desencolar();
        }
    }
    else if ( tolower(seleccion) == 'n' ){
        while (!colasinregistrar.es_vacia()){
            colasinregistrar.desencolar();
        }
    }
    else if ( tolower(seleccion) == 'a' ){
        while (!colaregistrados.es_vacia()){
            colaregistrados.desencolar();
        }
        while (!colasinregistrar.es_vacia()){
            colasinregistrar.desencolar();
        }
    }
    else{
    cout << "\n\nOpcion no permitida\n";
    }
}

int main()
{

    srand (time(NULL));
    
    bool seguir=true;
    srand (time(NULL));

    while (seguir){
        seguir=mostrarMenú();
    }
    
    /*
    Lista l;
    for( int i = 0; i < 40; i++ ){ 
        Cliente c;
        l.insertar(c);
    }
    l.mostrarLista();
    */
    
cout << "\n\n"; return 0; }
