#include "Cola.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <string.h>
using namespace std;

Cola::Cola()
{
    primero = NULL; ultimo = NULL;
    longitud = 0;
}

Cola::Cola( const Cola &c )
{
    primero = c.primero;
    ultimo = c.ultimo;
    longitud = c.longitud;
    copia = true;
}

Cola::~Cola(){
    if(!copia){
        while(!es_vacia()){ desencolar(); } 
    } else {
        primero = NULL; ultimo = NULL;
    }
}

bool Cola::es_vacia()
{ 
    return ((primero == NULL) && (ultimo == NULL));
}

int Cola::get_longitud()
{ 
    return longitud;
}

Cliente Cola::inicio()
{ 
    if(!es_vacia())
    { 
        return primero->elemento;
    }
}

Cliente Cola::fin()
{ 
    if(!es_vacia())
    { 
        return ultimo->elemento;
    }
}

void Cola::encolar(Cliente elemento)
{ 
    NodoCola *nuevo_nodo = new NodoCola(elemento);
    if(es_vacia())
    { 
        primero = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    else
    { 
        ultimo->siguiente = nuevo_nodo;
        ultimo = nuevo_nodo;
    }
    longitud++;
}

Cliente Cola::desencolar()
{ 
    if(!es_vacia())
    { 
        Cliente elemento = primero->elemento;
        NodoCola *aux = primero;
        
        if((primero == ultimo) && (primero->siguiente == NULL))
        { 
            primero = NULL;
            ultimo = NULL;
            aux->siguiente = NULL;
            if(!copia){ delete(aux); }
        }
        else
        { 
            primero = primero->siguiente;
            if(!copia){
                aux->siguiente = NULL;
                delete(aux); 
            }
        }
        longitud--;
        return elemento;
    }
}

Cliente Cola::primerElem(){ //creado para una mayor intuitividad y legibilidad del codigo
    return primero->elemento;
}

void Cola::mostrarCola() //No es correcto, la cola solo puede verse mostrando el primero y desencolando, se implementa para comprobar código facilmente.
{
    NodoCola *aux = primero;
    
    if (es_vacia()) {cout<<"\n\nCola Vacia"<<endl;}
    else {
        cout<<"Datos de la Cola de " << longitud << " elementos (Arriba el inicio, y abajo el final): \n";
        while (aux){
            cout << "Elemento: ";
            aux->elemento.showString();
            cout << "\n";
            aux = aux->siguiente;
        }
    }
}

//EXTRAS

void mostrar( Cola c )
{
    if (c.es_vacia()) {cout<<"\n\nCola Vacia"<<endl;}
    else {
        cout<<"Datos de la Cola de " << c.get_longitud() << " elementos (Arriba el inicio, y abajo el final): \n";
        while (!c.es_vacia()){
            cout << "Elemento: ";
            c.desencolar().showString();
            cout << "\n";
        }
    }
}

bool existeMismoIdentificador( Cola c, Cliente cl ){
    bool estado = false;
    while (!c.es_vacia() && !estado){
        if( strcmp( cl.getIdentificador(), c.primerElem().getIdentificador() ) == 0 ){ return true; }
        c.desencolar();
    }
    return estado;
}


