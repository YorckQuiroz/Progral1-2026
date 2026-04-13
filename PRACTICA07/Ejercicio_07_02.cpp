// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 2
#include <iostream>
#include <vector>
using namespace std;

void llenarVoltios(vector<double>& v) {
    double datos[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    for(double d : datos) v.push_back(d);
}
void mostrarVoltios(const vector<double>& v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
        if((i + 1) % 3 == 0) cout << endl;
    }
}
int main() {
    vector<double> voltios;
    llenarVoltios(voltios);
    mostrarVoltios(voltios);
    return 0;
}
