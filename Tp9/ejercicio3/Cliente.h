#include<iostream>

using namespace std;

class Cliente
{
    int dniCliente;
    string nombre;
    bool viajeroFrecuente;
    public:

    Cliente(int dni, string nombre, bool frecuencia): dniCliente(dni), nombre(nombre), viajeroFrecuente(frecuencia) {}
    
    bool esViajeroFrecuente()
    {
        return viajeroFrecuente;
    }
};