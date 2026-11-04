#ifndef EVENTO_H_
#define EVENTO_H_

#include <iostream>
#include "persona.h"
#include "Fecha.h"

using namespace std;

class Evento{
    static int autonumerico;
    int codigo;
    string nombre;
    Persona *responsable;
    Fecha disponible;
    static const double IVA;  // lleva const en el cpp
    char tipoEvento;    // {N, I}
    
    protected:
    double precioBase;

    public:
    Evento();
    Evento(string, Persona*, Fecha, double, char);    // tipo = {N o I}
    Evento(const Evento &);
    ~Evento();
    static int getAutonumerico(); 
    void setResponsable(Persona*);
    void listarInformacion() const;
    double calcularCosto() const;
    void escribirInfoContacto() const;
    bool estaDisponible() const;
};

#endif