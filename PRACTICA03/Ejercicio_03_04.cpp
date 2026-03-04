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
	int n,i,sum=0,prom=0,may=0,men=1001,num,aux=0;
	srand(time(NULL));
	cout<<"Ingrese el numero de veces para generar un numero: ";
	cin>>n;
	for (i=1;i<=n;i++){
		num=rand()%1000+1;
		sum+=num;
		if (num>may){
			may=num;
		}
		if(num<men){
			men=num;
		}
	}
	prom=sum/n;
	cout<<"La suma de todos los numero es de: "<<sum<<" \nEl promedio es de: "<<prom<<" \nEl mayor es: "<<may<<" \nEl menor es: "<<men<<endl;
	return 0;
}
