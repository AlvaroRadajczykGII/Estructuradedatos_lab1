#ifndef FUNCIONES_APARTE_HclTabCtrl
#define FUNCIONES_APARTE_H

bool generarBoolAleatorio();

int generarIntAleatorio( int minimo_incluido, int maximo_incluido );
int caracterANumeroPositivo( char *numerochar, int numerocaracts );
int get_int( char *texto );

char *charAleatorioNDigitos( int num_digitos, int long_cadena, bool primmaycero, bool derecha, int desp );
char *generarDniAleatorio();
char *generarCodregAleatorio();
char *intAChar( int numero, int num_digitos, bool derecha, int desp );
char *generarDniDeNumero( int numero );
char *generarCodregDeNumero( int numero );

#endif