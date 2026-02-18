/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
int main() {
    int edad;
    char sexo;
    float altura;
    do {
        cout<<"Ingrese su edad: "<<endl;
        cin >> edad;
        if (edad<0 or edad>100) {
            cout<<"Edad invalida, intente nuevamente."<<endl;
        } 
    } while(edad<0 or edad>100);
    do {
        cout<<"Ingrese su sexo (M/F): "<<endl;
        cin >> sexo;
        if (sexo!='M' and sexo!='F') { 
            cout<<"Tipo de caracter en opción Sexo erroneo, intente nuevamente." << endl;
        }
    } while(sexo!='M' and sexo!='F');
    do {
        cout<<"Ingrese su altura(metros): "<<endl;
        cin >> altura;
        if (altura < 0) { 
            cout<<"Altura invalida, intente nuevamente."<<endl;
        }        
    } while(altura < 0);
    if (sexo=='M') {
        cout<<"Edad: "<<edad<<endl<<"Sexo: "<<"Masculino"<<endl<<"Altura: "<<altura<<endl;	
    } else {
        cout<<"Edad: "<<edad<<endl<<"Sexo: "<<"Femenino"<<endl<<"Altura: "<<altura<<endl;
    }
    
    return 0;
}
