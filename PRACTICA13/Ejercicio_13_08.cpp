/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 8
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct AtletaOlimpico {
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};
struct MedalleroDepto {
    string departamento;
    int total_medallas;
};
vector<AtletaOlimpico> registrarAtletas(int n) {
    vector<AtletaOlimpico> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        AtletaOlimpico nuevoAtleta;
        cout << "\n--- Datos del Atleta " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoAtleta.nombre);
        cout << "Departamento al que representa: ";
        getline(cin, nuevoAtleta.departamento);
        cout << "Deporte (Tiro con arco, Atletismo, Boxeo, etc.): ";
        getline(cin, nuevoAtleta.deporte);
        cout << "Cantidad de medallas ganadas: ";
        cin >> nuevoAtleta.medallas;
        getline(cin, dummy);
        lista.push_back(nuevoAtleta);
    }
    return lista;
}
vector<MedalleroDepto> calcularMedallero(vector<AtletaOlimpico> atletas) {
    vector<MedalleroDepto> medallero;
    for (int i = 0; i < atletas.size(); i = i + 1) {
        int encontrado = 0;
        for (int j = 0; j < medallero.size(); j = j + 1) {
            if (medallero[j].departamento == atletas[i].departamento) {
                medallero[j].total_medallas = medallero[j].total_medallas + atletas[i].medallas;
                encontrado = 1; 
            }
        }
        if (encontrado == 0) {
            MedalleroDepto nuevoRegistro;
            nuevoRegistro.departamento = atletas[i].departamento;
            nuevoRegistro.total_medallas = atletas[i].medallas;
            medallero.push_back(nuevoRegistro);
        }
    }
    return medallero;
}
int imprimirMedallero(vector<MedalleroDepto> medalleroFinal) {
    cout << "        MEDALLERO FINAL POR DEPARTAMENTO  " << endl;
    for (int i = 0; i < medalleroFinal.size(); i = i + 1) {
        cout << "- " << medalleroFinal[i].departamento << ": " << medalleroFinal[i].total_medallas << " medallas" << endl;
    }
    return 1;
}
int main() {
    cout << "--- Sistema de Olimpiada Nacional ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (N) de atletas a registrar: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Debe registrar al menos 1 atleta." << endl;
        return 1;
    }
    string dummy;
    getline(cin, dummy);
    vector<AtletaOlimpico> listaAtletas = registrarAtletas(cantidad);
    vector<MedalleroDepto> tablaMedallas = calcularMedallero(listaAtletas);
    int estadoProceso = imprimirMedallero(tablaMedallas);
    return 0;
}
