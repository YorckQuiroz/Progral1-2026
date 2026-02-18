/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
int main() {
    int edad;
    cout << "Ingrese una edad: ";
    cin >> edad;
	if (edad >= 18 and edad <= 25) {
        cout<<"La edad introducida SI se encuentra en el rango [18-25]." << endl;
    } else {
        cout<<"La edad introducida NO se encuentra en el rango [18-25]." << endl;
    }
    return 0;
}
