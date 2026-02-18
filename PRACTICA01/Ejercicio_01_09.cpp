/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
int main() {
    int numero, unidades, decenas, centenas, millares;
    do {
        cout << "Ingrese un numero entero (entre 1 y 3999): ";
        cin >> numero;
        if (numero < 1 or numero > 3999) {//se introduce 3999 para poder limitar un rango al programa
            cout << "Numero fuera de rango. Intente nuevamente." << endl;
        }
    } while (numero < 1 or numero > 3999);
    cout << "El numero " << numero << " en romanos es: ";
    unidades = numero % 10;
    numero /= 10; 
    decenas = numero % 10;
    numero /= 10;
    centenas = numero % 10;
    numero /= 10;
    millares = numero % 10;
    numero /= 10;
    switch (millares) {
        case 1: cout << "M"; break;
        case 2: cout << "MM"; break;
        case 3: cout << "MMM"; break;
    }
    switch (centenas) {
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;
    }
    switch (decenas) {
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;
    }
    switch (unidades) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
    }
    
    return 0;
}
