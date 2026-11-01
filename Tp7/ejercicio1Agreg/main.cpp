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
    Producto P1 (1,"Mouse",25000);
    Producto P2 (2,"Teclado",50000);
    Producto P3 (3,"Monitor",125000);
    A.agregar(&P1);
    A.agregar(&P2);
    A.agregar(&P3);
    A.escribir();
    cout<<"Elemento en la posicion 3 ";
    A.elemento(3);
    A.~Arreglo();
    getchar();
    return 0;
}