    #include<iostream>

    #include "evento.h"

    using namespace std;

class EventoNacional : protected Evento
{
private:
    /* data */
public:
    EventoNacional();
    ~EventoNacional();
    double getPrecio();
};


EventoNacional::~EventoNacional()
{
}
