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
double dolarP(double bolivianos);
double dolarO(double bolivianos);
int main (){
	int monto;
	cout<<"Ingrese el monto en bolivianos: ";
	cin>>monto;
	cout<<"El monto "<<monto<<"Bs. Equivale a:"<<endl<<"Dolar paralelo: "<<dolarP(monto)<<"\nDolar Oficial: "<<dolarO(monto);
	return 0;
}
double dolarP(double bolivianos){
	double valor=0;
	valor=bolivianos/9.31;
	return valor;
}
double dolarO(double bolivianos){
	double valor=0;
	valor=bolivianos/6.97;
	return valor;
}
