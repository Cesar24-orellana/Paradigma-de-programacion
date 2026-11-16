#ifndef ENCOMIENDA_H_
#define ENCOMIENDA_H_

#include<iostream>
#include "Vehiculo.h"
#include "Fecha.h"

using namespace std;

class Encomienda
{
private:
    static int autonumerico;
    int codigoEncomienda;
    string dirOrigen;
    string dirDestino;
    Fecha fechaIngreso;
    Fecha fechaEntrega;
    bool entregado;
    double pesoEncomienda;
    Vehiculo vihiculo;
public:
    Encomienda();
    Encomienda(string, string,Fecha,double,Vehiculo);
    ~Encomienda();
    void escribirInfo();
    void setFechaEntrega(Fecha);
    Fecha getFechaEntrega();
    int getCodigo();
    double calcularPrecioEncomienda();
    double getPeso();
};

Encomienda::~Encomienda()
{
}


#endif