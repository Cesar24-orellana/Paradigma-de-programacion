#ifndef REVISTA_H_
#define REVISTA_H_

#include "Publicacion.h"

#include <iostream>
using namespace std;

class Revista : public Publicacion
{
private:
    int numero;
    int volumen;
    string tema;
public:
    Revista(int codigo, string titulo, int anio, double precio, int num, int vol, string tema);
    void Informacion();
    int ObtenerISSN();
    string ObtenerCampo();
    int antiguedad(int anioActual);
    double PrecioVenta();
};

Revista :: Revista(int codigo, string titulo, int anio, double precio, int num, int vol, string tema): Publicacion(codigo,titulo, precio, anio), numero(num), volumen(vol), tema(tema) {}

void Revista :: Informacion(){
    cout<<"Datos de la Revista";
    cout<<"Codigo = "<<Publicacion::codigo<<endl;
    cout<<"Titulo ="<<Publicacion::titulo<<endl;
    cout<<"Año ="<<Publicacion::anio_edicion<<endl;
    cout<<"Precio Base ="<<Publicacion::precioBase<<endl;
    cout<<"Numero ="<<numero<<endl;
    cout<<"Volumen ="<<volumen<<endl;
    cout<<"Campo (Donde esta Dirigido) ="<<tema<<endl;
}

int Revista :: ObtenerISSN(){
    return Publicacion::codigo;
}

string Revista :: ObtenerCampo(){
    return tema;
}

int Revista :: antiguedad(int anioActual){
    return anioActual - Publicacion::anio_edicion;
}

double Revista :: PrecioVenta(){
    double total;
    (5 < antiguedad(2026))? total = Publicacion::precioBase*1.15 : total = Publicacion::precioBase;
    total = total*1.21;
    return total;
}

#endif