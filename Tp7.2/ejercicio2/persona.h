#ifndef PERSONA_H_
#define PERSONA_H_

#include<iostream>

using namespace std;

class Persona
{
private:
    string nombre;
    double telefono;
public:
    Persona();
    Persona(string,double);
    Persona(Persona&);
    ~Persona();
    string getNombre();
    double informacionDeContacto();
};

#endif