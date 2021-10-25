#ifndef CLIENTE_HPP
#define CLIENTE_HPP


class Cliente
{
    private:
        bool esta_registrado;
        int minuto_llegada;
        char identificador_cliente[10];
        friend class Pila;
        friend class Cola;
        
    public:
        Cliente();
        Cliente( bool estado );
        Cliente( bool estado, int minuto, char *identificador );
        ~Cliente();
        void setEstaRegistrado( bool estado );
        void setMinutoLlegada( int minuto );
        void setIdentificador( char *texto );
        void mostrarIdentificador();
        void showString();
        char *obtenerIdentificadorManualmente( bool registrado );
        void obtenerValoresIntroducidosManualmente( bool *estado, int *minuto, char *identificador );

};

#endif // CLIENTE_HPP
