/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 7
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
    string entrada, salida = "";
    cout << "Ingrese una cadena con numeros: ";
    getline(cin, entrada);
    for (int i=0;i<entrada.length();i++) {
        if (entrada[i]<'0' or entrada[i]>'9') {
            salida+=entrada[i];
        }
    }
    cout<<"Salida: "<< salida<<endl;
    return 0;
}

