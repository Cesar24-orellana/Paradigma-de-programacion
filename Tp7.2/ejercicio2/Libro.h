#include <iostream>
using namespace std;

#include "publicacion.h"

class Libro : public Publicacion
{
private:
    int Codigo;
    string NombreEditorial;
    string NombreAutor;
    bool bestSeller;
public:
    Libro(int codigo, string titulo, int anio,double precio, string editorial, string autor, bool BS);
    void Informacion();
    int ObtenerISBN();
    bool esBestSeller();
    double PrecioImpuesto();
};

Libro :: Libro(int codigo, string titulo, int anio,double precio, string editorial, string autor, bool BS) : Publicacion(titulo, precio, anio), Codigo(codigo), NombreEditorial(editorial), NombreAutor(autor), bestSeller(BS) {} 

void Libro :: Informacion(){
    cout<<"Datos Del Libro";
    cout<<"Codigo = "<<Codigo<<endl;
    cout<<"Titulo ="<<Publicacion::titulo<<endl;
    cout<<"Año ="<<Publicacion::anio_edicion<<endl;
    cout<<"Precio Base ="<<Publicacion::precioBase<<endl;
    cout<<"Nombre de la Editorial"<<NombreEditorial<<endl;
    cout<<"Nombre del Autor"<<NombreAutor<<endl;
    bestSeller ? cout<<"Es Best Seller"<<endl : cout<<"No es Best Seller"<<endl;
}

int Libro :: ObtenerISBN(){
    return Codigo;
}

bool Libro :: esBestSeller(){
    return bestSeller;
}

double Libro :: PrecioImpuesto(){
    double Total;
    bestSeller ? Total = Publicacion::precioBase*1.1 : Total = Publicacion::precioBase;
    Total *= 1.21;     // Total <-- Total + Total*0.21
    return Total;
}