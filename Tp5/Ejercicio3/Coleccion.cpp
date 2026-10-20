#include <iostream>
#include "Coleccion.h"
using namespace std;

bool Coleccion ::reservarMemoria(unsigned int n){
    elemento = new (std::nothrow) item[n];
    if(elemento == nullptr) return false;
    return true;
}

bool Coleccion :: redimensionar(){
    item *nuevo = new item[5+max];
    if(nuevo == NULL) return false;
    for (unsigned int i = 0; i < max; i++)
    {
        nuevo[i] = elemento[i];
    }
    max +=5;
    delete[] elemento;
    elemento = nuevo;
    return true;
}

void Coleccion :: crearColeccion(unsigned int n){
    if(reservarMemoria(n)){
        indice = 0;
        max = n;
        cout<<"Coleccion Creada"<<endl;
    }else{
        indice = 0;
        max = 0;
        cout<<"No se pudo crear la Coleccion"<<endl;
    }
}

void Coleccion :: agregar(item x){
    if(indice < max){
        elemento[indice] = x;
        indice++;
    } else if (redimensionar())
    {
        elemento[indice] = x;
        indice++;
    }
    
}

unsigned int Coleccion :: capacidad(){
    return this->max;
}

item & Coleccion::getElemento( unsigned int p){
    if(indice > p) return elemento[p];
    return elemento[0];
}

unsigned int Coleccion :: cantidad(){
    return indice;
}

void Coleccion :: borrar( unsigned int p){
    if(p < max) elemento[p] = Indefinido;
}

void Coleccion :: borrar(){
    indice = 0;
}

void Coleccion :: destruir(){
    if(elemento != nullptr) {
        delete[] elemento;
        indice = 0;
    }
}

bool Coleccion :: operator==(Coleccion V){
    if(capacidad() != V.capacidad()) return false;
    if(cantidad() != V.cantidad()) return false;
    for (unsigned int i = 0; i < capacidad(); i++)
    {
        if (getElemento(i) != V.getElemento(i))
        {
            return false;
        }
    }
    return true;
}