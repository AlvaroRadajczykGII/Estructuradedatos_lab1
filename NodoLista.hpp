#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP
#include "Cliente.hpp"
#include <iostream>

class NodoLista
{
public:
    private:
        NodoLista *siguiente;
        Cliente elemento;
        friend class Lista;
        friend class Cliente;
    
    public:
        NodoLista();
        NodoLista(Cliente c, NodoLista *sig = NULL);
        ~NodoLista();

};

#endif // NODOLISTA_HPP
