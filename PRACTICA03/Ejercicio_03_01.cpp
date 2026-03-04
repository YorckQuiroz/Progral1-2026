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
	float n;
	int i=0,cont=0,dado;
	srand(time(NULL));
	cout<<"Ingrese el numero de veces para lanzar el dado: ";
	cin>>n;
	for(i=0;i<n;i++){
		dado=rand()%6+1;
		if(dado%2==0){
			cont++;
		}
	}
	
	cout<<"Numero de frecuencia que salio par es de: "<<(cont*100)/n<<"% de "<<n<<" veces lanzadas el dado."<<endl;
	return 0;
}
