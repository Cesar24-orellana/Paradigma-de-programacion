/*
 * Arreglo.cpp
 *
 */

#include "Arreglo.h"
#include "Producto.h"

#include <iostream>

using namespace std;


Arreglo::Arreglo() {
	this->indice=0;
}

unsigned int Arreglo::cantidad(){
	return this->indice;
}

void Arreglo::agregar(int cod,string descrip, double precio){
	if(this->indice != this->MAX){
		//Producto *P = new(cod,descrip,precio);
		this->elementos[this->indice] = new Producto(cod,descrip,precio);	// Composicion
		this->indice++;
		cout<<"Elemento Agregado"<<endl;
	}else{
		cout<<"Elemento no Agregado, Capasidad Maxima alcanzada"<<endl;
	}
}

Producto* Arreglo::elemento(unsigned int pos){
		if(pos < this->indice)
			return this->elementos[pos-1];
		else
			return new Producto;
}
bool Arreglo::estaVacio(){
	return this->indice==0;
}

void Arreglo::escribir(){
	cout<<"Arreglo = [ ";
	for(unsigned int i=0; i<this->cantidad();i++)
			cout<<this->elementos[i]<< " ";
	cout<<"]"<<endl;
}

Arreglo::~Arreglo() {
	/*...COMPLETAR...*/
	for(int i = 0; i<cantidad();i++){
		delete this->elementos[i];
	}
	this->indice=0;
}
