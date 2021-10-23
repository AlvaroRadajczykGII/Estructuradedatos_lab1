#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include "Cliente.hpp"
#include <iostream>

class NodoPila
{
    
    private:
        Cliente valor;
        NodoPila *siguiente;
        friend class Pila;
        friend class Cliente;
    
    public:
        NodoPila();
        NodoPila(Cliente c, NodoPila *sig = NULL);
        ~NodoPila();

};
typedef NodoPila *pnodo;

#endif // NODOPILA_HPP
