/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 4
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int n=0;
	cout<<"Ingrese el numero de la matriz cuadrada: ";
	cin>>n;
	if(n<0){
		cout<<"El numero ingresado debe ser mayor a 0.";
	}
	int matriz[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			matriz[i][j]=(i*2)+j+1;
		}
	}
	for(int i=0;i<n;i++){
		cout<<endl;
		for(int j=0;j<n;j++){
			cout<<matriz[i][j]<<"\t";
			
		}
	}
}
