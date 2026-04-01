/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 2
*/
#include<iostream>
#include<cmath>
using namespace std;
float CalcularVolumen(float r, float h=10);
int pedirnum(int n1);

int main(){
	float num1=0;
	num1=pedirnum(num1);
	CalcularVolumen(num1);
}
int pedirnum(int n1) {
	cout<<"Ingrese el radio: ";
	cin>>n1;
	return n1;
}
float CalcularVolumen(float r, float h){
	float volumen=0,pi=3.14159;
	h=10;
	volumen=pi*(r*r)*h;
	cout<<"El volumen es: "<<volumen;
	return 0;
}
