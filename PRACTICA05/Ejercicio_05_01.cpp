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
float genSuma(int n) {
    float suma = 0.0;
    int i = 0;
    float p;
    while (i < n) {
        p = 20 + (rand() % 31); 
        suma = suma + p;
        i++;
    }
    return suma * 1.13; 
	}
float calcTot(float suma) {
    float tot = suma;
    if (suma > 2500.0) {
        tot = suma - (suma * 0.05);
    }    
    return tot;
	}
float calcIva(float tot) {
    return tot * 0.13;
	}
int main() {
    srand(time(0)); 
    int n = 0;
    cout << "Ingrese la cantidad de productos vendidos en el dia: ";
    cin >> n;
    float suma = genSuma(n);
    float tot = calcTot(suma);
    float iva = calcIva(tot);
    cout << "Suma facturada inicial: " << suma << " Bs" << endl;
    cout << "Suma TOTAL de ventas (con o sin descuento): " << tot << " Bs" << endl;
    cout << "Pago de IVA (13%) a Impuestos Nacionales: " << iva << " Bs" << endl;
    return 0;
	}
