/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 8
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cadena, palabraAux="";
    char delimitador;
    cout <<"Ingrese la cadena: ";
    getline(cin,cadena);
    cout <<"Ingrese el delimitador (ejemplo: ,): ";
    cin >> delimitador;
    cout <<"\nSalida:" << endl;
    for (int i=0;i<cadena.length();i++) {
        if (cadena[i]!=delimitador) {
            palabraAux=palabraAux+cadena[i];
        } 
        else {
            if (palabraAux != "") {
                cout<<palabraAux<<endl;
                palabraAux="";
            }
        }
    }
    if (palabraAux!="") {
        cout<<palabraAux<<endl;
    }
    return 0;
}

