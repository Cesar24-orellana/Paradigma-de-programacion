#include <iostream>
using namespace std;
#include "evento.cpp"

//  Agregar al task para que compile todos los archivos 
//  Reemplazar ${file}
//  Por "${fileDirname}/*.cpp"


int main(){
    Evento *e1, *e2, *e3;
    e1 = new Evento();
    e2 = new Evento("Festival del Caballo","Mario Juarez", true,520000.00,'I');
    e3 = new Evento(*e2);

    e1->listarInformacion();
    e2->listarInformacion();
    e3->listarInformacion();

    cout<<"- - - Llamado a los metodos - - -"<<endl;
    e1->getAutonumerico();
    e2->getAutonumerico();
    e3->getAutonumerico();

    e1->setResponsable("Juan Garcia");
    e1->listarInformacion();

    double costo = e2->calcularCosto();
    cout<<"Costo del Evento 2"<<endl;
    cout<<"Costo Iva = "<<costo<<endl;

    e1->~Evento();
    e2->~Evento();
    e3->~Evento();
    
    getchar();
    return 0;
}