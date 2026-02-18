/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
int main() {
    float nota_practica, nota_teorica, nota_participacion, nota_final;
    cout << "Ingrese la nota de practicas: ";
    cin >> nota_practica;
    cout << "Ingrese la nota teorica: ";
    cin >> nota_teorica;
    cout << "Ingrese la nota de participacion: ";
    cin >> nota_participacion;
    nota_final = (nota_practica * 0.30) + (nota_teorica * 0.60) + (nota_participacion * 0.10);
    cout << "La nota final del estudiante es: " << nota_final << endl;
    
    return 0;
}
