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
float distancia(float v, float t);
int main(){
	int velocidad,tiempo;
	cout<<"Ingrese el valor de la velocidad: ";
	cin>>velocidad;
	cout<<"Ingrese el valor del tiempo: ";
	cin>>tiempo;
	cout<<"La distancia recorrida es: "<<distancia(velocidad,tiempo);
	return 0;
}
float distancia(float v, float t){
	int d=0;
	d=v*t;
	return d;
}
