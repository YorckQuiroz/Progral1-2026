/*
Materia: Programación I, Paralelo 4 
Autor:  Yorck Legolas Quiroz Villalobos
Carnet:  10925362
Carrera del estudiante: Ingenieria de Sistemas  
Fecha creación: 24/02/2026
*/
#include <iostream>
using namespace std;
int main(){
	int num;
	double suma=0,aux=1;
	cout<<"Ingrese un numero: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		aux*=i;
		suma+=aux;
	}
	cout<<"\nSuma: "<<suma;
	return 0;
}
