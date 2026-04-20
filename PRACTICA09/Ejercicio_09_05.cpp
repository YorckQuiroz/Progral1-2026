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

const int MAX = 100;
int GenerarAleatorio(int LimInferior, int LimSuperior) {
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
void LlenarMatriz(int filas, int columnas, int matriz[MAX][MAX]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = GenerarAleatorio(1, 5); 
        }
    }
}
void MostrarMatriz(int filas, int columnas, int matriz[MAX][MAX]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }
}
void MultiplicarMatrices(int n, int m, int matrizA[MAX][MAX], int matrizB[MAX][MAX], int resultado[MAX][MAX]) {
    for (int i = 0; i < n; i++) {           
        for (int j = 0; j < n; j++) {       
            
            resultado[i][j] = 0;            
            
            for (int k = 0; k < m; k++) {   
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            
        }
    }
}

int main() {
    srand(time(0));
    int n = 0, m = 0;
    cout << "Ingrese el numero de filas de la matriz: ";
    cin >> n;
    cout << "Ingrese el numero de columnas de la matriz: ";
    cin >> m;

    if (n <= 0 or m <= 0 or n > MAX or m > MAX) {
        cout << "Error: N y M deben estar entre 1 y " << MAX << ".\n";
        return 1; 
    }
    int matrizA[MAX][MAX];
    int matrizB[MAX][MAX];
    int matrizResultado[MAX][MAX]; 

    LlenarMatriz(n, m, matrizA);
    LlenarMatriz(m, n, matrizB);

    cout << "\nMatriz A ("<<n<< "x" <<m<<")\n";
    MostrarMatriz(n, m, matrizA);

    cout << "\nMatriz B ("<<m<< "x" <<n<<")\n";
    MostrarMatriz(m, n, matrizB);

    // Multiplicamos
    MultiplicarMatrices(n, m, matrizA, matrizB, matrizResultado);

    cout << "\nMatriz Resultado A x B ("<<n<< "x" <<n<<")\n";
    MostrarMatriz(n, n, matrizResultado);
    return 0;
}
