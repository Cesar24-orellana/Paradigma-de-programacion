#ifndef SISTEMA_H_
#define SISTEMA_H_

#include<vector>
#include "Encomienda.h"

using namespace std;

class Sistema
{
    vector<Encomienda> encomiendas;
public:
    Sistema();
    ~Sistema();
    void registrarEncomienda(string,string,double,Vehiculo);
    void cargarFechaEmtrega(int,Fecha);
    void listarEntregas(Fecha);
};

Sistema::Sistema(/* int cantidad = 0 */)
{
    // this->cant = cantidad;
}

Sistema::~Sistema()
{
    for(Encomienda *e : encomiendas){
        delete e;
    }
    cout<<"Sistema Destruido"<<endl;
}


#endif