#include<stdio.h>
#include<iostream>

using namespace std;

#include "Producto.h"
#include "Arreglo.h"

int main()
{
    cout<<"- - - INCIO DEL PROGRAMA - - -"<<endl;
    Arreglo A;
    A.estaVacio()? cout<<"El arreglo esta vacio"<<endl : cout<<"El arreglo no esta vacio"<<endl;
    A.agregar(1,"Mouse",25000);
    A.agregar(2,"Teclado",50000);
    A.agregar(3,"Monitor",125000);
    A.escribir();
    cout<<"Elemento en la posicion 3 ";
    A.elemento(3);
    A.~Arreglo();
    getchar();
    return 0;
}