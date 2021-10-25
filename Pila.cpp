#include "Pila.hpp"
#include "NodoPila.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <string.h>
using namespace std;

Pila::Pila()
{cima = NULL;}

Pila::~Pila()
{ while(cima) desapilar();}

bool Pila::esVacia()
{ return cima == NULL; }

void Pila::apilar(Cliente c)
{
    pnodo nuevo = new NodoPila(c, cima);
    //comienzo de la pila nevo nodo
    cima = nuevo;
}

void Pila::apilarLaboratorio(Cliente c)
{
    if( esVacia() ){
        pnodo nuevo = new NodoPila(c, cima);
        if( c.esta_registrado ){ fondo_registrado = nuevo; }
        cima = nuevo; 
    }
    else if( c.esta_registrado ){
        pnodo nuevo = new NodoPila(c, cima); 
        cima = nuevo;
        if( !fondo_registrado ){ fondo_registrado = nuevo; }
    }
    else if( !c.esta_registrado ){
        if( fondo_registrado ){ 
            pnodo nuevo = new NodoPila(c, fondo_registrado->siguiente); 
            fondo_registrado->siguiente = nuevo;
        }
        else{
            pnodo nuevo = new NodoPila(c, cima); 
            cima = nuevo;
        }
    }

}

void Pila::desapilar()
{ 
    pnodo nodo; //puntero aux para manipular el nodo
    if(cima){
        nodo = cima;
        cima = nodo->siguiente;
        delete nodo;
    }
}

void Pila::desapilarLaboratorio()
{ 
    desapilar();
    if( cima ){
        if( !cima->valor.esta_registrado ){
            fondo_registrado = NULL;
        }
    }
}

void Pila::mostrar()
{ 
    if(esVacia()) {
        cout << "Pila vacia"<<endl;
    }
    else{
        cout << "Cima pila: ";
        cima->valor.showString();
        cout << "\n";
    }

}

void Pila::mostrarToda()
{ 
    int num = contar();
    if( num < 1 ){ cout << "\n\nPila vacia\n"; }
    else{
        cout << "\n\nPila: " << num << "\n";
        pnodo nodo = cima;
        while( nodo != NULL ){
            cout << "Elemento: ";
            nodo->valor.showString();
            cout << "\n";
            nodo = nodo->siguiente;
        }
        delete nodo;
    }
}

//EJERCICIOS

int Pila::contar( )
{ 
    pnodo nodo = cima;
    int valor = 0;
    while( nodo != NULL ){
        nodo = nodo->siguiente;
        valor++;
    }
    delete nodo;
    return valor;
}

void Pila::fondo( )
{ 
    pnodo nodo = cima;
    while( nodo->siguiente != NULL ){
        nodo = nodo->siguiente;
    }
    nodo->valor.showString();
    delete nodo;
}

void Pila::invertir()
{ 
    Pila pilavacia;
    pnodo nodo = cima;
    while( nodo != NULL ){
        pilavacia.apilar(nodo->valor);
        nodo = nodo->siguiente;
    }
    cima = pilavacia.cima;
    delete nodo;
}

void Pila::montar( Pila pilaapilar )
{ 
    pilaapilar.invertir();
    while( !pilaapilar.esVacia() ){
        apilar( pilaapilar.cima->valor );
        pilaapilar.desapilar();
    }
}

void Pila::quitar( int num_elems )
{ 
    if(contar() >= num_elems){
        pnodo nodo = cima;
        while( num_elems > 0 ){
            nodo = nodo->siguiente;
            num_elems--;
        }
        cima = nodo;
        delete nodo;
    } else { cout << "No se pueden quitar más elementos de los que hay (hay " << contar() << " elementos)\n"; }
}

void Pila::eliminarFondoPila()
{ 
    invertir();
    desapilar();
    invertir();
}

bool Pila::existeMismoIdentificador(Cliente c){
    bool estado = false;
    pnodo nodo = cima;
    char *puntero2 = c.identificador_cliente;
    char *puntero1;
    while( nodo != NULL && !estado ){
        puntero1 = nodo->valor.identificador_cliente;
        if( strcmp( puntero1, puntero2 ) == 0 ){ estado = true; }
        nodo = nodo->siguiente;
    }
    delete nodo;
    return estado;
}

bool Pila::existeMismoIdentificador(char *texto){
    bool estado = false;
    pnodo nodo = cima;
    char *puntero1;
    while( nodo != NULL && !estado ){
        puntero1 = nodo->valor.identificador_cliente;
        if( strcmp( puntero1, texto ) == 0 ){ estado = true; }
        nodo = nodo->siguiente;
    }
    delete nodo;
    return estado;
}

/*
bool Pila::esOrdenCreciente(){
    int numero = cima->valor;
    pnodo nodo = cima->siguiente;
    while( nodo != NULL ){
        if( numero < nodo->valor ){ return false; }
        numero = nodo->valor;
        nodo = nodo->siguiente;
    }
    return true;
}

bool Pila::esOrdenDecreciente(){
    int numero = cima->valor;
    pnodo nodo = cima->siguiente;
    while( nodo != NULL ){
        if( numero > nodo->valor ){ return false; }
        numero = nodo->valor;
        nodo = nodo->siguiente;
    }
    return true;
}
*/
