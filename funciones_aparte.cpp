#include <iostream>
#include <time.h>       /* time */
#include <math.h>
using namespace std;

bool generarBoolAleatorio(){ 
    bool devolver = rand() % 2;
    return devolver;
}

int generarIntAleatorio( int minimo_incluido, int maximo_incluido ){ 
    int devolver = ( rand() % (maximo_incluido +1 -minimo_incluido) ) + minimo_incluido;
    return devolver;
}

int caracterANumeroPositivo( char *numerochar, int numerocaracts ){
    int numero = 0;
    for(int i = 0; i < numerocaracts; i++){
        int digito = (int) ( *(numerochar + i ) - '0' );
        numero += digito * pow( 10, numerocaracts-i-1 );
    }
    return numero;
}

char *charAleatorioNDigitos( int num_digits, int long_cadena ){
    char *devolver = new char[long_cadena+1];
    for( int i = 0; i < num_digits; i++){
        int num = 0;
        num = rand() % 10;
        *(devolver+i) = ( (char) num ) + '0';
    }
    *(devolver+long_cadena) = '\0';
    return devolver;
}

char *generarDniAleatorio(){
    char *dni = charAleatorioNDigitos( 8, 10 );
    int numero_dni = caracterANumeroPositivo( dni , 8);
    char codigos[24] = "TRWAGMYFPDXNBJZSQVHLCKE";
    char caracter_dni = codigos[numero_dni % 23];
    *(dni+8) = caracter_dni;
    *(dni+9) = '\n';
    char *puntero = dni;
    return puntero;
}

char *generarCodregAleatorio(){
    char *numero_codreg = charAleatorioNDigitos( 3, 3 );
    char *codreg = new char[10];
    char char_codreg[7] = "CODREG";
    for( int i = 0; i < 6; i++ ){ *(codreg+i) = *(char_codreg+i); }
    for( int i = 0; i < 3; i++ ){ *(codreg+6+i) = *(numero_codreg+i); }
    *(codreg+9) = '\0';
    char *puntero = codreg;
    return puntero;
}