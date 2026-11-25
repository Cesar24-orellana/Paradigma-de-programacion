#ifndef PUBLICACION_H_
#define PUBLICACION_H_

#include<iostream>

using namespace std;

class Publicacion
{
private:
    static float INCREMENTO;
protected:
    string titulo;
    float precioBase;
    int anio_edicion;
public:
    Publicacion(string, float, int);
    virtual ~Publicacion();
    void agregarIVA(float);
    virtual void mostrarInformacion();
    virtual float precioFinal() = 0;
};

Publicacion::Publicacion(string titulo, float precio, int anio) : titulo(titulo), precioBase(precio), anio_edicion(anio) 
{
    cout<<"Publicacion Creada"<<endl;
}

Publicacion::~Publicacion()
{
        cout<<"Publicacion Eliminada"<<endl;
}


#endif
