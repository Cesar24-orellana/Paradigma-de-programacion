#include <stdio.h>
#include <iostream>
#include "evento.h"

using namespace std;

int Evento :: autonumerico = 0;
const double Evento :: IVA = 0.21;
//const double Evento :: IVA = 0.21;


Evento :: Evento(){
    this->codigo = 0;
    this->nombre = "--";
    this->responsable = "--";
    this->disponible = false;
    this->precioBase = 0;
    this->tipoEvento = 's';    
}
Evento :: Evento( string nomb, string resp, bool disp, double precio, char tipo){
    Evento::autonumerico ++;
    this->codigo = autonumerico;
    this->nombre = nomb;
    this->responsable = resp;
    this->disponible = disp;
    this->precioBase = precio;
    this->tipoEvento = tipo;
}

Evento :: Evento(const Evento &E){
    Evento::autonumerico ++;
    this->codigo = autonumerico;
    this->nombre = E.nombre;
    this->responsable = E.responsable;
    this->disponible = E.disponible;
    this->precioBase = E.precioBase;
    this->tipoEvento = E.tipoEvento;
}

Evento :: ~Evento(){
    codigo = 0;
    nombre = "--";
    responsable = "--";
    disponible = false;
    precioBase = 0;
    tipoEvento = 's';
}

int Evento :: getAutonumerico(){
    return Evento::autonumerico;
}

void Evento::setResponsable(string responsable){
    this->responsable = responsable;
}

