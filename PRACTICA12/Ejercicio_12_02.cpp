/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 2
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int contarPalabras() {
	string palabra;
    ifstream archivoLectura("texto.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se encontro el archivo 'texto.txt'." << endl;
        cout << "Por favor, crea el archivo en la misma carpeta antes de ejecutar." << endl;
        return -1;
    }
    int contador = 0;
    while (archivoLectura >> palabra) {
        contador = contador + 1;
    }
    archivoLectura.close();
    return contador;
}

int main() {
    cout << "Contador de Palabras " << endl;
    int totalPalabras = contarPalabras();
	if (totalPalabras >= 0) {
        cout << "El archivo 'texto.txt' contiene " << totalPalabras << " palabras." << endl;
    }
    return 0;
}
