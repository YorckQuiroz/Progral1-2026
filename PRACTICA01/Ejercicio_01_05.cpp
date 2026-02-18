/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    float cateto1, cateto2, hipotenusa;
    cout << "Ingrese el valor del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese el valor del segundo cateto: ";
    cin >> cateto2;
    hipotenusa = sqrt((cateto1*cateto1) + (cateto2*cateto2));
    cout << "La hipotenusa del triangulo es: " << hipotenusa << endl;
    
    return 0;
}
