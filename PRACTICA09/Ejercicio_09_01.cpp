/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 1
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

int GenerarAleatorio(int LimInferior, int LimSuperior);
using namespace std;

int main() {
	srand(time(0));
    int filas=0, columnas=0,temp=0,numero=0;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;
	int matriz[filas][columnas];
    cout << "Ingrese los elementos de la matriz:\n\nPrimera matriz:";
    for (int i = 0; i < filas; i++) {
    	cout<<endl;
        for (int j = 0; j < columnas; j++) {
            numero=GenerarAleatorio(1,10);
			matriz[i][j]=numero;
			cout<<matriz[i][j]<<"\t";
        }
    }

    if (filas > 1) {
        for (int j = 0; j < columnas; j++) {
            temp=matriz[0][j];
            matriz[0][j] = matriz[filas - 1][j];
            matriz[filas - 1][j] = temp;
        }
    }
    cout << "\n\nLa matriz resultante es:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

