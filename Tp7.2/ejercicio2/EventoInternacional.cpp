#include<iostream>

#include "EventoInternacional.h"

using namespace std;

const double EventoInternacional :: INCREMENTO = 0.30

double EventoInternacional :: getPrecio()
{
    return this->Evento :: getPrecio()*(1+this->INCREMENTO);
    //return this->precioBase*(1+this->INCREMENTO);
}

void EventoInternacional :: Informacion()
{
    this->Evento::Informacion();
    // cout<<"Informacion del Responsable"<<endl;
    // cout<<"Nombre : "<<this->responsable->getNombre()<<endl;
    // cout<<"Contacto : "<<this->responsable->informacionDeContacto()<<endl;
    cout<<"Pais de Origen : "<<this->paisDeOrigen<<endl;
    
}

EventoInternacional:: EventoInternacional(string nomb, Persona *resp, Fecha disp, double precio, char tipo, string pais) : Evento(nomb,resp,disp,precio,tipo)
{
    this->paisDeOrigen = pais;
}    // tipo = {N o I}
