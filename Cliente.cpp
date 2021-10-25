#include "Cliente.hpp"
#include <iostream>
#include <time.h>       /* time */
#include <math.h>
#include <string.h>
#include "funciones_aparte.h"
using namespace std;

Cliente::Cliente()
{
    esta_registrado = generarBoolAleatorio();
    minuto_llegada = generarIntAleatorio( 0, 60 );
    if( esta_registrado ){ setIdentificador( generarCodregAleatorio() ); }
    else{ setIdentificador( generarDniAleatorio() ); }
}

Cliente::Cliente( bool estado )
{
    esta_registrado = estado;
    if( esta_registrado ){ setIdentificador( generarCodregAleatorio() ); }
    else{ setIdentificador( generarDniAleatorio() ); }
    minuto_llegada = generarIntAleatorio( 0, 60 );
    
}

Cliente::Cliente( bool estado, int minuto, char *identificador )
{
    esta_registrado = estado;
    setIdentificador( identificador );
    minuto_llegada = minuto;
    
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

void Cliente::obtenerValoresIntroducidosManualmente( bool *estado, int *minuto, char *identificador ){

    char texto_minuto[64] ="Por favor, introducir un entero entre 0 y 59 (minuto_llegada): ";
    char texto_registrado[64] ="Por favor, introducir un entero entre 0 y 1 (esta_registrado): ";
    int f_minuto = get_int( texto_minuto );
    while( f_minuto < 0 || f_minuto > 59 ){ f_minuto = get_int( texto_minuto ); }
    int f_num_estado = get_int( texto_registrado );
    while( f_num_estado < 0 || f_num_estado > 1 ){ f_num_estado = get_int( texto_registrado ); }
    bool f_estado = (bool) ( f_num_estado );

    *estado = f_estado;
    *minuto = f_minuto;
    strcpy (identificador, obtenerIdentificadorManualmente( f_estado ) );
}

char *Cliente::obtenerIdentificadorManualmente( bool registrado ){
    char *puntero = new char[10];
    if( registrado ){
        char texto[57] ="Por favor, introducir un entero entre 0 y 999 (codreg): ";
        int num_codreg = get_int( texto );
        while( num_codreg < 0 || num_codreg > 999 ){ num_codreg = get_int( texto ); }
        strcpy(puntero, generarCodregDeNumero( num_codreg ) );
    } else {
        char texto[59] ="Por favor, introducir un entero entre 0 y 99999999 (dni): ";
        int num_dni = get_int( texto );
        while( num_dni < 0 || num_dni > 99999999 ){ num_dni = get_int( texto ); }
        strcpy(puntero, generarDniDeNumero( num_dni ) );
    }
    return puntero;
}
