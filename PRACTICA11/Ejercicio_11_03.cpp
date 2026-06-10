/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 3
*/

#include <iostream>
using namespace std;
int calcularFibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
    }
}
int main() {
    int n;   
    cout << "Ingrese la posicion (n) de la secuencia de Fibonacci que desea encontrar: ";
    cin >> n;
	if (n < 0) {
        cout << "La secuencia de Fibonacci no esta definida para posiciones negativas. Intente con un numero mayor o igual a 0." << endl;
        return 1;
    }
    int resultado = calcularFibonacci(n);
    cout << "El numero en la posicion " << n << " de la secuencia de Fibonacci es: " << resultado << endl;
    return 0;
}
