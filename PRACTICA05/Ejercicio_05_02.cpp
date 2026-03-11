/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362
Carrera del estudiante: Ingenieria de Sistemas
Fecha creación: 11/03/2026
*/
#include <iostream>
using namespace std;
float calcBase(int anios) {
    float base = 2300; 
    float bono = anios * 150.0,total=0;
	total = base+bono; 
    return total;
}
float calcCom(float ventas) {
	float total=0;
	total=ventas * 0.10;
    return total;
}
float calcTot(float base, float com) {
	float total=0;
	total=base+com;
    return total;
}
int main() {
    int n = 0,i = 0,anios = 0;
    float base = 0,ventas = 0,com = 0,tot = 0;
    cout << "Ingrese la cantidad de vendedoras (n): ";
    cin >> n;
    while (i < n) {
        cout << "\n--- Datos de la vendedora " << (i + 1) << " ---" << endl;
        cout << "Anios de antiguedad: ";
        cin >> anios;
        cout << "Monto total de ventas del mes en Bs: ";
        cin >> ventas;
        base = calcBase(anios);
        com = calcCom(ventas);
        tot = calcTot(base, com);
        cout << "-> Sueldo basico (por antiguedad): " << base << " Bs" << endl;
        cout << "-> Comision extra (10% de ventas): " << com << " Bs" << endl;
        cout << "-> Sueldo TOTAL a cancelar: " << tot << " Bs" << endl;
        i++;
    }
    
    return 0;
}
