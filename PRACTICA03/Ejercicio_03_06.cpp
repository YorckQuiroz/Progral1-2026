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
	srand(time(NULL));
	int i,n,cons1,cons2,cons3,tot,edad,suma;
	do{
		cout<<"Ingrese el número de ninos: ";
		cin>>n;
		suma=0;
		cons1=0;
		cons2=0;
		cons3=0;
		
		for(i=0;i<n;i++){
			edad=rand()&3+1;
			suma+=edad;
			if(edad==3){
				cons1++;
			}
			else if (edad==2){
				cons2++;
			}
			else{
				cons3++;
			}
		}
		if(suma>n){
			cout<<"\nIngrese nuevamente, la suma ("<<suma<< ") supera al numero de ninos: ";
		}
	}while(suma>n);
	tot=(cons1*6)+(cons2*3)+(cons3*2);
	cout<<"Total de paniales consumidos: "<<tot;
	return 0;
}
