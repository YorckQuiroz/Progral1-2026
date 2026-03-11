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
int area(int b, int h);
int main(){
	int base,altura;
	cout<<"Ingrese la base del triangulo: ";
	cin>>base;
	cout<<"Ingrese la altura del triangulo: ";
	cin>>altura;
	cout<<"El area del triangulo es: "<<area(base,altura)<<endl;
	return 0;
}
int area(int b, int h){
	int area=0;
	area=(b*h)/2;
	return area;
}
