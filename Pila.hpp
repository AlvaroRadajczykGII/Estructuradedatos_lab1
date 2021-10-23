#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
#include "Cliente.hpp"
class Pila
{
    
    private:
        pnodo cima;
    
    public:
        Pila();
        ~Pila();
        bool esVacia();
        void apilar(Cliente c);
        void desapilar();
        void mostrar();
        void mostrarToda();
        //EJERCICIOS
        int contar();
        void fondo();
        void montar( Pila pila );
        void quitar( int num_elems );
        void invertir();
        //bool esOrdenCreciente();
        //bool esOrdenDecreciente();
        void eliminarFondoPila();

};

#endif // PILA_HPP
