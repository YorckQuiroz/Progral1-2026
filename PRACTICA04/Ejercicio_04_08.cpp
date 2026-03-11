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
int dig (int numero);
int main(){
	int num;
	do{
	cout<<"Ingrese el numero: ";
	cin>>num;
	if (num<0){
		cout<<"Ingrese nuevamente.\n";
	}
	}while(num<0);
	cout<<"Cantidad de numero que componen a "<<num<<" es de "<<dig(num)<<" numeros";
	return 0;
}
int dig (int numero){
	int aux=0;
	while(numero>0){
		numero/=10;
		aux++;
	}
	return aux;
}
