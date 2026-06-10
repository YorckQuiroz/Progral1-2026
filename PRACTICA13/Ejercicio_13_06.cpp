/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 6
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Empleado {
    string nombre;
    int id;
    double sueldo;
    int antiguedad;
};
vector<Empleado> registrarEmpleados(int n) {
    vector<Empleado> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        Empleado nuevoEmpleado;
        cout << "\n--- Datos del Empleado " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoEmpleado.nombre);
        cout << "ID: ";
        cin >> nuevoEmpleado.id;
        cout << "Sueldo: ";
        cin >> nuevoEmpleado.sueldo;
        cout << "Antiguedad (en anios): ";
        cin >> nuevoEmpleado.antiguedad;
        getline(cin, dummy);
        lista.push_back(nuevoEmpleado);
    }
    return lista;
}
int contarSueldoMayor(vector<Empleado> lista, double sueldoReferencia) {
    int contador = 0;
    for (int i = 0; i < lista.size(); i = i + 1) {
        if (lista[i].sueldo > sueldoReferencia) {
            contador = contador + 1;
        }
    }
    return contador;
}
double calcularPromedioAntiguedad(vector<Empleado> lista) {
    if (lista.size() == 0) {
        return 0.0;
    }
    double sumaAntiguedad = 0;
    for (int i = 0; i < lista.size(); i = i + 1) {
        sumaAntiguedad = sumaAntiguedad + lista[i].antiguedad;
    }
    return sumaAntiguedad / lista.size();
}
int main() {
    cout << "--- Sistema de Gestion de Empleados ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (N) de empleados a registrar: ";
    cin >> cantidad;
    if (cantidad <= 0) {
        cout << "Debe ingresar una cantidad estrictamente mayor a 0." << endl;
        return 1;
    }
    string dummy;
    getline(cin, dummy);
    vector<Empleado> listaEmpleados = registrarEmpleados(cantidad);
    double sueldoConsulta;
    cout << "\nIngrese el sueldo de referencia para consultar: ";
    cin >> sueldoConsulta;
    int empleadosSuperiores = contarSueldoMayor(listaEmpleados, sueldoConsulta);
    cout << "-> Hay " << empleadosSuperiores << " empleado(s) con un sueldo mayor a " << sueldoConsulta << "." << endl;
    double promedioGeneral = calcularPromedioAntiguedad(listaEmpleados);
    cout << "-> El promedio de antiguedad de la empresa es de " << promedioGeneral << " anios." << endl;
    return 0;
}
