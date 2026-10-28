#include<stdio.h>
#include<iostream>

using namespace std;

#include "Producto.h"
#include "Arreglo.h"

int main()
{
    cout<<"- - - INCIO DEL PROGRAMA - - -"<<endl;
    Arreglo *A;
    A->agregar(1,"Mouse",25000);
    A->agregar(2,"Teclado",50000);
    A->agregar(3,"Monitor",125000);
    A->escribir();
    A->~Arreglo();
    return 0;
}