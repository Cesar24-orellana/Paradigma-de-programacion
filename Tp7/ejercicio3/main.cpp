#include <iostream>
#include "Vehiculo.h"
#include "Fecha.h"
#include "Encomienda.h"
#include "Sistema.h"

using namespace std;

int main() {
    cout << "=== 1. PRUEBA DE CLASE VEHICULO ===" << endl;
    // Vehiculo(string patente, int anioModelo, double pesoMax, double tarifa)
    string patente1 = "AB123CD";
    string patente2 = "AE987FG";
    Vehiculo v1(patente1, 2022, 500.0, 1500.0);
    Vehiculo v2(patente2, 2024, 1000.0, 2500.0);

    v1.escribirInfo();
    cout << "Precio viaje v1 (400 kg - sin exceso): $" << v1.calcularPrecioViaje(400.0) << endl;
    cout << "Precio viaje v1 (600 kg - con exceso): $" << v1.calcularPrecioViaje(600.0) << endl;
    cout << "----------------------------------------\n" << endl;

    cout << "=== 2. PRUEBA DE CLASE FECHA ===" << endl;
    Fecha fIngreso1(15, 11, 2026);
    Fecha fIngreso2(18, 11, 2026);
    Fecha fEntrega1(20, 11, 2026);
    Fecha fEntrega2(21, 11, 2026);

    cout << "Fecha ingreso 1: " << fIngreso1.toString() << endl;
    cout << "Fecha entrega 1: " << fEntrega1.toString() << endl;
    cout << "Dias de diferencia: " << (fEntrega1 - fIngreso1) << endl;
    cout << "----------------------------------------\n" << endl;

    cout << "=== 3. PRUEBA DIRECTA DE ENCOMIENDA ===" << endl;
    // Encomienda(string origen, string destino, Fecha ingreso, double peso, Vehiculo v)
    Encomienda encPrueba("San Miguel de Tucuman", "Yerba Buena", fIngreso1, 120.5, v1);
    encPrueba.escribirInfo();
    cout << "Precio calculado: $" << encPrueba.calcularPrecioEncomienda() << endl;
    
    encPrueba.setFechaEntrega(fEntrega1);
    cout << "Fecha de entrega asignada: " << encPrueba.getFechaEntrega().toString() << endl;
    cout << "----------------------------------------\n" << endl;

    cout << "=== 4. PRUEBA DE CLASE SISTEMA ===" << endl;
    Sistema sys;

    // Registrar encomiendas en el sistema (se asume que los codigos autonumericos arrancan en 1 o 2)
    cout << "Registrando encomiendas..." << endl;
    sys.registrarEncomienda("Lules", "Tafi Viejo", 300.0, v1);
    sys.registrarEncomienda("Concepcion", "Famailla", 850.0, v2);
    sys.registrarEncomienda("Monteros", "Aguilares", 550.0, v1);

    // Cargar fechas de entrega usando el codigo autonumerico de las encomiendas creadas en el sistema
    // Nota: Si 'encPrueba' uso el codigo 1, las del sistema tendran codigos 2, 3 y 4.
    cout << "\nCargando fechas de entrega..." << endl;
    sys.cargarFechaEmtrega(2, fEntrega1); // Observa el nombre 'cargarFechaEmtrega' de tu .h
    sys.cargarFechaEmtrega(3, fEntrega2);
    sys.cargarFechaEmtrega(4, fEntrega1);

    // Listar entregas filtradas por una fecha especifica
    cout << "\nListando entregas para la fecha " << fEntrega1.toString() << ":" << endl;
    sys.listarEntregas(fEntrega1);

    cout << "\nListando entregas para la fecha " << fEntrega2.toString() << ":" << endl;
    sys.listarEntregas(fEntrega2);

    cout << "\n=== FIN DEL PROGRAMA ===" << endl;
    return 0;
}
