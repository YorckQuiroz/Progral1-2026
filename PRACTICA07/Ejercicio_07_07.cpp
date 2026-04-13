// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 7
#include <iostream>
#include <vector>
using namespace std;
void llenarCondicional() {
    vector<int> datos;
    int entrada = 0;
    while(datos.size() < 10 && entrada >= 0) {
        cout << "Número (negativo para parar): ";
        cin >> entrada;
        if(entrada >= 0) {
            datos.push_back(entrada);
        }
    }
    cout << "Elementos introducidos: ";
    for(int val : datos) cout << val << " ";
}
int main() {
    llenarCondicional();
    return 0;
}
