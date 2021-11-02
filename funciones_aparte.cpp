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

int contarDigitosEntero( int entero ){
    int cont = 0;
    while(entero != 0) { entero = entero / 10; cont++; }
    return cont;
}

char *charAleatorioNDigitos( int num_digitos, int long_cadena, bool primmaycero, bool derecha, int desp ){
    if( num_digitos+desp <= long_cadena ){
        char *devolver = new char[long_cadena+1];
        for(int i = 0; i <= long_cadena; i++){ *(devolver+i) = '0'; } *(devolver+long_cadena) = '\0';
        int pos = desp;
        int num;
        if( derecha ){ pos = long_cadena-num_digitos; }
        for( int i = pos; i < long_cadena; i++){
            if( primmaycero ){ num = rand() % 9 + 1; primmaycero = false; } else { num = rand() % 10; }
            *(devolver+i) = ( (char) num ) + '0';
        }
        return devolver;
    } else { cout << "No se puede representar ese numero"; }
}

char *generarDniAleatorio(){
    char *dni = charAleatorioNDigitos( 8, 9, true, false, 0 );
    int numero_dni = caracterANumeroPositivo( dni , 8);
    char codigos[24] = "TRWAGMYFPDXNBJZSQVHLCKE";
    char caracter_dni = codigos[numero_dni % 23];
    *(dni+8) = caracter_dni;
    return dni;
}

char *generarCodregAleatorio(){
    char *codreg = charAleatorioNDigitos( 3, 9, false, true, 0 );
    char char_codreg[7] = "CODREG";
    for( int i = 0; i < 6; i++ ){ *(codreg+i) = *(char_codreg+i); }
    return codreg;
}

char *intAChar( int numero, int num_digitos, bool derecha, int desp ){
    int contados = contarDigitosEntero( numero );
        if( num_digitos >= contados+desp ){
        char *devolver = new char[num_digitos+1];
        for(int i = 0; i <= num_digitos; i++){ *(devolver+i) = '0'; } *(devolver+num_digitos) = '\0';
        int pos = contados-1+desp;
        int digito;
        if( derecha ){ pos = num_digitos-1-desp; }
        while(numero != 0) {
            digito = numero % 10;
            *(devolver+pos) = ( (char) digito ) + '0';
            numero = numero / 10;
            pos--;
        }
        return devolver;
    } else { cout << "No se puede representar ese numero"; }
}

char *generarDniDeNumero( int numero ){
    char *dni = intAChar( numero, 9, false, 8-contarDigitosEntero(numero) );
    char codigos[24] = "TRWAGMYFPDXNBJZSQVHLCKE";
    char caracter_dni = codigos[numero % 23];
    *(dni+8) = caracter_dni;
    return dni;
}

char *generarCodregDeNumero( int numero ){
    char *codreg = intAChar( numero, 9, true, 0 );
    char char_codreg[7] = "CODREG";
    for( int i = 0; i < 6; i++ ){ *(codreg+i) = *(char_codreg+i); }
    return codreg;
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