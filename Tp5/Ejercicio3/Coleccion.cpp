#include <iostream>
#include "Coleccion.h"
using namespace std;

bool Coleccion ::reservarMemoria(unsigned int n){
    elemento = new (std::nothrow) item[n];
    if(elemento == nullptr) return false;
    max = n;
    indice = 0;
    return true;
}

bool Coleccion :: redimensionar(){

}

Coleccion Coleccion :: crearColeccion(unsigned int n){
    Coleccion c;
    //c = reservarMemoria(n);
}