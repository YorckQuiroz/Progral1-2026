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
int mayor(int n1, int n2 ,int n3);
int main(){
	int num1,num2,num3;
	cout<<"Ingrese el primer numero entero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero entero: ";
	cin>>num2;
	cout<<"Ingrese el tercer numero entero: ";
	cin>>num3;
	cout<<"El numero mayor es: "<<mayor(num1,num2,num3)<<endl;
	return 0;
}
int mayor(int n1, int n2 ,int n3){
	int mayor=0;
	if(n1>n2 and n1>n3){
		mayor=n1;
	}
	else if(n2>n3){
		mayor=n2;
	}
	else{
		mayor=n3;
	}
	return mayor;
}
