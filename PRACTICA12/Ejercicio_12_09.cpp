/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 9
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
char cifrarCaracter(char c, int desplazamiento) {
    if (c >= 'a' && c <= 'z') {
        return 'a' + (c - 'a' + desplazamiento) % 26;
    } 
    else if (c >= 'A' && c <= 'Z') {
        return 'A' + (c - 'A' + desplazamiento) % 26;
    }
    return c;
}
int cifrarArchivo() {
    ifstream archivoLectura("mensaje.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se pudo abrir el archivo 'mensaje.txt'." << endl;
        return -1;
    }
    ofstream archivoEscritura("mensaje_cifrado.txt");
    if (!archivoEscritura.is_open()) {
        cout << "Error: No se pudo crear el archivo 'mensaje_cifrado.txt'." << endl;
        archivoLectura.close();
        return -2;
    }
	string linea;
    while (getline(archivoLectura, linea)) {
        for (int i = 0; i < linea.length(); i = i + 1) {
            linea[i] = cifrarCaracter(linea[i], 3);
        }
        archivoEscritura << linea << endl;
    }
	archivoLectura.close();
    archivoEscritura.close();
	return 1;
}

int main() {
    cout << "--- Sistema de Cifrado Cesar ---" << endl;
    int estadoProceso = cifrarArchivo();
	if (estadoProceso == 1) {
        cout << "Proceso completado con exito." << endl;
        cout << "El contenido ha sido cifrado y guardado en 'mensaje_cifrado.txt'." << endl;
    }
    return 0;
}
