#ifndef Coleccion_h
#define Coleccion_h
#include <iostream>
using namespace std;

typedef int item;
const item Indefinido = -999;

class Coleccion
{
private:
    item *elemento;
    int max;
    int indice;

public:
    Coleccion();
    Coleccion(int x = 10);
    Coleccion(Coleccion &C);
    bool reservarMemoria(int n);
    bool redimensionar();
    //void crearColeccion(int n = 10);
    void agregar(item x);
    unsigned int capacidad();
    item &getElemento(int p);
    unsigned int cantidad();
    void borrar(int p);
    void borrar();
    void destruir();
    bool operator==(Coleccion V);
};
#endif
