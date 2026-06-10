/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 3
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int registrarEstudiantes() {
    ofstream archivoEscritura("estudiantes.txt");
    if (!archivoEscritura.is_open()) {
        cout << "Error al abrir o crear el archivo estudiantes.txt" << endl;
        return 0;
    }
    int cantidad;
    cout << "Ingrese la cantidad de estudiantes a registrar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser estrictamente mayor a 0." << endl;
        archivoEscritura.close();
        return 0;
    }
    string nombre;
    int edad;
    double promedio;
    string dummy;
    getline(cin, dummy);

    for (int i = 0; i < cantidad; i = i + 1) {
        cout << "\nDatos del Estudiante " << i + 1 << " " << endl;
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Edad: ";
        cin >> edad;
        cout << "Promedio: ";
        cin >> promedio;
		getline(cin, dummy);
		archivoEscritura << "Nombre: " << nombre << endl;
        archivoEscritura << "Edad: " << edad << endl;
        archivoEscritura << "Promedio: " << promedio << endl;
    }

    archivoEscritura.close();
    return 1;
}
int mostrarEstudiantes() {
	string linea;
    ifstream archivoLectura("estudiantes.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error al leer el archivo estudiantes.txt" << endl;
        return 0;
    }
    cout << " REGISTROS DE ESTUDIANTES" << endl;
    while (getline(archivoLectura, linea)) {
        cout << linea << endl;
    }
    archivoLectura.close();    
    return 1;
}
int main() {
    cout << "Sistema de Registro Academico " << endl;
    int estadoRegistro = registrarEstudiantes();
    if (estadoRegistro == 1) {
        int estadoMostrar = mostrarEstudiantes();
    }
    return 0;
}
