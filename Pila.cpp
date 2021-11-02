#include "Pila.hpp"
#include "NodoPila.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <string.h>
using namespace std;

Pila::Pila()
{
    ncima = NULL;
}

Pila::Pila( const Pila &p ) //creado para evitar la implementación de memoria dinámica lo máximo posible (junto con ajustes en las void Pila::desapilar() y en Pila::~Pila() )
{
    ncima = p.ncima;
    copia = true;
}

Pila::~Pila()
{ 
    while(ncima) desapilar();
}

bool Pila::esVacia()
{ 
    return ncima == NULL; 
}

Cliente Pila::cima(){ return ncima->valor; } //creado para una mayor intuitividad y legibilidad del codigo

void Pila::apilar(Cliente v)
{ 
    pnodo nuevo = new NodoPila(v, ncima);
    //comienzo de la pila nevo nodo
    ncima = nuevo;
}

void Pila::desapilar()
{ 
    pnodo nodo; //puntero aux para manipular el nodo
    if(ncima){
        nodo = ncima;
        ncima = nodo->siguiente;
    }
    if(!copia){ delete nodo; }
}

void Pila::mostrarCima()
{ 
    if(esVacia()) {
        cout << "Pila vacia"<<endl;
    }
    else{
        cout << "Cima pila: ";
        ncima->valor.showString();
        cout << "\n";
    }

}

//CREADOS APARTE PARA UNA MAYOR LIMPIEZA DE CÓDIGO

void Pila::apilarPorTipo(Cliente c){
    if( esVacia() || c.esta_registrado ){ apilar(c);}
    else{
        Pila paux;
        while( !esVacia() && cima().esta_registrado ){
            paux.apilar(cima());
            desapilar();
        }
        apilar(c);
        paux=inversa(paux);
        montar(paux);
    }
}

void Pila::montar( Pila encima ){
    Pila paux = inversa(encima);
    while( !paux.esVacia() ){
        apilar( paux.cima() );
        paux.desapilar();
    }
}

//EJERCICIOS

void mostrar( Pila p ){
    cout << "\nPila de ( " << contar(p) << " elementos ):\n";
    while( !p.esVacia() ){
        p.mostrarCima();
        p.desapilar();
    }
}

int contar( Pila p ){
    int num = 0;
    while( !p.esVacia() ){
        num++;
        p.desapilar();
    }
    return num;
}

void consultarFondo( Pila p ){
    cout << "Fondo de la pila: ";
    mostrar(inversa(p));
    cout << "\n";
}

Pila eliminarFondoPila( Pila p ){
    p = inversa(p);
    p.desapilar();
    return inversa(p); 
}

Pila inversa_aux( Pila p1, Pila p2 ){
    if( p1.esVacia() ){ return p2; }
    else{
        p2.apilar( p1.cima() );
        p1.desapilar();
        return inversa_aux( p1, p2 );
    }
}

Pila inversa( Pila p ){
    Pila pvacia;
    return inversa_aux( p, pvacia );
}

Pila montar_aux( Pila debajo, Pila encima ){
    encima = inversa(encima);
    while( !encima.esVacia() ){
        debajo.apilar( encima.cima() );
        encima.desapilar();
    }
    return debajo;
}

Pila montar( Pila debajo, Pila encima ){ return montar_aux( debajo, encima ); }

Pila quitar( Pila p, int num ){
    if( p.esVacia() || num <= 0 ){ return p; }
    else{
        p.desapilar();
        return quitar( p, num-1 );
    }
}

bool existeMismoIdentificador( Pila p, Cliente c ){
    bool estado = false;
    while( !p.esVacia() && !estado ){
        if( strcmp( c.getIdentificador(), p.cima().getIdentificador() ) == 0 ){ return true; }
        p.desapilar();
    }
    return estado;
}

