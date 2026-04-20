/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 5 
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);
int main(){
	int n=0,m=0;
	cout<<"Ingrese el numero de filas: ";
	cin>>n;
	cout<<"Ingrese el numero de columnas: ";
	cin>>m;
	int matriz[n][m];
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			matriz[i][j]=GenerarAleatorio(1,10);
		}
	}
	cout<<"Matriz original: \n";
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<matriz[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\n\nMatriz traspuesta: \n";
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<matriz[j][i]<<"\t";
		}
		cout<<"\n";
	}
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

