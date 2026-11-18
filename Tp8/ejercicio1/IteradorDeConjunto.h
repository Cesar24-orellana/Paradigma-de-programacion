#ifndef ITERADORDECONJUNTO_H_
#define ITERADORDECONJUNTO_H_

#include<iostream>
#include "Conjunto.h"

using namespace std;

class IteradorDeConjunto
{
    const Conjunto &lista;
    int posicion;
    public:
    IteradorDeConjunto(const Conjunto& C): lista(C)
    {
        posicion = 0;
    }

    ~IteradorDeConjunto(){}
    
    bool puedoIterar(){
        return posicion < lista.MAX;
    } 

    void iterar()
    {
        if(puedoIterar()) posicion ++;
    }
    
    item elemento(){
        return lista.elemento[posicion];
    }
};

#endif