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
    for (int i = 0; i < max; i++)
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
    unsigned int capacidad();
    item &getElemento( unsigned int p);
    unsigned int cantidad();
    void borrar( unsigned int p);
    void borrar();
    void destruir();