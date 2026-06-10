/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 8
*/
#include <iostream>
using namespace std;
int conjeturaUllman(int n) {
    cout << n << "\t"; 
    if (n == 1) {
        return 1;
    } 
    else if (n % 2 == 0) {
        return conjeturaUllman(n / 2);
    } 
    else {
        return conjeturaUllman((n * 3) + 1);
    }
}
int main() {
    int n;
    cout << "Ingrese un numero entero mayor a 1: ";
    cin >> n;
    if (n <= 1) {
        cout << "Error: El numero debe ser estrictamente mayor a 1." << endl;
        return 1;
    }
    cout << "La secuencia de Ullman para " << n << " es: " << endl;
    int resultado_final = conjeturaUllman(n);
    cout << endl;
    return 0;
}
