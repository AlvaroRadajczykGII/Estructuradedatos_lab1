#include "NodoCola.hpp"

NodoCola::NodoCola()
{
    //elemento=NULL;
    siguiente=NULL;
    //constructor por defecto
}
NodoCola::NodoCola(Cliente c, NodoCola*sig )
{
    elemento = c;
    siguiente = sig;
}
NodoCola::~NodoCola()
{
//dtor
}

