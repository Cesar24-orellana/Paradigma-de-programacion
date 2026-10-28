//============================================================================
// PARADIGMAS DE PROGRAMACION - 2025
// Producto.cpp
//============================================================================

#include <iostream>
#include "Producto.h"
using namespace std;

const double Producto::INCREMENTO = 0.10; 

Producto::Producto(int codigo, string descripcion, double precio){
	this->codigo = codigo;
	this->descripcion = descripcion;
	this->precio = precio;
}

Producto :: Producto(){
    this->codigo = 0;
	this->descripcion = "";
	this->precio = 00;
}

void Producto::listarInformacion(){
	cout<<"Producto "<<endl;
	cout<<"        Codigo: "<< this->codigo<<endl;
	cout<<"        Descripcion: "<< this->descripcion<<endl;
	cout<<"        Precio: "<< this->precio<<endl;
	cout<<"        Precio de venta: "<< this->calcularPrecioDeVenta()<<endl;
}

double Producto::calcularPrecioDeVenta(){
	return this->precio*(1 + Producto::INCREMENTO);
}

Producto::~Producto(){
	cout<<"Destructor Producto codigo: "<<this->codigo<<endl;
}
