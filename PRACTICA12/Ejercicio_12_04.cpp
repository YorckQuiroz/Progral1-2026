/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 4
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int buscarTexto(string fraseABuscar) {
    ifstream archivoLectura("datos.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se encontro el archivo 'datos.txt'." << endl;
        return -1;
    }
    int contador = 0;
    string linea;
	while (getline(archivoLectura, linea)) {
        size_t posicion = 0;
        posicion = linea.find(fraseABuscar, posicion);
        while (posicion != string::npos) {
            contador = contador + 1;
            posicion = posicion + fraseABuscar.length();
            posicion = linea.find(fraseABuscar, posicion);
        }
    }
    archivoLectura.close();
    return contador;
}
int main() {
    cout << " Buscador de Texto " << endl;
    string frase;
    cout << "Ingrese la palabra o frase que desea buscar en el archivo: ";
    getline(cin, frase);
	if (frase.length() == 0) {
        cout << "No se ingreso ningun texto valido para la busqueda." << endl;
        return 1;
    }
    int totalApariciones = buscarTexto(frase);
	if (totalApariciones >= 0) {
        cout << "\nResultados de la busqueda:" << endl;
        cout << "La palabra o frase '" << frase << "' aparece " << totalApariciones << " vez/veces en el archivo." << endl;
    }

    return 0;
}
