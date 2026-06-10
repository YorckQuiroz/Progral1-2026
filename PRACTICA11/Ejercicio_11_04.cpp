/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 4
*/

#include <iostream>

using namespace std;
int calcularMCD(int a, int b) {
    if (b == 0) {
        return a;
    } 
    else {
        return calcularMCD(b, a % b);
    }
}
int main() {
    int num1, num2;
    cout << "Ingrese el primer numero entero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> num2;
	if (num1 < 0) {
        num1 = num1 * -1;
    }
    if (num2 < 0) {
        num2 = num2 * -1;
    }
    int mcd = calcularMCD(num1, num2);
    cout << "El Maximo Comun Divisor de los dos numeros es: " << mcd << endl;
    return 0;
}
