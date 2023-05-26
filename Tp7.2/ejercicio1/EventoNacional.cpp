#include<iostream>

#include "EventoNacional.h"

using namespace std;

double EventoNacional ::getPrecio(){
    return this->Evento::getPrecio();
}


EventoNacional::EventoNacional(string nomb, Persona *resp, Fecha disp, double precio, char tipo) : Evento(nomb,resp,disp,precio,tipo)
{}

