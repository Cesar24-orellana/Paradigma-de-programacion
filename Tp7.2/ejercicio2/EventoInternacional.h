#ifndef EVENTOINTERNACIONAL_H_
#define EVENTOINTERNACIONAL_H_

#include<iostream>

#include "evento.h"

using namespace std;

class EventoInternacional : protected Evento
{
    static const float INCREMENTO; //= 0.30;
    string paisDeOrigen;

    public:
    EventoInternacional();
    EventoInternacional(string, Persona*, Fecha, double, char, string);    // tipo = {N o I}
    void listarInformacion();
    double getPrecio();
};

#endif