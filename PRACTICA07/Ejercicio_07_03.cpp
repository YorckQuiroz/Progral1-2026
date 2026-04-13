// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 3
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
void procesarNotas(int n) {
    vector<double> calificaciones, desviacion;
    double suma = 0, nota_ingresada, suma_cuadrados = 0;
    for(int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i+1 << ": ";
        cin >> nota_ingresada;
        calificaciones.push_back(nota_ingresada);
        suma += nota_ingresada;
    }
    double promedio = suma / n;
    for(int i = 0; i < n; i++) {
        double d = calificaciones[i] - promedio;
        desviacion.push_back(d);
        suma_cuadrados += pow(d, 2);
    }
    cout << "Nota\tDesviacion" << endl;
    for(int i = 0; i < n; i++) cout << calificaciones[i] << "\t" << desviacion[i] << endl;
    cout << "Varianza: " << suma_cuadrados / n << endl;
}
int main() {
    int n;
    cout << "N: "; cin >> n;
    procesarNotas(n);
    return 0;
}
