#include "Vehiculo.h"

Vehiculo::Vehiculo(/* args */)
{
}

void Vehiculo::escribirInfo(){
    cout<<"Datos del Vehiculo"<<endl;
    cout<<"Patente: "<<patente<<endl;
    cout<<"Año del Modelo: "<<añoModelo<<endl;
    cout<<"Peso Maximo: "<<pesoMax<<endl;
    cout<<"Tarifa: "<<tarifa<<endl;
    cout<<""<<endl;
}

bool Vehiculo::pesoExcedido(double peso){
    return this->pesoMax < peso;
}

double Vehiculo::getTarifa(){
    return this->tarifa;
}

double Vehiculo::calcularIncremento(double peso){
    double montoIncremento = 0;
    if(pesoExcedido(peso)) montoIncremento = getTarifa()*INCREMENTO;
    return montoIncremento;
}

double Vehiculo::calcularPrecioViaje(double peso){
    return getTarifa() + calcularIncremento(peso);
}