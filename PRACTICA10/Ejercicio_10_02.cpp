/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 29/04/2026
Número de ejercicio: 2
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);
void inicializarInventario(int bodega[6][6]);
void mostrarBodega(int bodega[6][6], vector<string> &nombres);
void mostrarSumaColumnas(int bodega[6][6], vector<int>&sumaPorColumna);
void balancearCarga(int bodega[6][6], int filaProducto, int &totalTransferido);

int main(){
	srand(time(0));
	vector<string>productos{"Celular","Laptop","TV","Switch","PS5","Xbox"};
	vector<int>Deposito;
	int bodega[6][6];
	int acumuladorTransferido=0;
	inicializarInventario(bodega);
	mostrarBodega(bodega,productos);
	mostrarSumaColumnas(bodega,Deposito);
	for(int i = 0; i < 6; i++) {
        balancearCarga(bodega, i, acumuladorTransferido);
    }
    cout<<"\n\nNueva Bodega:\n";
	mostrarBodega(bodega,productos);
	mostrarSumaColumnas(bodega,Deposito);
	cout<<"\nTotal de transferencias: "<<acumuladorTransferido<<endl;
}
void mostrarSumaColumnas(int bodega[6][6], vector<int>&sumaPorColumna){
	int columna=0;
	sumaPorColumna.clear();
	for(int j=0;j<6;j++){
		columna=0;
		for(int i=0;i<6;i++){
			columna+=bodega[i][j];			
		}
		sumaPorColumna.push_back(columna);
	}
	cout<<"\nSuma por columnas: \n";
	for(int i=0;i<6;i++){
		cout<<sumaPorColumna[i]<<"\t";
	}
}
void mostrarBodega(int bodega[6][6], vector<string>& nombres){
	for(int i=0;i<6;i++){
		cout << nombres[i] << ":  \t";
		for(int j=0;j<6;j++){
			cout<<bodega[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
void inicializarInventario(int bodega[6][6]){
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			bodega[i][j]=GenerarAleatorio(0,100);
		}
	}
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
void balancearCarga(int bodega[6][6], int filaProducto, int &totalTransferido){
	int excedente=0;
	for(int j=0;j<6;j++){
		if (bodega[filaProducto][j]>80){
			excedente=bodega[filaProducto][0]-80;
			bodega[filaProducto][j]=80;
			bodega[filaProducto][j+1]+=excedente;
			totalTransferido+=excedente;
			}
		}
	}
