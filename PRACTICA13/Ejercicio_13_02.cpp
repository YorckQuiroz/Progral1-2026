/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 2
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Atleta {
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

vector<Atleta> registrarAtletas(int cantidad) {
    vector<Atleta> lista;
    string dummy;
    for (int i = 0; i < cantidad; i = i + 1) {
        Atleta nuevoAtleta;
        cout << "\n--- Datos del Atleta " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoAtleta.nombre);
        cout << "Pais: ";
        getline(cin, nuevoAtleta.pais);
        cout << "Edad: ";
        cin >> nuevoAtleta.edad;
        cout << "Mejor tiempo (en segundos): ";
        cin >> nuevoAtleta.mejor_tiempo;
        getline(cin, dummy);

        lista.push_back(nuevoAtleta);
    }
    return lista;
}
int buscarMejorAtleta(vector<Atleta> listaAtletas) {
    int indiceMejor = 0;
    int menorTiempo = listaAtletas[0].mejor_tiempo;
    for (int i = 1; i < listaAtletas.size(); i = i + 1) {
        if (listaAtletas[i].mejor_tiempo < menorTiempo) {
            menorTiempo = listaAtletas[i].mejor_tiempo;
            indiceMejor = i;
        }
    }
    return indiceMejor;
}
int mostrarGanador(Atleta a) {
    cout << "\n==========================================" << endl;
    cout << "   ATLETA CON EL MEJOR TIEMPO REGISTRADO  " << endl;
    cout << "==========================================" << endl;
    cout << "Nombre: " << a.nombre << endl;
    cout << "Pais: " << a.pais << endl;
    cout << "Tiempo: " << a.mejor_tiempo << " segundos" << endl;
    cout << "==========================================" << endl;  
    return 1;
}
int main() {
    cout << "--- Sistema de Registro de Atletas ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad de atletas a registrar: ";
    cin >> cantidad;
	if (cantidad <= 0) {
        cout << "Debe ingresar una cantidad estrictamente mayor a 0." << endl;
        return 1;
    }
	string dummy;
    getline(cin, dummy);
	vector<Atleta> competidores = registrarAtletas(cantidad);
    int indiceGanador = buscarMejorAtleta(competidores);
    int estadoProceso = mostrarGanador(competidores[indiceGanador]);

    return 0;
}
