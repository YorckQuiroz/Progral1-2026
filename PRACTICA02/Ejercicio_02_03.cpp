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
	int num,cont=0,suma=0;
	cout<<"Ingrese un numero: ";
	cin>>num;
	for(int i=0;i<num;i++){
		cont++;
		suma+=cont;
	}
	cout<<"La suma es: "<<suma<<endl;
	return 0;
}
