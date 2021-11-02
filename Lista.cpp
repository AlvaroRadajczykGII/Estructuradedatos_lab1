#include "Lista.hpp"
#include <iostream>
using namespace std;

Lista::Lista()
{
    primero = NULL; 
    //ultimo = NULL;
    longitud = 0;
}

Lista::Lista( const Lista &l ) //creado para evitar la implementación de memoria dinámica lo máximo posible (junto con ajustes en las void Lista::desencolar() y en Lista::~Lista() )
{
    primero = l.primero;
    longitud = l.longitud;
    copia = true;
}

Lista::~Lista()
{
    if(!copia){
        while(!es_vacia()){ elim_inicial(); } 
    } else {
        primero = NULL;
    }
}

int Lista::get_longitud(){
    return longitud;
}

bool Lista::es_vacia(){
    return primero == NULL;
}

Cliente Lista::primerElem(){ //creado para una mayor intuitividad y legibilidad del codigo
    return primero->elemento; 
}

void Lista::insertarIzquierda(Cliente elemento){
    NodoLista *nuevo_nodo = new NodoLista(elemento);
    if(es_vacia())
    { 
        primero = nuevo_nodo;
    }
    else
    { 
        nuevo_nodo->siguiente = primero;
        primero = nuevo_nodo;
    }
    longitud++;
}

void Lista::insertar(Cliente elemento){
    NodoLista *nuevo_nodo = new NodoLista(elemento);
    if(es_vacia())
    { 
        insertarIzquierda(elemento);
    }
    else{
        // (true, 59) [false, 3]
        bool cond1 = elemento.esta_registrado && !primero->elemento.esta_registrado;
        // (true, 20) [true, 25]
        bool cond2 = elemento.esta_registrado && primero->elemento.esta_registrado && elemento.minuto_llegada < primero->elemento.minuto_llegada;
        // (false, 20) [false, 25]
        bool cond3 = !elemento.esta_registrado && !primero->elemento.esta_registrado && elemento.minuto_llegada < primero->elemento.minuto_llegada;
        if(cond1 || cond2 || cond3){ insertarIzquierda(elemento); }
        else {
            Cliente e = primero->elemento;
            elim_inicial();
            insertar(elemento);
            insertarIzquierda(e);
        }
        
    }
}

void Lista::elim_inicial(){
    if( !es_vacia() ){
        NodoLista *p = new NodoLista();
        p = primero;
        primero = p->siguiente;
        if(!copia){
            p->siguiente = NULL;
            delete(p);
        }
        longitud--;
    }
}

void Lista::mostrarLista() //No es correcto, se implementa para ver que está creada correctamente
{
    NodoLista *aux = primero;
    if (es_vacia()) {cout<<"\n\nLista Vacia"<<endl;}
    else {
        cout<<"Datos de la Lista de " << longitud << " elementos (Arriba el inicio, y abajo el final): \n";
        while (aux){
            cout << "Elemento: ";
            aux->elemento.showString();
            cout << "\n";
            aux = aux->siguiente;
        }
    }
}

//EXTRAS
void mostrar( Lista l ){
    if( l.es_vacia() ){ cout << "\nLista vacia\n"; }
    else{
        cout<<"Datos de la Lista de " << l.get_longitud() << " elementos (Arriba el inicio, y abajo el final): \n";
        while( !l.es_vacia() ){
            cout << "Elemento: ";
            l.primerElem().showString();
            cout << "\n";
            l.elim_inicial();
        }
    }
}

Lista resto( Lista l ){
    l.elim_inicial();
    return l;
}
