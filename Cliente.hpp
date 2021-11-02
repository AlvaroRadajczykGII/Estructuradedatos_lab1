#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include "Entrada.hpp"

class Cliente
{
    private:
        bool esta_registrado;
        int minuto_llegada;
        char identificador_cliente[10];
        Entrada entrada_cl;
        friend class Pila;
        friend class Cola;
        friend class Entrada;
        friend class Lista;
        
    public:
        Cliente();
        Cliente( bool estado );
        Cliente( char diferencia );
        ~Cliente();
        void setEstaRegistrado( bool estado );
        void setMinutoLlegada( int minuto );
        void mostrarIdentificador();
        void showString();
        bool getEstado();
        char *getIdentificador();
        void obtenerIdentificadorManualmente( bool registrado );
        void copiarIdenficador( char *puntero );
        bool introducirEstado();
        int introducirMinuto();
        void introducirManualmente();

};

#endif // CLIENTE_HPP
