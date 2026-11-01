#include<iostream>

using namespace std;

class persona
{
private:
    string nombre;
    double telefono;
public:
    persona();
    persona(string,double);
    ~persona();
    string getNombre();
    double informacionDeContacto();
};

persona::persona(/* args */)
{
}

persona::~persona()
{
}
