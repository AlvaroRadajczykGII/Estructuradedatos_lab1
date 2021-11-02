#ifndef PILA_HPP
#define PILA_HPP
#include "NodoPila.hpp"
#include "Cliente.hpp"
class Pila
{
    
    private:
        pnodo ncima;
        bool copia = false;
        
    public:
        Pila();
        ~Pila();
        Pila(const Pila &p); //creado para evitar la implementación de memoria dinámica lo máximo posible (junto con ajustes en las void Pila::desapilar() y en Pila::~Pila() )
        bool esVacia();
        Cliente cima(); //creado para una mayor intuitividad y legibilidad del codigo
        void apilar(Cliente c);
        void desapilar();
        void mostrarCima();
        //CREADOS APARTE PARA UNA MAYOR LIMPIEZA DE CÓDIGO
        void montar( Pila encima );
        void apilarPorTipo(Cliente c);

};

//EJERCICIOS
void mostrar( Pila p );
int contar( Pila p );
void consultarFondo( Pila p );
Pila inversa_aux( Pila p1, Pila p2 );
Pila inversa( Pila p );
Pila montar_aux( Pila debajo, Pila encima );
Pila montar( Pila debajo, Pila encima );
Pila quitar( Pila p, int num );
void invertir( Pila& p );
Pila eliminarFondoPila( Pila p );
bool ordenDecreciente( Pila p );
bool existeMismoIdentificador( Pila p, Cliente c );

#endif // PILA_HPP
