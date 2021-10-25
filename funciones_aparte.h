#ifndef FUNCIONES_APARTE_H
#define FUNCIONES_APARTE_H

bool generarBoolAleatorio();

int generarIntAleatorio( int minimo_incluido, int maximo_incluido );
int caracterANumeroPositivo( char *numerochar, int numerocaracts );
int get_int( char *texto );

char *charAleatorioNDigitos( int num_digits, int long_cadena );
char *generarDniAleatorio();
char *intAChar( int numero, int num_digitos, int long_cadena );
char *generarDniDeNumero( int numero );
char *generarCodregDeNumero( int numero );
char *generarCodregAleatorio();

#endif