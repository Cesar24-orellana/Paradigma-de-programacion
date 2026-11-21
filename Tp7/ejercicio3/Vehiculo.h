#ifndef VEHICULO_H_
#define VEHICULO_H_

#include<iostream>

using namespace std;

class Vehiculo
{
private:
    string patente;
    int anioModelo;
    double pesoMax;
    const double INCREMENTO = 0.25;
    double tarifa;
    bool pesoExcedido(double);
    double calcularIncremento(double);
public:
    Vehiculo();
    Vehiculo(string, int,double,double);
    ~Vehiculo();
    void escribirInfo();
    double getTarifa();
    double calcularPrecioViaje(double);
};

Vehiculo::~Vehiculo()
{
}


#endif