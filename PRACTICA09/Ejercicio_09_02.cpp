/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 2
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);

int main() {
    int n=0, a=0, b=0,suma_total=0,suma_ultima_columna=0,producto_ultima_fila=1,mayor=0,pos_fila=0,pos_columna=0;
    double varianza=0.0,desviacion_estandar=0.0;
    srand(time(0));
    cout << "Ingrese el tamano de la matriz (N x N): ";
    cin >> n;
    cout << "Ingrese el limite inferior para los numeros (A): ";
    cin >> a;
    cout << "Ingrese el limite superior para los numeros (B): ";
    cin >> b;
	int matriz[n][n]; 
    if (n<=0 or n>100 or a>b) {
        cout << "Valores invalidos. N debe estar entre 1 y 100, y A debe ser menor o igual a B.\n"; 
    	} 
    cout << "\nMatriz generada:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = GenerarAleatorio(a, b);
            cout << matriz[i][j] << "\t";
            suma_total += matriz[i][j];
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++) {
        suma_ultima_columna += matriz[i][n-1]; 
    }
    for (int j = 0; j < n; j++) {
        producto_ultima_fila *= matriz[n - 1][j];
    }
    mayor=matriz[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                pos_fila = i;
                pos_columna = j;
            }
        }
    }
    double media = (double)suma_total / (n * n);
    double suma_diferencias = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            suma_diferencias += (matriz[i][j] - media) * (matriz[i][j] - media);
        }
    }
    varianza = suma_diferencias/(n*n);
    desviacion_estandar = sqrt(varianza);
    cout << "1. Suma de la ultima columna: " << suma_ultima_columna << "\n";
    cout << "2. Producto total de la ultima fila: " << producto_ultima_fila << "\n";
    cout << "3. Mayor valor: " << mayor << " (Ubicado en la fila " << pos_fila << ", columna " << pos_columna << ")\n";
    cout << "4. Desviacion estandar de toda la matriz: " << desviacion_estandar << "\n";
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
