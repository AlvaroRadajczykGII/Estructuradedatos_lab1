#include "Cliente.hpp"
#include <iostream>
#include <time.h>       /* time */
#include <math.h>
#include "funciones_aparte.h"
using namespace std;

Cliente::Cliente()
{
    esta_registrado = generarBoolAleatorio();
    minuto_llegada = generarIntAleatorio( 0, 60 );
    if( esta_registrado ){ setIdentificador( generarCodregAleatorio() ); }
    else{ setIdentificador( generarDniAleatorio() ); }
}

Cliente::~Cliente()
{
}

void Cliente::setIdentificador( char *texto ){
    
    char *puntero_ident = identificador_cliente;
    for( int i = 0; i < 9; i++ ){
        *(puntero_ident + i) = *(texto + i);
    }
    *(puntero_ident + 9) = '\0';
}

void Cliente::mostrarIdentificador(){
    cout << identificador_cliente << "\n";
}

void Cliente::showString(){
    cout << "Cliente { esta_registrado = " << esta_registrado << ", minuto_llegada = " << minuto_llegada << ", identificador_cliente = " << identificador_cliente << " }";
}
