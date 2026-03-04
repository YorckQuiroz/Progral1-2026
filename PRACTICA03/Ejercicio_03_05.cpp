/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos 
Carnet: 10925362
Fecha creación: 03/03/2026 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int i,j,rep,aux,num,contPR=0;
	srand(time(NULL));
	cout<<"Ingrese el numero de repeticiones para generar los numeros aleatorio: ";
	cin>>rep;
	for (i=1;i<=rep;i++){
		num=rand()%10000 + 1;
		aux=0;
		for(j=1;j<=num;j++){
			if(num%j==0){
			aux++;
		}
		}
		if(aux==2){
			contPR++;
		}
	}
	cout<<"Numeros primos encontrados: "<<contPR<<endl;
	return 0;
}
