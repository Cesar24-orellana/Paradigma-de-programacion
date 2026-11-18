#include<iostream>
#include "Sistema.h"

using namespace std;

void Sistema::registrarEncomienda(string origen,string destino,double peso,Vehiculo vehiculo){
    Fecha fecha;
    fecha.setFechaActual();
    Encomienda *nuevaEncomienda = new Encomienda(origen, destino, fecha, peso, vehiculo);
    this->encomiendas.push_back(nuevaEncomienda);
    // encomiendas.registrar(nuevaEncomienda);
    // this->cant++;
}

void Sistema::cargarFechaEmtrega(int codigo, Fecha fecha){
    for (Encomienda* e : encomiendas)
    {
        if(e->getCodigo() = codigo) 
        {
            e->setFechaEntrega(fecha);
            break;
        } 
    }
}

void Sistema::listarEntregas(Fecha fecha){
    double recaudacion = 0;
    for(Encomienda *e : encomiendas){
        if(e->getFechaEntrega() == fecha){
            e->escribirInfo();
            recaudacion += e->calcularPrecioEncomienda();
        }
    }
    cout<<"recaudacion: "<<recaudacion<<endl;
}