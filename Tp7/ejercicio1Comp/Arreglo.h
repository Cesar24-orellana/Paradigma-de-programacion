/*
 * Arreglo.h
 *
 */

#ifndef ARREGLO_H_
#define ARREGLO_H_
#include <iostream>
#include "Producto.h"
using namespace std;

class Arreglo{
	static const int MAX = 10;
	unsigned int indice;
	Producto *elementos[MAX];
public:
	Arreglo();
	unsigned int cantidad();
	void agregar(int cod,string descrip, double precio);
	Producto* elemento(unsigned int pos);
	bool estaVacio();
	void escribir();
	virtual ~Arreglo();
};

#endif /* ARREGLO_H_ */
