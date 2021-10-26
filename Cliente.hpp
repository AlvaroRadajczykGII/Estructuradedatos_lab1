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
        Cliente( char *copiar_identificador );
        ~Cliente();
        void setEstaRegistrado( bool estado );
        void setMinutoLlegada( int minuto );
        void mostrarIdentificador();
        void showString();
        bool getEstado();
        void obtenerIdentificadorManualmente( bool registrado );
        void copiarIdenficador( char *puntero );
        bool introducirEstado();
        int introducirMinuto();
        void introducirManualmente();

};

#endif // CLIENTE_HPP
