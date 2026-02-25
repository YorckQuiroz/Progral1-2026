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
	int aux=0,num;
	cout<<"Ingrese un numero: ";
	cin>>num;
	for (int i=1;i<=(num/2);i++){
		if(num%i==0){
			aux+=i;
			}
		}
	if (aux==num){
		cout<<"El numero es perfecto. "<<endl;
	}
	else{
		cout<<"El numero no es perfecto."<<endl;
	}
	return 0;
}
