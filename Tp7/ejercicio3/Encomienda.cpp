#include "Encomienda.h"

int Encomienda::autonumerico = 0;

Encomienda::Encomienda(){}
Encomienda::Encomienda(string origen, string destino,Fecha ingreso,double peso,Vehiculo rodado): dirOrigen(origen),dirDestino(destino),fechaIngreso(ingreso),pesoEncomienda(peso),vihiculo(rodado)
    {
        this->autonumerico++;
        this->codigoEncomienda = this->autonumerico;
    }

void Encomienda::escribirInfo(){
    cout<<"Datos de Encomienda "<<codigoEncomienda<<endl;
    cout<<"Origen: "<<dirOrigen<<endl;
    cout<<"Destino: "<<dirDestino<<endl;
    cout<<"Fecha de Ingreso: "<<fechaIngreso.getDia()<<"-"<<fechaIngreso.getMes()<<"-"<<fechaIngreso.getAnio()<<endl;
    cout<<"Fecha de Entrega: "<<fechaEntrega.getDia()<<"-"<<fechaEntrega.getMes()<<"-"<<fechaEntrega.getAnio()<<endl;
    this->entregado? cout<<"Encomienda Entregado"<<endl : cout<<"Encomienda No Entregada"<<endl;
    this->vihiculo.escribirInfo();
}

void Encomienda::setFechaEntrega(Fecha entrega){
    this->fechaEntrega = entrega;
    this->entregado = true;
    cout<<"Fecha de entrega Actualizada";
}

Fecha Encomienda::getFechaEntrega(){
    return this->fechaEntrega;
}

int Encomienda::getCodigo(){
    return this->codigoEncomienda;
}

double Encomienda::calcularPrecioEncomienda(){
    double peso = getPeso();
    double precio = this->vihiculo.calcularPrecioViaje(peso);
    return precio;
}

double Encomienda::getPeso(){
    return this->pesoEncomienda;
}