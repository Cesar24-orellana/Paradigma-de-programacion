#ifndef EVENTONACIONAL_H_
#define EVENTONACIONAL_H_

#include<iostream>

#include "evento.h"

using namespace std;

class EventoNacional : protected Evento
{
public:
    EventoNacional(string, Persona*, Fecha, double, char);
    double getPrecio();
    void listarInformacion(){
        this->Evento::listarInformacion();
    }
};


#endif