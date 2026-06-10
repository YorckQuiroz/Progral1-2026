/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 3
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Estudiante {
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};
vector<Estudiante> registrarEstudiantes(int n) {
    vector<Estudiante> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        Estudiante nuevoEstudiante;
        cout << "\n--- Datos del Estudiante " << i + 1 << " ---" << endl;
        cout << "Cedula: ";
        cin >> nuevoEstudiante.cedula;
        getline(cin, dummy);
        cout << "Nombre: ";
        getline(cin, nuevoEstudiante.nombre);
        cout << "Apellido: ";
        getline(cin, nuevoEstudiante.apellido);
        cout << "Edad: ";
        cin >> nuevoEstudiante.edad;

        getline(cin, dummy);

        cout << "Profesion: ";
        getline(cin, nuevoEstudiante.profesion);

        cout << "Lugar de nacimiento: ";
        getline(cin, nuevoEstudiante.lugar_nacimiento);
        cout << "Direccion: ";
        getline(cin, nuevoEstudiante.direccion);
		cout << "Telefono: ";
        cin >> nuevoEstudiante.telefono;
		getline(cin, dummy);
		lista.push_back(nuevoEstudiante);
    }
    return lista;
}
int mostrarEstudiantes(vector<Estudiante> lista) {
    cout << "\n==========================================" << endl;
    cout << "   LISTA DE ALUMNOS DE PROGRAMACION I     " << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < lista.size(); i = i + 1) {
        cout << "\n--- Alumno " << i + 1 << " ---" << endl;
        cout << "Cedula: " << lista[i].cedula << endl;
        cout << "Nombre: " << lista[i].nombre << endl;
        cout << "Apellido: " << lista[i].apellido << endl;
        cout << "Edad: " << lista[i].edad << endl;
        cout << "Profesion: " << lista[i].profesion << endl;
        cout << "Lugar de Nacimiento: " << lista[i].lugar_nacimiento << endl;
        cout << "Direccion: " << lista[i].direccion << endl;
        cout << "Telefono: " << lista[i].telefono << endl;
    }
    cout << "==========================================" << endl;
    return 1;
}
int main() {
    cout << "--- Sistema de Registro Programacion I ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (n) de alumnos a registrar: ";
    cin >> cantidad;
	if (cantidad <= 0) {
        cout << "Debe ingresar una cantidad estrictamente mayor a 0." << endl;
        return 1;
    }
	vector<Estudiante> estudiantesReg = registrarEstudiantes(cantidad);
    int estadoProceso = mostrarEstudiantes(estudiantesReg);
    return 0;
}
