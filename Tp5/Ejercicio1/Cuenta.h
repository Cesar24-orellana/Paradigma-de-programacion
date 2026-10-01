#include <iostream>
using namespace std;



    class Cuenta
    {
    private:
        int numero;
        long dniTitular;
        double saldo;
    public:
        void crear(int num, long titular, double monto);
        bool depositar(double monto);
        bool extraer(double monto);
        double getSaldo();
        void mostrarInformacion();
    };
    
    void Cuenta::crear(int num, long titular, double monto){
        if(monto>=0){
            numero = num;
            dniTitular = titular;
            saldo = monto;
        } 
    }
    
    bool Cuenta::depositar(double monto)
    {
        if (monto <= 0) return false;
        saldo += monto;
        return true;
    }

    bool Cuenta :: extraer(double monto){
        if(monto <= 0 && saldo < monto) return false;
        saldo -= monto;
        return true;
    }

    double Cuenta :: getSaldo(){
        return saldo;
    }
    
    void Cuenta :: mostrarInformacion(){
        cout<<"Numero = "<<numero<<endl;
        cout<<"DNI = "<<dniTitular<<endl;
        cout<<"Monto = "<<getSaldo()<<endl;
    }