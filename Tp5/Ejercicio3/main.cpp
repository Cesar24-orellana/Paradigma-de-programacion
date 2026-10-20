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

// SOBRECARGA OPERADOR DE INSERCION DE FLUJO ( << )
ostream& operator<<(ostream& salida, Coleccion &V){

	// Completarx
	cout<<'\n';
	item valor;
	for (int i = 0; i < V.capacidad(); i++)
	{
		valor = V.getElemento(i);
		salida<<valor<<endl;
	}

	return salida;
}

// SOBRECARGA OPERADOR DE EXTRACCION DE FLUJO ( >> )
istream& operator>>(istream& entrada, Coleccion &V){
	int valor;
	for(unsigned int i=0;i<V.capacidad();i++){
		entrada>>valor;
		V.agregar(valor);
	}
	return entrada;
}

