/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 5
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string email;
    int arrobas=0;
    int posicionArroba=-1;
    bool puntoDespuesDeArroba=false;
    cout<<"Ingrese su correo electronico: ";
    cin>>email;
    for (int i=0;i<email.length();i++) {
        if (email[i]=='@') {
            arrobas++;
            posicionArroba=i;
        }
    }
    if (arrobas==1) {
        for (int i=posicionArroba+1;i<email.length() and puntoDespuesDeArroba==false;i++) {
            if (email[i]=='.') {
                puntoDespuesDeArroba=true;
            }
        }
    }
    if (arrobas==1 and puntoDespuesDeArroba==true) {
        cout<<"Salida: Correo electronico valido"<<endl;
    } 
	else {
        cout<<"Salida: Correo electronico invalido"<<endl;
    }
    return 0;
}
