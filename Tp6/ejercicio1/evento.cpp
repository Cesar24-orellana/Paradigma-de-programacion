#include <stdio.h>
#include <iostream>
#include "evento.h"

using namespace std;

int Evento :: autonumerico = 0;
const double Evento :: IVA = 0.21;


Evento :: Evento(){
    codigo = 0;
    nombre = "--";
    responsable = "--";
    disponible = false;
    precioBase = 0;
    tipoEvento = 's';    
}
Evento :: Evento( string nomb, string resp, bool disp, double precio, char tipo){
    autonumerico ++;
    codigo = autonumerico;
    nombre = nomb;
    responsable = resp;
    disponible = disp;
    precioBase = precio;
    tipoEvento = tipo;
}

Evento :: Evento(const Evento *E){
    autonumerico ++;
    codigo = autonumerico;
    nombre = E.nombre;
    responsable = E.responsable;
    disponible = E.disponible;
    precioBase = E.precioBase;
    tipoEvento = E.tipoEvento;
}

Evento :: ~Evento(){
    codigo = 0;
    nombre = "--";
    responsable = "--";
    disponible = false;
    precioBase = 0;
    tipoEvento = 's';
}