/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 3
*/
#include<iostream>
#include<cmath>
using namespace std;

int ModificarValores(int valor1, int &valor2);
int pedirnum(int n1);
int main(){
	int num1=0,num2=0,modificado=0;
	num1=pedirnum(num1);
	num2=pedirnum(num2);
	cout<<"Los primero numeros recibidos fueron: "<<num1<<" y "<<num2;
	modificado=ModificarValores(num1,num2);
	cout<<"\nLos nuevos numeros tras cambiar los numero son: "<<num1<<" y "<<num2<<"\nCon un el valor 1 de: "<<modificado<<". tras el calculo de la Funcion.";
	return 0;
}
int pedirnum(int n1) {
	cout<<"Ingrese el valor: ";
	cin>>n1;
	return n1;
}
int ModificarValores(int valor1, int &valor2){
	int aux=0;
	aux=valor1*2;
	valor2+=10;
	return(aux);
}
