#ifndef SISTEMA_H_
#define SISTEMA_H_

#include "Encomienda.h"

using namespace std;

class Sistema
{
    Encomienda *encomiendas;
    int cant;           // AUX MOMENTARIA HASTA ENCONTRAR OTRO METODO
public:
    Sistema(int);
    ~Sistema();
    void registrarEncomienda(string,string,double,Vehiculo);
    void cargarFechaEmtrega(int,Fecha);
    void listarEntregas(Fecha);
};

Sistema::Sistema(int cantidad = 0)
{
    this->cant = cantidad;
}

Sistema::~Sistema()
{
}


#endif