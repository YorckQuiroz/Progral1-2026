/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;

int main() {
    float num1, num2, num3, num4;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el tercer numero: ";
    cin>>num3;
    cout<<"Ingrese un cuarto numero: ";
    cin>>num4;
    if (num4==num1 or num4==num2 or num4==num3) {
        cout<<"El numero "<<num4<<" SI coincide con uno de los numeros introducidos anteriormente."	<<endl;
    } else {
        cout<<"El numero "<<num4<<" NO coincide con ninguno de los numeros introducidos."<<endl;
    }
    
    return 0;
}
