#include <stdio.h>
#include "Cuenta.h"

bool transferir(Cuenta C1, Cuenta C2, long monto = 1000);

int main(){
    // Cuenta 1
    cout<<"- - - Cuenta Nro 1 - - -"<<endl;
    Cuenta C1;
    C1.crear(1000,44321557, 1000);
    C1.mostrarInformacion();
    C1.depositar(1000);
    C1.mostrarInformacion();
    C1.extraer(500);
    C1.mostrarInformacion();
    // Cuenta 2
    cout<<"- - -Cuenta Nro 2 - - -"<<endl;
    Cuenta C2;
    C2.crear(1001,43155555,20);
    C2.mostrarInformacion();
    C2.depositar(500);
    C2.mostrarInformacion();
    C2.extraer(700);
    C2.getSaldo();
    // Transferir monto de cuenta 1 a cuenta 2
    cout<<"- - - Transferir 1000 de la cuenta 1 a cuenta 2 - - -"<<endl;
    transferir(C1,C2);
    C1.mostrarInformacion();
    C2.mostrarInformacion();
    return 0;
}

bool transferir(Cuenta C1, Cuenta C2, long monto){
    if(monto>=0 && C1.getSaldo()>= monto) return false;
    C1.extraer(monto);
    C2.depositar(monto);
    return true;
}