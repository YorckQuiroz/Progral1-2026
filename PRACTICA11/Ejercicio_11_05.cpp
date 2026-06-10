/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 5
*/

#include <iostream>
#include <vector>
using namespace std;
int sumarVector(vector<int> vec, int n) {
    if (n == 0) {
        return 0;
    } 
    else {
        return vec[n - 1] + sumarVector(vec, n - 1);
    }
}
int main() {
    int cantidad, elemento;
    vector<int> numeros;
    cout << "Ingrese la cantidad de elementos que tendra el vector: ";
    cin >> cantidad;
	if (cantidad < 0) {
        cout << "La cantidad de elementos no puede ser negativa." << endl;
        return 1;
    }
	for (int i = 0; i < cantidad; i = i + 1) {
        cout << "Ingrese el valor para la posicion " << i << ": ";
        cin >> elemento;
        numeros.push_back(elemento);
    }

    int suma = sumarVector(numeros, cantidad);
    cout << "La suma de todos los elementos del vector es: " << suma << endl;
    return 0;
}
