/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 1 
*/
#include <iostream>
using namespace std;
int IntercambiarValores(int &valor1, int &valor2);
int pedirnum(int n1);
int main (){
	int num1=0,num2=0;
	num1=pedirnum(num1);
	num2=pedirnum(num2);
	cout<<"Los numeros al inicio fueon: "<<num1<<" y "<<num2;
	IntercambiarValores(num1,num2);
	return 0;
}
int pedirnum(int n1) {
	cout<<"Ingrese el numero: ";
	cin>>n1;
	return n1;
}
int IntercambiarValores(int &valor1, int &valor2){
	int aux=valor1;
	valor1=valor2;
	valor2=aux;
	cout<<"\nAhora los numeros nuevos son: "<<valor1<<" y "<<valor2;
	return 0;
}
