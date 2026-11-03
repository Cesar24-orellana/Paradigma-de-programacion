#include <iostream>
using namespace std;
#include "evento.h"
#include "persona.h"
#include "Fecha.h"

//  Agregar al task para que compile todos los archivos 
//  Reemplazar ${file}
//  Por "${fileDirname}/*.cpp"


int main(){
    Evento *e1, *e2, *e3;
    Persona p1, p2;
    p1 =  Persona("Mario Juarez", 3815554465);
    Fecha f1;
    f1 = Fecha(25,8,2027);
    e1 = new Evento();
    e2 = new Evento("Festival del Caballo",&p1, f1,520000.00,'I');
    e3 = new Evento(*e2);

    e1->listarInformacion();
    e2->listarInformacion();
    e3->listarInformacion();

    cout<<"- - - Llamado a los metodos - - -"<<endl;
    e1->getAutonumerico();
    e2->getAutonumerico();
    e3->getAutonumerico();

    p2 = Persona("Juan Martinez", 3814443333);
    e1->setResponsable(&p2);
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