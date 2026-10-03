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
    bool reservarMemoria( unsigned int n);
    bool redimensionar();
    Coleccion crearColeccion(unsigned int n = 10);
    void agregar(item x);
    unsigned int capacidad();
    item &elemento( unsigned int p);
    unsigned int cantidad();
    void borrar( unsigned int p);
    void borrar();
    void destruir();
    bool operator==(Coleccion V1, Coleccion V2);
};


