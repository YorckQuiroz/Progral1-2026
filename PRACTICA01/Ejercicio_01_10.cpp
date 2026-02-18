/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;

int main() {
    int mes;
    cout << "Ingrese un numero entre 1 y 12 para conocer el mes: ";
    cin >> mes;
    switch (mes) {
        case 1: cout<<"El mes 1 corresponde a Enero."<<endl;break;
        case 2: cout<<"El mes 2 corresponde a Febrero."<<endl;break;
        case 3: cout<<"El mes 3 corresponde a Marzo."<<endl;break;
        case 4: cout<<"El mes 4 corresponde a Abril."<<endl;break;
        case 5: cout<<"El mes 5 corresponde a Mayo."<<endl;break;
        case 6: cout<<"El mes 6 corresponde a Junio."<<endl;break;
        case 7: cout<<"El mes 7 corresponde a Julio."<<endl;break;
        case 8: cout<<"El mes 8 corresponde a Agosto."<<endl;break;
        case 9: cout<<"El mes 9 corresponde a Septiembre."<<endl;break;
        case 10: cout<<"El mes 10 corresponde a Octubre."<<endl;break;
        case 11: cout<<"El mes 11 corresponde a Noviembre."<<endl;break;
        case 12: cout<<"El mes 12 corresponde a Diciembre."<<endl;break;
        default: cout<<"Error: El numero ingresado no corresponde a ningun mes del anio." << endl; break;
    }
    return 0;
}
