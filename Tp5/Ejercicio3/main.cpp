#include <iostream>

#include "Coleccion.h"

using namespace std;

item obtenerMayor(Coleccion V){
    if(V.cantidad() == 0) return 0;
    int mayor = 0;
    for (int i = 0; i < V.cantidad(); i++)
    {
        if(mayor < V.getElemento(i)) mayor = V.getElemento(i);
    }
    return mayor;
}