#include <stdio.h>
#include <iostream>
#include "evento.h"
#include "persona.h"
#include "Fecha.h"

using namespace std;

int Evento :: autonumerico = 0;
const double Evento :: IVA = 0.21;
//const double Evento :: IVA = 0.21;


Evento :: Evento(){     // En constructor por defecto hace falta inicializar??
    this->codigo = 0;
    this->nombre = "--";
    //this->responsable = Persona();   // Ya no es necesario?
    //this->disponible = false;
    this->precioBase = 0;
    this->tipoEvento = 's';
    cout<<"- - - Objeto Inicializado - - -"<<endl;
}
Evento :: Evento(string nomb, Persona *resp, Fecha disp, double precio, char tipo){
    Evento::autonumerico ++;
    this->codigo = autonumerico;
    this->nombre = nomb;
    this->responsable = resp;
    this->disponible = disp;
    this->precioBase = precio;
    this->tipoEvento = tipo;
    cout<<"- - - Objeto Creado - - -"<<endl;
}

Evento :: Evento(const Evento &E){
    Evento::autonumerico ++;
    this->codigo = autonumerico;
    this->nombre = E.nombre;
    this->responsable = E.responsable;
    this->disponible = E.disponible;
    this->precioBase = E.precioBase;
    this->tipoEvento = E.tipoEvento;
    cout<<"- - - Objeto Copiado - - -"<<endl;
}

Evento :: ~Evento(){
    codigo = 0;
    nombre = "--";
    responsable->~Persona();
    //disponible = false;
    precioBase = 0;
    tipoEvento = 's';
    cout<<"- - - Objeto Destruido - - -"<<endl;
}

int Evento :: getAutonumerico(){
    return Evento::autonumerico;
}

void Evento::setResponsable(Persona *responsable){
    this->responsable = responsable;
    cout<<"Nuevo Responsable asignado al Evento "<<Evento::codigo<<endl;
}

double Evento::calcularCosto() const{
    cout<<"Calculando Costo del Evento "<<Evento::codigo<<endl;
    double precio;
    if (estaDisponible()){
        if(tipoEvento == 'I') precio = precioBase*1.30;
        else precio = precioBase;
    }
    cout<<precioBase<<endl;
    cout<<precio<<endl;
    double costo = precio*(1+IVA);
    return costo;
}

void Evento ::escribirInfoContacto() const{
    cout<<"Informacion del Responsable"<<endl;
    cout<<"Nombre : "<<this->responsable->getNombre()<<endl;
    cout<<"Contacto : "<<this->responsable->informacionDeContacto()<<endl;
}

void Evento::listarInformacion() const{ 
    cout<<"- - - Datos del Evento - - -"<<endl;
    cout<<"Codigo = "<<codigo<<endl;
    cout<<"Nombre = "<<nombre<<endl;
    cout<<"Informacion del Responsable"<<endl;
    escribirInfoContacto();
    estaDisponible()? cout<<"Disponible"<<endl : cout<<"No Disponible"<<endl;
    cout<<"Precio Base = "<<precioBase<<endl;
    cout<<"Tipo = "<<tipoEvento<<endl;
    cout<<""<<endl;
}

bool Evento::estaDisponible() const{
    Fecha actual;
    actual.setFechaActual();
    return actual < this->disponible;
    
    //return this->disponible<actual;
}

double Evento::getPrecio(){
    return this->precioBase;
}