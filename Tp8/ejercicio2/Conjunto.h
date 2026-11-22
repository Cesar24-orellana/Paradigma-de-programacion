//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Conjunto.h
//============================================================================

#ifndef CONJUNTO_H_
#define CONJUNTO_H_
#include <iostream>

using namespace std;
// typedef int item;

template<class item>
class IteradorDeConjunto;

template<class item>
class Conjunto{
	static const int MAX = 10;
	static item *indefinido;
	int indice;
	item elementos[MAX];

    public:
	Conjunto();
	void agregar(item X);
	int cantidad();
	bool esConjuntoVacio();
	void escribir();


    friend class IteradorDeConjunto<item>;
};
template<class item>
item *Conjunto<item>::indefinido = new item;

template<class item>
Conjunto<item>::Conjunto(){
	this->indice=0;
	cout<<"Objeto Conjunto Creado"<<endl;
}

template<class item>
void Conjunto<item>::agregar(item X){
	// Por definicion, el conjunto no contiene elementos repetidos.
	// Esta operacion realiza el control antes de agregar un nuevo elemento.

	if(this->indice<MAX){
		int i=0;
		while(i<this->indice &&  !(this->elementos[i] == X))
			i++;

		if(i == this->indice){
			this->elementos[this->indice] = X;
			this->indice++;
			cout<<"Elemento Agregado a la coleecion"<<endl;
		}
	}
}

template<class item>
int Conjunto<item>::cantidad(){
	return this->indice;
}

template<class item>
bool Conjunto<item>::esConjuntoVacio(){
	return this->indice==0;
}

template<class item>
void Conjunto<item>::escribir(){
	cout<<"Conjunto: { ";
	for(int i=0; i<this->indice; i++ )
		cout<<this->elementos[i]<<" ";
	cout<<"}"<<endl<<endl;
}

#endif  //CONJUNTO_H_


