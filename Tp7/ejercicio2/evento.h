#include <iostream>
#include "persona.h"

using namespace std;

class Evento{
    static int autonumerico;
    int codigo;
    string nombre;
    Persona *responsable;
    bool disponible;
    double precioBase;
    static const double IVA;  // lleva const en el cpp
    char tipoEvento;    // {N, I}

    public:
    Evento();
    Evento(string, Persona*, bool, double, char);    // tipo = {N o I}
    Evento(const Evento &);
    ~Evento();
    static int getAutonumerico(); 
    void setResponsable(Persona*);
    void listarInformacion() /* const */;
    float calcularCosto() const;
    void escribirInfoContacto();
};

