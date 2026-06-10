/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 7
*/
#include <iostream>
using namespace std;
int calcularQ(int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return (n * n) + calcularQ(n - 1);
    }
}
int main() {
    int n;
    
    cout << "Ingrese el valor de n para calcular Q(n): ";
    cin >> n;
	if (n < 0) {
        cout << "Por favor, ingrese un valor de n mayor o igual a 0." << endl;
        return 1;
    }
    int resultado = calcularQ(n);
    cout << "El resultado de la funcion Q(" << n << ") es: " << resultado << endl;
    return 0;
}
