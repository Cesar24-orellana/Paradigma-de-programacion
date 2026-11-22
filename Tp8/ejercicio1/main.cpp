#include<iostream>

#include "IteradorDeConjunto.h"

using namespace std;

bool pertenece(Conjunto &C, item X);

int main()
{
    cout << "--- 1. PRUEBA DE CLASE CONJUNTO ---" << endl;
    Conjunto C;
    C.esConjuntoVacio()? cout<<"El Conjunto esta Vacio"<<endl : cout<<"El Conjunto NO esta Vacio"<<endl;
    C.agregar(5);
    C.agregar(4);
    C.agregar(9);
    C.agregar(2);
    C.agregar(1);
    C.agregar(10);
    C.agregar(3);
    
    cout<<"Cantidad de elementos : "<<C.cantidad()<<endl;
    C.escribir();
    // 10 Pertenece al conjunto??
    pertenece(C, 10)? cout<<"10 pertenece al conjunto"<<endl : cout<<"10 pertenece al conjunto"<<endl;

    cout<<"--- FIN DE LA PRUEBA --- "<<endl;
    getchar();
    return 0;
}

bool pertenece(Conjunto &C, item X)
{
    IteradorDeConjunto Ite(C);
    bool esta = false;
    while(!esta && Ite.puedoIterar())
    {
        esta = X == Ite.elemento();
        Ite.iterar();
    }
    return esta;
}