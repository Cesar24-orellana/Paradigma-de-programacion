#include <iostream>
using namespace std;

class Libro
{
private:
    int Codigo;
    string Titulo;
    int Anio;
    double PrecioBase;
    string NombreEditorial;
    string NombreAutor;
    bool bestSeller;
public:
    bool Crear(int codigo, string titulo, int anio,double precio, string editorial, string autor, bool BS);
    void Informacion();
    int ObtenerISBN();
    bool esBestSeller();
    double PrecioImpuesto();
};

bool Libro :: Crear(int codigo, string titulo, int anio,double precio, string editorial, string autor, bool BS){
    Codigo = codigo;
    Titulo = titulo;
    Anio = anio;
    PrecioBase = precio;
    NombreEditorial = editorial;
    NombreAutor = autor;
    bestSeller = BS;
} 

void Libro :: Informacion(){
    cout<<"Datos Del Libro";
    cout<<"Codigo = "<<Codigo<<endl;
    cout<<"Titulo ="<<Titulo<<endl;
    cout<<"Año ="<<Anio<<endl;
    cout<<"Precio Base ="<<PrecioBase<<endl;
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
    bestSeller ? Total = PrecioBase*1.1 : Total = PrecioBase;
    Total *= 1.21;     // Total <-- Total + Total*0.21
    return Total;
}