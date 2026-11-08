#include <iostream>
using namespace std;
#include "evento.h"
#include "persona.h"
#include "Fecha.h"
#include "EventoNacional.h"
#include "EventoInternacional.h"


//  Agregar al task para que compile todos los archivos 
//  Reemplazar ${file}
//  Por "${fileDirname}/*.cpp"


int main(){
    EventoNacional *e2;
    EventoInternacional *e3;
    string nombre = "Mario Juarez";
    string nombre2 = "Juan Martinez";

    Persona p1(nombre, 38155544); 
    Persona p2(nombre2, 38144433);
    Fecha f1(short(25),short(8),short(2027));

    e2 = new EventoNacional("Festival del Caballo",&p1, f1,520000.00,'I');
    e3 = new EventoInternacional("Festival del Limon",&p2, f1,45000.00,'I', "Argentina");

    cout<<"Precio del Evento Nacional : "<<e2->getPrecio()<<endl;
    e2->listarInformacion();
    e3->listarInformacion();

    cout<<"- - - Llamado a los metodos - - -"<<endl;

    //e3->setResponsable(&p2);
    //e3->listarInformacion();
    cout<<""<<endl;
    double costo = e3->getPrecio();
    cout<<"Costo del Evento 2"<<endl;
    cout<<"Costo Iva = "<<costo<<endl;

    delete e2;
    delete e3;

    getchar();
    return 0;
}