#include <iostream>
#include <new>

#include "Coleccion.h"


bool reservarMemoria(Coleccion &V, unsigned int n){
    V.elemento = new(std::nothrow) item[n];
    if(V.elemento == nullptr) return false;
    return true;
}

Coleccion crearColeccion(unsigned int n){
    Coleccion V;
    if (reservarMemoria(V,n))
    {
        V.max = n;
        V.indice = 0;
    } else{
        V.max = 0;
        V.indice = 0;
    }

    return V;
}

bool redimensionar(Coleccion &V){
    item *nuevo = new item[5 + V.max];
    if(nuevo == NULL) return false;

    for (int i = 0; i < V.max+1; i++)
    {
        nuevo[i] = V.elemento[i];
    }
    V.max += 5;
    delete(V.elemento);
    V.elemento = nuevo;
    return true;
}

void agregar(Coleccion &V, item x){
    if (V.indice < V.max) {
        V.elemento[V.indice] = x;
        V.indice++;
    }
    if (redimensionar(V)){
        V.elemento[V.indice] = x;
        V.indice++;
    }
}

unsigned int capacidad(Coleccion V){
    return V.max;
}

item& elemento(Coleccion &V, unsigned int p){
    if (V.indice > p) return V.elemento[p];
    return V.elemento[0];
}

unsigned int cantidad(Coleccion V){
    return V.indice;
}

void borrar(Coleccion &V, unsigned int p){
    if (p < V.max) V.elemento[p] = Indefinido;
}

void borrar(Coleccion &V){
    V.indice = 0;
}

void destruir(Coleccion &V){
    if(V.elemento != NULL){
        delete(V.elemento);
        V.indice = 0;
    }
}

bool operator==(Coleccion V1, Coleccion V2){
    if (capacidad(V1) != capacidad(V2)) return false;
    if (cantidad(V1) != cantidad(V2)) return false;
    for (int i = 0; i < capacidad(V1); i++)
    {
        if (elemento(V1,i) != elemento(V2,i))
        {
            return false;
        }
    }
    return true;
    
}