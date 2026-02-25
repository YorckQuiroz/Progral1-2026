/*
Materia: Programación I, Paralelo 4 
Autor:  Yorck Legolas Quiroz Villalobos
Carnet:  10925362
Carrera del estudiante: Ingenieria de Sistemas  
Fecha creación: 24/02/2026
*/
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int num,cont=0,gen;
	gen=rand()%100+1;
	cout<<gen<<endl;
	do{
		cout<<"Piense e ingrese en un numero entre 1 y 100: ";
		cin>>num;
		if(num>=1 and num<101){
			if(num==gen){
				cout<<"Acertaste!"<<endl;
			}
			else if(num<gen){
				cout<<"El numero esta por encima de: "<< num<<endl;
			}
			else if(num>gen){
				cout<<"El numero esta por debajo de: "<<num<<endl;
			}
		}
		else{
			cout<<"Numero fuera del rango."<<endl;
			cont--;
		}
		cont++;
	}while(num!=gen or (num<1 or num>100));
	cout<<"Total de intentos: "<<cont;
	return 0;
}
