#include "NodoPila.hpp"
#include "Cliente.hpp"
#include <iostream>
using namespace std;

NodoPila::NodoPila()
{
    //valor = NULL;
    siguiente = NULL;
    //ctor
}
NodoPila::NodoPila(Cliente c, NodoPila *sig)
{
    valor = c;
    siguiente = sig;
}
NodoPila::~NodoPila()
{
    //dtor
}