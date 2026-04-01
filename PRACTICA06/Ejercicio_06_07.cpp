/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 7
*/
#include <iostream>

using namespace std;
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota);
double pedirnum(double n1);

int main() {
	double sumaT = 0, nuevaNota = 0;
    int n = 0, cantNotas = 0;
    cout << "Ingrese el numero de notas: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        do {
            cout << "Nota " << i << ", ";
            nuevaNota = pedirnum(nuevaNota);
            if (nuevaNota < 0 or nuevaNota > 100) {
                cout << "Nota invalida. Ingrese de nuevo.\n";
            }
        } while (nuevaNota < 0 or nuevaNota > 100); 
        agregarNota(sumaT, cantNotas, nuevaNota);
    }
    cout<<"\nSuma total de las notas: "<<sumaT<<"\nCantidad de notas totales: "<<cantNotas<<endl;
    return 0;
}
double pedirnum(double n1) {
    cout << "Ingrese el valor: ";
    cin >> n1;
    return n1;
}
void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++; 
}
