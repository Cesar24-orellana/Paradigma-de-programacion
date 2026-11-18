include<iostream>

#include "IteradorDeConjunto.h"

bool pertenece(Conjunto &C, item X);

int main()
{

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