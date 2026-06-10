/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 8
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
vector<int> analizarDocumento() {
    ifstream archivoLectura("documento.txt");
    vector<int> resultados;
    if (!archivoLectura.is_open()) {
        resultados.push_back(-1);
        return resultados;
    }
    int lineas = 0;
    int palabras = 0;
    int caracteres = 0;
    string linea;
    while (getline(archivoLectura, linea)) {
        lineas = lineas + 1;
        caracteres = caracteres + linea.length() + 1;
        int enPalabra = 0; // Bandera lógica: 0 significa "fuera de una palabra", 1 significa "dentro de una palabra"
        for (int i = 0; i < linea.length(); i = i + 1) {
            if (linea[i] == ' ' || linea[i] == '\t') {
                enPalabra = 0;
            } 
            else if (enPalabra == 0) {
                enPalabra = 1;
                palabras = palabras + 1;
            }
        }
    }
    archivoLectura.close();
    resultados.push_back(lineas);
    resultados.push_back(palabras);
    resultados.push_back(caracteres);   
    return resultados;
}
int main() {
    cout << "--- Analizador de Documento ---" << endl;
    vector<int> estadisticas = analizarDocumento();
    if (estadisticas.size() > 0 && estadisticas[0] == -1) {
        cout << "Error: No se pudo abrir o encontrar el archivo 'documento.txt'." << endl;
        cout << "Asegurese de crearlo en la misma carpeta antes de ejecutar." << endl;
    } else {
        cout << "\nResultados del analisis de 'documento.txt':" << endl;
        cout << "Total de lineas:     " << estadisticas[0] << endl;
        cout << "Total de palabras:   " << estadisticas[1] << endl;
        cout << "Total de caracteres: " << estadisticas[2] << endl;
    }
    return 0;
}
