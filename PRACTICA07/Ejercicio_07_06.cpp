// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 6
#include <iostream>
#include <vector>
using namespace std;
void sumarVectoresFijos() {
    vector<int> v1, v2, v3;
    int num;
    for(int i = 0; i < 5; i++) { cout << "v1[" << i << "]: "; cin >> num; v1.push_back(num); }
    for(int i = 0; i < 5; i++) { cout << "v2[" << i << "]: "; cin >> num; v2.push_back(num); }
    for(int i = 0; i < 5; i++) v3.push_back(v1[i] + v2[i]);
    
    cout << "v3 (suma): ";
    for(int x : v3) cout << x << " ";
}
int main() {
    sumarVectoresFijos();
    return 0;
}
