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

char *intAChar( int numero, int num_digitos, int long_cadena ){
    char *devolver = new char[long_cadena+1];
    int pos = num_digitos-1;
    int digito;
    for(int i = 0; i < long_cadena; i++){ *(devolver+i) = '0'; }
    while(numero != 0) {
        digito = numero % 10;
        *(devolver+pos) = ( (char) digito ) + '0';
        numero = numero / 10;
        pos--;
    }
    *(devolver+long_cadena) = '\0';
    return devolver;
}

char *generarDniDeNumero( int numero ){
    char *dni = intAChar( numero, 8, 10 );
    char codigos[24] = "TRWAGMYFPDXNBJZSQVHLCKE";
    char caracter_dni = codigos[numero % 23];
    *(dni+8) = caracter_dni;
    *(dni+9) = '\n';
    char *puntero = dni;
    return puntero;
}

char *generarCodregDeNumero( int numero ){
    char *numero_codreg = intAChar( numero, 3, 3 );
    char *codreg = new char[10];
    char char_codreg[7] = "CODREG";
    *(codreg+8) = '0';
    *(codreg+7) = '0';
    *(codreg+6) = '0';
    for( int i = 0; i < 6; i++ ){ *(codreg+i) = *(char_codreg+i); }
    for( int i = 0; i < 3; i++ ){ *(codreg+6+i) = *(numero_codreg+i); }
    *(codreg+9) = '\0';
    char *puntero = codreg;
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

int get_int( char texto[] ){
    int cont = 0;
    while(*(texto+cont) != '\0'){ cout << *(texto+cont); cont++; }
    int value ;
    if( std::cin >> value ) return value ; // success: an int was read

    // badly formed input: failed to read an int
    std::cin.clear() ; // clear the failed state of the stream
    std::cin.ignore( 1000000, '\n' ) ; // extract and discard the bad input
    return get_int( texto ) ; // try again
}