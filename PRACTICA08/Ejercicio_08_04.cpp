/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 4
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int GenerarAleatorio(int LimInferior, int LimSuperior);

int main() {
    srand(time(0));
    vector<int> Pixeles;
    int n=0,indice=0, valor=0, inicio=0, fin=0;
    int contadores[26] = {0}; 
    cout << "Ingrese el numero de Pixeles de la imagen: ";
    cin >> n;

    cout << "Pixeles generados: ";
    for(int i = 0; i < n; i++) {
        valor=GenerarAleatorio(0, 255);
        Pixeles.push_back(valor);
        cout<<valor<<" ";
        indice=valor/10;
        contadores[indice]++;
    }
    cout << "\n\nSalida:" << endl;
    for(int i = 0; i < 26; i++) {
        inicio = i * 10;
        fin = inicio + 9;
        if (fin > 255) {
        	fin = 255;		
		}
        if (contadores[i] > 0) {
            cout << inicio << "-" << fin << ": " << contadores[i] << " pixeles" << endl;
        }
    }

    return 0;
}
int GenerarAleatorio(int LimInferior, int LimSuperior) {
    int aleatorio = 0;
    aleatorio = (rand() % (LimSuperior - LimInferior + 1)) + LimInferior;
    return aleatorio;
}

