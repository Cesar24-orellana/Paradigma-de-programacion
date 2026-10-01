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
    cout<<"Codigo = "<<ObtenerISBN()<<endl;
    cout<<"Titulo ="<<Titulo<<endl;
    
}