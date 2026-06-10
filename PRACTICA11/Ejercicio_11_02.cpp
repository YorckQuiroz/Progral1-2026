/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 2
*/
#include <iostream>
using namespace std;
int calcularPotencia(int a, int n) {
    if (n == 0) {
        return 1;
    } else {
        return a * calcularPotencia(a, n - 1);
    }
}

int main() {
    int base, exponente;
    cout << "Ingrese la base (a): ";
    cin >> base;
    cout << "Ingrese el exponente (n): ";
    cin >> exponente;
    if (exponente < 0) {
        cout << "Por favor, ingrese un exponente mayor o igual a 0." << endl;
        return 1; 
    }
    int resultado = calcularPotencia(base, exponente);
    cout << "El resultado de " << base << "^" << exponente << " es: " << resultado << endl;
    return 0;
}
