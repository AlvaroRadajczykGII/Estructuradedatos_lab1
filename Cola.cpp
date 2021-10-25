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

Cola::~Cola() { }

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
            delete(aux);
        }
        else
        { 
            primero = primero->siguiente;
            aux->siguiente = NULL;
            delete(aux);
        }
        longitud--;
        return elemento;
    }
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

int Cola::get_longitud()
{ 
    return longitud;
}

bool Cola::es_vacia()
{ 
    return ((primero == NULL) && (ultimo == NULL));
}

//No es correcto, la cola solo puede verse mostrando el primero y desencolando, se implementa para comprobar código facilmente.
void Cola::mostrarCola()
{
    NodoCola *aux = primero;
    
    if (es_vacia()) {cout<<"\n\nCola Vacia"<<endl;}
    else {
        cout<<"Datos de la Cola (Arriba el inicio, y abajo el final): \n";
        while (aux){
            cout << "Elemento: ";
            aux->elemento.showString();
            cout << "\n";
            aux = aux->siguiente;
        }
    }
}

bool Cola::existeMismoIdentificador(Cliente c){
    bool estado = false;
    NodoCola *aux = primero;
    char *puntero2 = c.identificador_cliente;
    char *puntero1;
    if (es_vacia()) { return false; }
    else {
        while (aux && !estado){
            puntero1 = aux->elemento.identificador_cliente;
            if( strcmp( puntero1, puntero2 ) == 0 ){ estado = true; }
            aux = aux->siguiente;
        }
    }
    return estado;
}


