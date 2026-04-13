// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 4
#include <iostream>
#include <vector>
using namespace std;
void multiplicar(int n) {
    vector<int> v1, v2, v3;
    int aux;
    for(int i=0; i<n; i++) { cout << "v1[" << i << "]: "; cin >> aux; v1.push_back(aux); }
    for(int i=0; i<n; i++) { cout << "v2[" << i << "]: "; cin >> aux; v2.push_back(aux); }
    for(int i=0; i<n; i++) v3.push_back(v1[i] * v2[i]);
    
    cout << "Resultado: ";
    for(int x : v3) cout << x << " ";
}

int main() {
    int n; cin >> n; multiplicar(n);
    return 0;
}
