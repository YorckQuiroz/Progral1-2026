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
bool par(int numero);
int main(){
	int num,operador=false;
	cout<<"Ingrese el numero: ";
	cin>>num;
	operador=par(num);
	if(num==0){
		cout<<"El numero es nuetro."<<endl;
	}
	else if(operador==true){
		cout<<"El numero es par."<<endl;
	}
	else{
		cout<<"El numero es impar."<<endl;
	}
	return 0;
}
bool par(int numero){
	bool aux=false;
	if(numero%2==0){
		aux=true;
	}
	else{
		aux=false;
	}
	return aux;
}
