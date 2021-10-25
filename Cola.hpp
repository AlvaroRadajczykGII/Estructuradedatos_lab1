#ifndef COLA_HPP
#define COLA_HPP
#include "NodoCola.hpp"
#include "Cliente.hpp"

class Cola
{
    private:
        NodoCola * primero;
        NodoCola * ultimo;
        int longitud;
        
    public:
        Cola(); ~Cola();
        void encolar(Cliente elemento);
        Cliente inicio();
        Cliente fin();
        Cliente desencolar();
        int get_longitud();
        bool es_vacia();
        bool existeMismoIdentificador( Cliente c );
        void mostrarCola(); //No es correcto, se implementa para ver que está creada correctamente
};


#endif // COLA_HPP
