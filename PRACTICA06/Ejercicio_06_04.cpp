/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 4
*/
#include <iostream>
using namespace std;
float CalcularPrecioTotal(float prec, float imp);
void opcion();
float pedirnum(); 

int main() {
    opcion();
    return 0; 
}
float pedirnum() {
    float n1;
    cout << "Ingrese el valor: ";
    cin >> n1;
    return n1;
}
float CalcularPrecioTotal(float prec, float imp) {
    float iva = 0.13, total = 0;
    if (imp==0) {
        imp=iva;
    } 
    else if (imp>=1) {
        imp=imp/100.0;
    }
    total=prec+(prec*imp);
    return total;
}
void opcion() {
    int n = 0;
    float precio = 0, impuesto = 0, total = 0;
    do {
        cout << "\t MENU DE OPCIONES " << endl;
        cout << "1.- Ingresar precio (aplica IVA por defecto 13%).\n2.- Ingresar precio e impuesto personalizado." << endl;
        cout << "Ingrese una opcion: ";
        cin >> n;
        switch(n) {
            case 1: 
                precio = pedirnum();
                impuesto = 0;
                total = CalcularPrecioTotal(precio, impuesto);
                cout << "El precio total a pagar es: " << total << "Bs. Calculado con una IVA del 13%";
                break;
            case 2:
                cout << "Ingrese el Precio en Bs." << endl;
                precio = pedirnum();
                cout << "Ingrese el impuesto. " << endl;
                impuesto = pedirnum();
                total = CalcularPrecioTotal(precio, impuesto);
                cout << "El precio total a pagar es: " << total << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }
    } while(n < 1 or n > 2); 
}
