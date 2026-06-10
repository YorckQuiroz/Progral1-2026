/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 6
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int filtrarTemperaturas(double umbralN) {
    ifstream archivoLectura("temperaturas.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se pudo abrir el archivo 'temperaturas.txt'." << endl;
        return -1;
    }
    ofstream archivoEscritura("altas_temperaturas.txt");
    if (!archivoEscritura.is_open()) {
        cout << "Error: No se pudo crear el archivo 'altas_temperaturas.txt'." << endl;
        archivoLectura.close();
        return -2;
    }
    string ciudad;
    double temperatura;
	while (archivoLectura >> ciudad >> temperatura) {
        if (temperatura > umbralN) {
            archivoEscritura << ciudad << " " << temperatura << endl;
        }
    }
	archivoLectura.close();
    archivoEscritura.close();

    return 1;
}
int main() {
    cout << "--- Filtro de Altas Temperaturas ---" << endl;
    double limiteGrados;
    cout << "Ingrese la temperatura minima (N) para el filtro: ";
    cin >> limiteGrados;
    int estado = filtrarTemperaturas(limiteGrados);
	if (estado == 1) {
        cout << "Operacion exitosa." << endl;
        cout << "Se ha generado el archivo 'altas_temperaturas.txt' con las ciudades que superan los " << limiteGrados << " grados." << endl;
    }

    return 0;
}
