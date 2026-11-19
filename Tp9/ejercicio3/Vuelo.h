#include<iostream>
#include<vector>

#include "Cliente.h"
#include "Fecha.h"

using namespace std;

class Vuelo
{
    protected:
    int codigo;
    Fecha fecha;
    double montoPasaje;
    vector<Cliente> pasajeros;
    static double CalcularImpuestos()
    {
        int cantidad = 0;
        for(Cliente *p : pasajeros)
        {
            if(!p->esViajeroFrecuente())
            {
                cantidad += 1;
            }
        }
        float monto = cantidad*montoPasaje;
        return monto;
    }

};