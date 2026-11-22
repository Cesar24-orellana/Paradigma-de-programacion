#include<iostream>
#include <cstdlib> // rand(), srand()
#include <ctime>

#include "IteradorDeConjunto.h"
#include "Fecha.h"

using namespace std;

template<class item>
bool pertenece(Conjunto<item> &C, item X);
void claseINT();
void claseFECHA();

//template<class item>
int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    claseINT();
    claseFECHA();

    cout<<"--- FIN DE LA PRUEBA --- "<<endl;
    return 0;
}

template<class item>
bool pertenece(Conjunto<item> &C, item X)
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

void claseINT()
{
    cout << "--- 1. PRUEBA DE CLASE CONJUNTO<INT> ---" << endl;
    Conjunto<int> C;
    C.esConjuntoVacio()? cout<<"El Conjunto esta Vacio"<<endl : cout<<"El Conjunto NO esta Vacio"<<endl;
    for (int i = 0; i < 7; i++)
    {
        C.agregar((std::rand() % 20) + 1);
    }
    
    cout<<"Cantidad de elementos : "<<C.cantidad()<<endl;
    C.escribir();

    // 10 Pertenece al conjunto??
    pertenece(C, 10)? cout<<"10 pertenece al conjunto"<<endl : cout<<"10 NO pertenece al conjunto"<<endl;

    // cout<<"--- FIN DE LA PRUEBA<INT> --- "<<endl;
    getchar();
}

void claseFECHA()
{
    cout << "--- 2. PRUEBA DE CLASE CONJUNTO FECHA ---" << endl;
    Conjunto<Fecha> C;
    C.esConjuntoVacio()? cout<<"El Conjunto esta Vacio"<<endl : cout<<"El Conjunto NO esta Vacio"<<endl;
    Fecha fCorroborar(18, 11, 2026);
    C.agregar(Fecha(15, 11, 2026));
    C.agregar(Fecha(18, 11, 2026));
    C.agregar(Fecha(20, 11, 2026));
    C.agregar(Fecha(21, 11, 2026));
    cout<<"Cantidad de elementos : "<<C.cantidad()<<endl;
    //C.escribir();     //  --- DEBERIA MODIFICAR EL METODO escribir()??
    cout<<"La fecha "<<fCorroborar.getDia()<<"/"<<fCorroborar.getMes()<<"/"<<fCorroborar.getAnio()<<" Pertenece a la coleccion?"<<endl;
    pertenece(C, fCorroborar)? cout<<"Pertenece al conjunto"<<endl : cout<<"NO pertenece al conjunto"<<endl;
    // cout<<"--- FIN DE LA PRUEBA  --- "<<endl;
    getchar();
}