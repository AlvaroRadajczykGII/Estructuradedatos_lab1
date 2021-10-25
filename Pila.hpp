#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
#include "Cliente.hpp"
class Pila
{
    
    private:
        pnodo cima;
        pnodo fondo_registrado;    
    public:
        Pila();
        ~Pila();
        bool esVacia();
        bool existeMismoIdentificador(Cliente c);
        bool existeMismoIdentificador(char *texto);
        void apilar(Cliente c);
        void apilarLaboratorio(Cliente c);
        void desapilar();
        void desapilarLaboratorio();
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
