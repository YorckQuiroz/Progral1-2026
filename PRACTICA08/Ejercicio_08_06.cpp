/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 6
*/
#include <iostream>
#include <string>

using namespace std;
int main() {
    string oracion,resultado="",palabraAux ="";    
    cout<<"Ingrese una oracion: ";
    getline(cin, oracion);
    for (int i=oracion.length()-1;i>=0;i--) {
        if (oracion[i]!=' ') {
            palabraAux=oracion[i]+palabraAux;
        }
        else {
            if (palabraAux!="") {
                resultado=resultado+palabraAux+" ";
                palabraAux="";
            }
        }
    }
    resultado=resultado+palabraAux;
    cout<<"Salida: "<<resultado<<endl;
    return 0;
}

