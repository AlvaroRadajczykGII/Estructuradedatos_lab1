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
        bool copia = false;
        
    public:
        Cola();
        Cola(const Cola &c); //creado para evitar la implementación de memoria dinámica lo máximo posible (junto con ajustes en las void Cola::desencolar() y en Cola::~Cola() )
        ~Cola();
        bool es_vacia();
        int get_longitud();
        Cliente inicio();
        Cliente fin();
        void encolar(Cliente elemento);
        Cliente desencolar();
        Cliente primerElem(); //creado para una mayor intuitividad y legibilidad del codigo
        void mostrarCola(); //No es correcto, se implementa para ver que está creada correctamente
        
};

//EXTRAS
void mostrar( Cola c );
bool existeMismoIdentificador( Cola c, Cliente cl );

#endif // COLA_HPP
