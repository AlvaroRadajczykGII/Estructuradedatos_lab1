#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP
#include "Cliente.hpp"
#include <iostream>

class NodoCola
{
    
    private:
        NodoCola *siguiente;
        Cliente elemento;
        friend class Cola;
        friend class Cliente;
    
    public:
        NodoCola();
        NodoCola(Cliente c, NodoCola *sig = NULL);
        ~NodoCola();
        
};


#endif // NODOCOLA_HPP
