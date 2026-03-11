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
float prom(float n1,float n2);
int main (){
	float nota1,nota2;
	do{
		cout<<"Ingrese la primera nota: ";
		cin>>nota1;
		cout<<"Ingrese la segunda nota: ";
		cin>>nota2;
		if (nota1<0 or nota2<0){
			cout<<"Ingrese nuevamente.\n";
		}
	}while(nota1<0 or nota2<0);
	cout<<"El promedio es de: "<<prom(nota1,nota2);
	return 0;
}
float prom(float n1,float n2){
	float prom=0;
	prom=(n1+n2)/2;
	return prom;
}
