/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 6
*/

#include <iostream>
#include <vector>

using namespace std;
int compararVectores(vector<int> v1, vector<int> v2, int n) {
    if (n == 0) {
        return 1; 
    }
    else if (v1[n - 1] != v2[n - 1]) {
        return 0; 
    }
    else {
        return compararVectores(v1, v2, n - 1);
    }
}
int main() {
    int cantidad1, cantidad2, elemento;
    vector<int> vector1, vector2;
	cout << "Ingrese la cantidad de elementos para el primer vector: ";
    cin >> cantidad1;

    if (cantidad1 < 0) {
        cout << "La cantidad no puede ser negativa." << endl;
        return 1;
    }
    for (int i = 0; i < cantidad1; i = i + 1) {
        cout << "Vector 1 - Ingrese el valor para la posicion " << i << ": ";
        cin >> elemento;
        vector1.push_back(elemento);
    }
    cout << "Ingrese la cantidad de elementos para el segundo vector: ";
    cin >> cantidad2;
	if (cantidad2 < 0) {
        cout << "La cantidad no puede ser negativa." << endl;
        return 1;
    }
    for (int i = 0; i < cantidad2; i = i + 1) {
        cout << "Vector 2 - Ingrese el valor para la posicion " << i << ": ";
        cin >> elemento;
        vector2.push_back(elemento);
    }
	if (cantidad1 != cantidad2) {
        cout << "Los vectores tienen tamanos diferentes, por lo tanto NO son iguales." << endl;
    } else {
        int resultado = compararVectores(vector1, vector2, cantidad1);
        if (resultado == 1) {
            cout << "Los vectores son EXACTAMENTE iguales." << endl;
        } else {
            cout << "Los vectores NO son iguales." << endl;
        }
    }
    return 0;
}
