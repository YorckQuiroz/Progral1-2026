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
	int n,i,cruz=0,moneda;
	srand(time(NULL));
	cout<<"Ingrese el numero de veces para lanzar la moneda: ";
	cin>>n;
	for(i=0;i<n;i++){
		moneda=rand()%2;
		if(moneda==1){
			cruz++;
		}
	}
	
	cout<<"El porcentaje de que salga cruz es de: "<<(cruz*100)/n<<"% de "<<n<<" veces lanzadas la moneda."<<endl;
	return 0;
}
