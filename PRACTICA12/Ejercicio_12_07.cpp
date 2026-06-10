/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 7
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int calcularYGuardarPromedios() {
    ifstream archivoLectura("calificaciones.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se pudo abrir el archivo 'calificaciones.txt'." << endl;
        return -1;
    }
	ofstream archivoEscritura("promedios.txt");
    if (!archivoEscritura.is_open()) {
        cout << "Error: No se pudo crear el archivo 'promedios.txt'." << endl;
        archivoLectura.close();
        return -2;
    }

    string nombre;
    double nota1, nota2, nota3, nota4;
	while (archivoLectura >> nombre >> nota1 >> nota2 >> nota3 >> nota4) {
        double promedio = (nota1 + nota2 + nota3 + nota4) / 4.0;
        archivoEscritura << nombre << " " << promedio << endl;
    }
	archivoLectura.close();
    archivoEscritura.close();

    return 1;
}
int main() {
    cout << "--- Calculadora de Promedios Estudiantiles ---" << endl;
    int estadoProceso = calcularYGuardarPromedios();
	if (estadoProceso == 1) {
        cout << "Proceso completado con exito." << endl;
        cout << "Los promedios han sido calculados y guardados en 'promedios.txt'." << endl;
    }
    return 0;
}
