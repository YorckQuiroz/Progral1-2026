/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 3
*/
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;
const int FILAS = 3;
const int COLUMNAS = 4;

int GenerarAleatorio(int LimInferior, int LimSuperior);
void MostrarMatriz(char matriz[FILAS][COLUMNAS]);
void FilasYColumnasLibres(char matriz[FILAS][COLUMNAS]);
void PosicionesVectores(char matriz[FILAS][COLUMNAS], int vecFilas[], int vecCols[], int &cantidad);
int TotalMuertos(char matriz[FILAS][COLUMNAS]);

int main() {
    srand(time(0));
    int vectorF[FILAS * COLUMNAS];
    int vectorC[FILAS * COLUMNAS];
    int cantidadZombies = 0,aleatorio=0,total=0,muertosEnColumnaCero=0;
    char complejo[FILAS][COLUMNAS];
    
	for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            aleatorio = GenerarAleatorio(0, 1);
            if (aleatorio == 0) {
                complejo[i][j] = 'o';
            } else {
                complejo[i][j] = 'x';
            }
        }
    }

    cout << "a) Mostrar matriz\n";
    MostrarMatriz(complejo);

    cout << "b) ";
    FilasYColumnasLibres(complejo);

    cout << "c) Posiciones en la matriz:\n";
    PosicionesVectores(complejo, vectorF, vectorC, cantidadZombies);

    cout << "d) total muertos vivientes: ";
    total = TotalMuertos(complejo);
    cout << total << "\n";

    cout << "e) ";
    for (int i = 0; i < FILAS; i++) {
        if (complejo[i][0] == 'x' or complejo[i][0] == 'X') {
            muertosEnColumnaCero++;
        }
    }
    if (muertosEnColumnaCero >= 2) {
        cout<<"no es posible entrar al complejo!\n";
    } else {
        cout<<"es posible entrar al complejo!\n";
    }
    return 0;
}

int GenerarAleatorio(int LimInferior, int LimSuperior) {
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

void MostrarMatriz(char matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }
}
void FilasYColumnasLibres(char matriz[FILAS][COLUMNAS]) {
    int filasLibres = 0;
    int columnasLibres = 0;
    bool tieneMuerto = true;
    for (int i = 0; i < FILAS; i++) {
        tieneMuerto = false;
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j]=='x' or matriz[i][j]=='X') {
                tieneMuerto = true;
            }
        }
        if (tieneMuerto == false) {
            filasLibres++;
        }
    }
    for (int j=0;j<COLUMNAS;j++) {
    	tieneMuerto = false;
        for (int i=0;i<FILAS;i++) {
            if (matriz[i][j]=='x' or matriz[i][j]=='X') {
                tieneMuerto = true;
            }
        }
        if (tieneMuerto==false) {
            columnasLibres++;
        }
    }
    cout<<"filas libres: "<<filasLibres<<"\n";
    cout<<"columnas libres: "<<columnasLibres<<"\n";
}
void PosicionesVectores(char matriz[FILAS][COLUMNAS], int vecFilas[], int vecCols[], int &cantidad) {
    cantidad = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j]=='x' or matriz[i][j]=='X') {
                vecFilas[cantidad]=i;
                vecCols[cantidad]=j;
                cout<<vecFilas[cantidad]<<" -- "<<vecCols[cantidad]<<"\n";
                cantidad++;
            }
        }
    }
}
int TotalMuertos(char matriz[FILAS][COLUMNAS]) {
    int contador = 0;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz[i][j]=='x' or matriz[i][j]=='X') {
                contador++;
            }
        }
    }
    return contador;
}
