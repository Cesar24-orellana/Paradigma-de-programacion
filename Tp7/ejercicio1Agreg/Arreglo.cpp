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

void Arreglo::agregar(Producto *P){
	if(this->indice != this->MAX){
		this->elementos[this->indice] = P;	// Agregacion
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
	//delete[] this->elementos;
	this->indice=0;
	cout<<"Arreglo Destruido"<<endl;
}
