#ifndef CLIENTE_HPP
#define CLIENTE_HPP


class Cliente
{
    private:
        bool esta_registrado;
        int minuto_llegada;
        char identificador_cliente[10];
        
    public:
        Cliente();
        ~Cliente();
        void setEstaRegistrado( bool estado );
        void setMinutoLlegada( int minuto );
        void setIdentificador( char *texto );
        void mostrarIdentificador();
        void showString();

};

#endif // CLIENTE_HPP
