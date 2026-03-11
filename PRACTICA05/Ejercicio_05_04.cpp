/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362
Carrera del estudiante: Ingenieria de Sistemas
Fecha creación: 11/03/2026
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int genPres() {
    return 10 + (rand() % 991); 
}
int genTarj() {
    int r = rand() % 6; 
    int t = 10;
    if (r == 1) {
		t = 20;
	}
    else if (r == 2) {
		t = 30;
	}
    else if (r == 3) {
		t = 50;
	}
    else if (r == 4) {
		t = 100;
	}
    else if (r == 5) {
		t = 200;
	}
    return t;
}
int calcCant(int pres, int tarj) {
    return pres / tarj; 
}
int calcYapa(int cant, int tarj) {
    return cant * (tarj / 2); 
}
int calcSobra(int pres, int tarj) {
    return pres % tarj; 
}
int main() {
    srand(time(0));
    int yapa = 0,cant = 0,pres = 0,i = 0,n = 0,sobra = 0,tarj = 0;
    cout << "Ingrese la cantidad de clientes a simular (N): ";
    cin >> n;
    while (i < n) {
        pres = genPres();
        tarj = genTarj();
        cant = calcCant(pres, tarj);
        yapa = calcYapa(cant, tarj);
        sobra = calcSobra(pres, tarj);   
        cout << "\nCliente " << (i + 1) <<": "<< endl;
        cout << "Presupuesto aleatorio: " << pres << " Bs" << endl;
        cout << "Tipo de tarjeta asignada: " << tarj << " Bs" << endl;
        if (cant > 0) {
            cout << "Tarjetas a comprar: " << cant << endl;
            cout << "Ahorro total (Yapa): " << yapa << " Bs" << endl;
        } else {
            cout << "El presupuesto no alcanza para esta tarjeta." << endl;
        }
        cout << "Cambio sobrante: " << sobra << " Bs" << endl;   
        i++;
    }
    return 0;
}
