#include <iostream>
using namespace std;

class Evento{
    static int autonumerico;
    int codigo;
    string nombre;
    string responsable;
    bool disponible;
    double precioBase;
    static double IVA;  // lleva const en el cpp
    char tipoEvento;    // {N, I}

    public:
    Evento();
    Evento( string nomb, string resp, bool disp, double precio, char tipo);    // tipo = {N o I}
    Evento(const Evento &);
    ~Evento();
    static int getAutonumerico(); 
    void setResponsable(string responsable);
    void listarInformacion() const;
    float calcularCosto() const;
};

