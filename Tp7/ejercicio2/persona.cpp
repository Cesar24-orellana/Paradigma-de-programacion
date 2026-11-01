#include<iostream>
#include "persona.h"

using namespace std;

Persona::Persona()
{
    this->nombre = "";
    this->telefono = 99999999;
}

Persona::Persona(string nomb, double tel)
{
    this->nombre = nomb;
    this->telefono = tel;
}

Persona :: Persona(Persona &P){
    this->nombre = P.getNombre();
    this->telefono = P.informacionDeContacto();
}

Persona::~Persona()
{
}

string Persona ::getNombre(){
    return this->nombre;
}

double Persona ::informacionDeContacto(){
    return this->telefono;
}