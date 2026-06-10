/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 1
*/
#include <iostream>
using namespace std;
int sumarDigitos(int numero) {
    if (numero == 0) {
        return 0;
    } else {
        return (numero % 10) + sumarDigitos(numero / 10);
    }
}
int main() {
    int numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    if (numero < 0) {
        numero = numero * -1;
    }
    int resultado = sumarDigitos(numero);
    cout << "La suma de los digitos es: " << resultado << endl;
    return 0;
}
