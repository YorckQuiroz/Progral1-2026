// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 5
#include <iostream>
#include <vector>
using namespace std;
void combinarVectores(int n) {
    vector<int> A, B, C;
    int valor;
    cout << "Llenando Vector A:" << endl;
    for(int i = 0; i < n; i++) { cin >> valor; A.push_back(valor); }
    cout << "Llenando Vector B:" << endl;
    for(int i = 0; i < n; i++) { cin >> valor; B.push_back(valor); }
    
    // Combinación (Concatenación)
    for(int x : A) C.push_back(x);
    for(int x : B) C.push_back(x);
    
    cout << "Vector Combinado: ";
    for(int x : C) cout << x << " ";
}
int main() {
    int n;
    cout << "Dimensión N: "; cin >> n;
    combinarVectores(n);
    return 0;
}
