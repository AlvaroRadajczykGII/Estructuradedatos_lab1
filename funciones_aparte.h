#ifndef FUNCIONES_APARTE_H
#define FUNCIONES_APARTE_H

bool generarBoolAleatorio();

int generarIntAleatorio( int minimo_incluido, int maximo_incluido );
int caracterANumeroPositivo( char *numerochar, int numerocaracts );

char *charAleatorioNDigitos( int num_digits, int long_cadena );
char *generarDniAleatorio();
char *generarCodregAleatorio();

#endif