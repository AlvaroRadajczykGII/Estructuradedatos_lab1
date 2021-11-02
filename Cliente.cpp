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
    minuto_llegada = generarIntAleatorio( 0, 59 );
    if( esta_registrado ){ 
        char *puntero = generarCodregAleatorio();
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(puntero+i); }
        identificador_cliente[9] = '\0';
    }
    else{ 
        char *puntero = generarDniAleatorio();
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(puntero+i); }
        identificador_cliente[9] = '\0';
    }
}

Cliente::Cliente( bool estado )
{
    esta_registrado = estado;
    if( esta_registrado ){ 
        char *puntero = generarCodregAleatorio();
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(puntero+i); }
        identificador_cliente[9] = '\0';
    }
    else{ 
        char *puntero = generarDniAleatorio();
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(puntero+i); }
        identificador_cliente[9] = '\0';
    }
    minuto_llegada = generarIntAleatorio( 0, 60 );
    
}

Cliente::Cliente( char diferencia )
{
    esta_registrado = introducirEstado();
    minuto_llegada = introducirMinuto();
    obtenerIdentificadorManualmente( esta_registrado );
}

Cliente::~Cliente()
{
}

void Cliente::mostrarIdentificador(){
    cout << identificador_cliente << "\n";
}

bool Cliente::getEstado(){
    return esta_registrado;
}

char* Cliente::getIdentificador(){
    return identificador_cliente;
}

void Cliente::showString(){
    cout << "Cliente { esta_registrado = " << esta_registrado << ", minuto_llegada = " << minuto_llegada << ", identificador_cliente = " << identificador_cliente << " }";
}

bool Cliente::introducirEstado(){
    char texto_registrado[64] ="Por favor, introducir un entero entre 0 y 1 (esta_registrado): ";
    int f_num_estado = get_int( texto_registrado );
    while( f_num_estado < 0 || f_num_estado > 1 ){ f_num_estado = get_int( texto_registrado ); }
    bool f_estado = (bool) ( f_num_estado );
    return f_estado;
}

int Cliente::introducirMinuto(){
    char texto_minuto[64] ="Por favor, introducir un entero entre 0 y 59 (minuto_llegada): ";
    int f_minuto = get_int( texto_minuto );
    while( f_minuto < 0 || f_minuto > 59 ){ f_minuto = get_int( texto_minuto ); }
    return f_minuto;
}

void Cliente::obtenerIdentificadorManualmente( bool registrado ){
    if( registrado ){
        char texto[57] ="Por favor, introducir un entero entre 0 y 999 (codreg): ";
        int num_codreg = get_int( texto );
        while( num_codreg < 0 || num_codreg > 999 ){ num_codreg = get_int( texto ); }
        char *punt = generarCodregDeNumero( num_codreg );
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(punt+i); }
        identificador_cliente[9] = '\0';
    } else {
        char texto[59] ="Por favor, introducir un entero entre 0 y 99999999 (dni): ";
        int num_dni = get_int( texto );
        while( num_dni < 0 || num_dni > 99999999 ){ num_dni = get_int( texto ); }
        char *punt = generarDniDeNumero( num_dni );
        for( int i = 0; i < 9; i++ ){ identificador_cliente[i] = *(punt+i); }
        identificador_cliente[9] = '\0';
    }
}

void Cliente::introducirManualmente(){
    esta_registrado = introducirEstado();
    minuto_llegada = introducirMinuto();
}