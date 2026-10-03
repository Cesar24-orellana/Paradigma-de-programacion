#include <iostream>
using namespace std;

class Revista
{
private:
    int Codigo;
    string Titulo;
    int Anio;
    double PrecioBase;
    int Numero;
    int Volumen;
    string Tema;
public:
    bool Crear(int codigo, string titulo, int anio, double precio, int num, int vol, string tema);
    void Informacion();
    int ObtenerISSN();
    string ObtenerCampo();
    int antiguedad(int anioActual);
    double PrecioVenta();
};

bool Revista :: Crear(int codigo, string titulo, int anio, double precio, int num, int vol, string tema){
    if(codigo>=0 && anio>0 && precio>0 && num>0 && vol>0) return false;
    Codigo = codigo;
    Titulo = titulo;
    Anio = anio;
    PrecioBase = precio;
    Numero = num;
    Volumen = vol;
    Tema = tema;
}
void Revista :: Informacion(){
    cout<<"Datos de la Revista";
    cout<<"Codigo = "<<Codigo<<endl;
    cout<<"Titulo ="<<Titulo<<endl;
    cout<<"Año ="<<Anio<<endl;
    cout<<"Precio Base ="<<PrecioBase<<endl;
    cout<<"Numero ="<<Numero<<endl;
    cout<<"Volumen ="<<Volumen<<endl;
    cout<<"Campo (Donde esta Dirigido) ="<<Tema<<endl;
}

int Revista :: ObtenerISSN(){
    return Codigo;
}

string Revista :: ObtenerCampo(){
    return Tema;
}

int Revista :: antiguedad(int anioActual){
    return anioActual - Anio;
}

double Revista :: PrecioVenta(){
    double total;
    (5 < antiguedad(2026))? total = PrecioBase*1.15 : total = PrecioBase;
    total = total*1.21;
    return total;
}
