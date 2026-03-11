/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362
Carrera del estudiante: Ingenieria de Sistemas
Fecha creación: 11/03/2026
*/
#include <iostream>
using namespace std;
int calcExt(int h) {
    int ext = 0;
    if (h > 8) {
        ext = h - 8;
    }
    return ext;
}
float calcBase(int h, float tar) {
    float base = h * tar;
    if (h > 8) {
        base = 8.0 * tar; 
    }
    return base;
}
float calcBono(int ext, float bono) {
    return ext * bono;
}
float calcSal(float base, float bTot) {
    return base + bTot;
}
int main() {
    int ext = 0,h = 0;
    float bTot = 0,base = 0,bono = 0,tar = 0,sal = 0;
    cout << "Ingrese las horas trabajadas: ";
    cin >> h;
    cout << "Ingrese la tarifa normal por hora en Bs: ";
    cin >> tar;
    cout << "Ingrese la bonificacion por cada hora extra (Bs): ";
    cin >> bono;
    ext = calcExt(h);
    base = calcBase(h, tar);
    bTot = calcBono(ext, bono);
    sal = calcSal(base, bTot);
    cout << "a. Salario total del trabajador: " << sal << " Bs" << endl;
    cout << "b. Salario bonificacion (por " << ext << " horas extra): " << bTot << " Bs" << endl;
    return 0;
}
