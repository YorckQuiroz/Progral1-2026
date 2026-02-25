/*
Materia: Programación I, Paralelo 4 
Autor:  Yorck Legolas Quiroz Villalobos
Carnet:  10925362
Carrera del estudiante: Ingenieria de Sistemas  
Fecha creación: 24/02/2026
*/
#include <iostream>
using namespace std;
main(){
	int num,contT=0,contP=0,contI=0,contPR=0;
	do{
		cout<<"Ingrese un numero entre 0 y 100: (Ingrese 0 para salir) ";
		cin>>num;
		if(num>0 and num<101){
			contT+=num;		
			if(num%2==0){
				contP+=num;
			}
			else{
				contI+=num;
			}
		}
		else {
			cout<<"Numero fuera de rango, intente de nuevo:"<<endl;
		}
		int aux=0;
		for(int i=1;i<=num;i++){
			if(num%i==0){
				aux++;
			}
		}
		if (aux==2){
			contPR+=num;
		}
	}while(num!=0);
	cout<<"suma total: "<<contT<<endl;
	cout<<"suma total de pares: "<<contP<<endl;
	cout<<"suma total de impares: "<<contI<<endl;
	cout<<"suma total de numeros primos: "<<contPR<<endl;
	
	return 0;	
}
