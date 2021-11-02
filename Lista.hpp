#ifndef LISTA_HPP
#define LISTA_HPP
#include "Cliente.hpp"
#include "NodoLista.hpp"

class Lista
{
    private:
        NodoLista * primero;
        //NodoLista * ultimo;
        int longitud;
        bool copia = false;
        
    public:
        Lista();
        Lista(const Lista &c); //creado para evitar la implementación de memoria dinámica lo máximo posible (junto con ajustes en las void Lista::desencolar() y en Lista::~Lista() )
        ~Lista();
        int get_longitud();
        bool es_vacia();
        Cliente primerElem(); //creado para una mayor intuitividad y legibilidad del codigo
        void insertarIzquierda(Cliente elemento);
        void insertar(Cliente elemento);
        //void insertarDerecha(Cliente elemento);
        void elim_inicial();
        void mostrarLista(); //No es correcto, se implementa para ver que está creada correctamente

};

//EXTRAS
void mostrar( Lista l );
Lista resto( Lista l );

#endif // LISTA_HPP
