/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362
Carrera del estudiante: Ingenieria de Sistemas
Fecha creación: 11/03/2026
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
float volumen(float r, float h);
int main(){
	float radio,altura;
	cout<<"Ingrese el radio del cilindro: ";
	cin>>radio;
	cout<<"Ingrese el altura del cilindro: ";
	cin>>altura;
	cout<<"El volumen del cilindro es: "<<volumen(radio,altura)<<endl;
	return 0;
}
float volumen(float r, float h){
	float volumen=0,pi=3.14159;
	volumen=pi*r*r*h;
	return volumen;
}
