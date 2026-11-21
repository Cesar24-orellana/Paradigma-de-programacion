#include<iostream>
#include "Sistema.h"

using namespace std;

void Sistema::registrarEncomienda(string origen,string destino,double peso,Vehiculo vehiculo){
    Fecha fecha;
    fecha.setFechaActual();
    Encomienda* nuevaEncomienda = new Encomienda(origen, destino, fecha, peso, vehiculo);
    this->encomiendas.push_back(nuevaEncomienda);
}

void Sistema::cargarFechaEmtrega(int codigo, Fecha fecha){
    for (size_t i = 0; i < encomiendas.size(); i++)
    {
        if(encomiendas[i]->getCodigo() == codigo) 
        {
            encomiendas[i]->setFechaEntrega(fecha);
            break;
        }
    }
}

void Sistema::listarEntregas(Fecha fecha){
    double recaudacion = 0;
    for(size_t i = 0; i < encomiendas.size(); i++){
        if(encomiendas[i]->getFechaEntrega() == fecha){
            encomiendas[i]->escribirInfo();
            recaudacion += encomiendas[i]->calcularPrecioEncomienda();
        }
    }
    cout<<"recaudacion: "<<recaudacion<<endl;
}