/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 10
*/
#include <iostream>
#include <string>

using namespace std;
string capitalizarPalabras(string texto);

int main() {
    string frase;
    cout << "Ingrese un texto: ";
    getline(cin, frase);
    string resultado = capitalizarPalabras(frase);
    cout << "Salida: " << resultado << endl;
    return 0;
}
string capitalizarPalabras(string texto) {
    for (int i=0;i<texto.length();i++) {
        if (i==0 or texto[i-1]==' ') {
            if (texto[i]>='a' and texto[i]<='z') {
                texto[i] = texto[i] - 32;
            }
        }
    }
    return texto;
}

