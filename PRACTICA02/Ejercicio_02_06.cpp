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
	int num1,num2;
	do{
		cout<<"Ingrese el primer numero: ";
		cin>>num1;
		cout<<"Ingrese el segundo numero: ";
		cin>>num2;
		if(num1==num2){
			cout<<"Ambos numeros son iguales, vuelva a ingresar. "<<endl;
		}
	}while(num1==num2);
	if (num1>num2){
		cout<<"Orden descendente: ";
		for(int i=num1;i>=num2;i--){
			cout<<i<<", ";
		}
	}
	else{
		
		for(int i=num1;i<=num2;i++){
			cout<<i<<", ";
		}
	}
	return 0;
}
