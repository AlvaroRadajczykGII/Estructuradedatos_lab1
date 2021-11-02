#include "NodoLista.hpp"
#include <iostream>

NodoLista::NodoLista()
{
    //elemento=NULL;
    siguiente=NULL;
    //constructor por defecto
}

NodoLista::NodoLista(Cliente c, NodoLista* sig )
{
    elemento = c;
    siguiente = sig;
}

NodoLista::~NodoLista()
{
    //dtor
}



