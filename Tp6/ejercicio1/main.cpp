#include <iostream>
using namespace std;
#include "evento.cpp"

int main(){
    Evento *e1, *e2, *e3;
    e1 = new Evento();
    e2 = new Evento("Festival del Caballo","Mario Juarez", true,520000.00,'I');
    e3 = new Evento(*e2);

    e1->listarInformacion();
    e2->listarInformacion();
    e3->listarInformacion();

    e1->~Evento();
    e2->~Evento();
    e3->~Evento();
    
    return 0;
}