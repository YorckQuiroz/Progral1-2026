/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 4
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct empleado {
    string nombre;
    string genero;
    double salario;
};
vector<empleado> registrarEmpleados(int n) {
    vector<empleado> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        empleado nuevoEmpleado;
        cout << "\n--- Datos del Empleado " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoEmpleado.nombre);
        cout << "Genero: ";
        getline(cin, nuevoEmpleado.genero);
        cout << "Salario: ";
        cin >> nuevoEmpleado.salario;
        getline(cin, dummy);
        lista.push_back(nuevoEmpleado);
    }
    return lista;
}
int mostrarExtremosSalariales(vector<empleado> lista) {
    empleado empMayor = lista[0];
    empleado empMenor = lista[0];
    for (int i = 1; i < lista.size(); i = i + 1) {
        if (lista[i].salario > empMayor.salario) {
            empMayor = lista[i];
        }
        if (lista[i].salario < empMenor.salario) {
            empMenor = lista[i];
        }
    }
    cout << "           REPORTE DE SALARIOS            " << endl;
    cout << "\n[EMPLEADO CON MAYOR SALARIO]" << endl;
    cout << "Nombre: " << empMayor.nombre << endl;
    cout << "Genero: " << empMayor.genero << endl;
    cout << "Salario: " << empMayor.salario << endl;
    cout << "\n[EMPLEADO CON MENOR SALARIO]" << endl;
    cout << "Nombre: " << empMenor.nombre << endl;
    cout << "Genero: " << empMenor.genero << endl;
    cout << "Salario: " << empMenor.salario << endl;
    return 1;
}
int main() {
    cout << "--- Sistema de Personal de la UCB ---" << endl;

    int cantidad;
    cout << "Ingrese la cantidad (N) de trabajadores: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Debe ingresar una cantidad estrictamente mayor a 0." << endl;
        return 1;
    }
	string dummy;
    getline(cin, dummy);
    vector<empleado> trabajadores = registrarEmpleados(cantidad);
    int estadoProceso = mostrarExtremosSalariales(trabajadores);
    return 0;
}
