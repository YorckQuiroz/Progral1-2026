/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 1
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int escribirNombres() {
    ofstream archivoEscritura("nombres.txt");
    if (!archivoEscritura.is_open()) {
        cout << "Error al crear el archivo nombres.txt" << endl;
        return 0;
    }
    int cantidad;
    cout << "Ingrese la cantidad de nombres que desea guardar: ";
    cin >> cantidad;
	if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor a 0." << endl;
        archivoEscritura.close();
        return 0;
    }
	string nombre;
    getline(cin, nombre);

    for (int i = 0; i < cantidad; i = i + 1) {
        cout << "Ingrese el nombre " << i + 1 << ": ";
        getline(cin, nombre);
        archivoEscritura << nombre << endl;
    }
    archivoEscritura.close();
    return 1;
}
int leerNombres() {
	string linea;
    ifstream archivoLectura("nombres.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error al abrir el archivo nombres.txt" << endl;
        return 0;
    }
    cout << "\nLista de Nombres en el Archivo" << endl;
    while (getline(archivoLectura, linea)) {
        cout << linea << endl;
    }

    archivoLectura.close();
    return 1;
}
int main() {
    cout << "Registro de Nombres" << endl;
    int estadoEscritura = escribirNombres();
    if (estadoEscritura == 1) {
        int estadoLectura = leerNombres();
    }

    return 0;
}
