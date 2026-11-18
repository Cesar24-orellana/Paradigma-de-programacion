#include "Sistema.h"

using namespace std;

void Sistema::registrarEncomienda(string origen,string destino,double peso,Vehiculo vehiculo){
    Fecha fecha;
    fecha.setFechaActual();
    Encomienda *nuevaEncomienda = new Encomienda(origen, destino, fecha, peso, vehiculo);
    // encomiendas.registrar(nuevaEncomienda);
    this->cant++;
}

void Sistema::cargarFechaEmtrega(int codigo, Fecha fecha){
    for (int i = 0; i < cant; i++)
    {
        if(this->encomiendas[i].getCodigo() = codigo) this->encomiendas[i].setFechaEntrega(fecha); 
    }
    
}

void Sistema::listarEntregas(Fecha fecha){
    
}