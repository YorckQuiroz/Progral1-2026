/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 9
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Alumno {
    string nombre;
    double T1;
    double T2;
    double T3;
    double T4;
    double EF;
    double NP;
    double NF;
};
vector<Alumno> procesarAlumnos(int n) {
    vector<Alumno> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        Alumno nuevoAlumno;
        cout << "\n--- Datos del Alumno " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoAlumno.nombre);
        cout << "Nota T1: ";
        cin >> nuevoAlumno.T1;
        cout << "Nota T2: ";
        cin >> nuevoAlumno.T2;
        cout << "Nota T3: ";
        cin >> nuevoAlumno.T3;
        cout << "Nota T4: ";
        cin >> nuevoAlumno.T4;
        cout << "Nota Examen Final (EF): ";
        cin >> nuevoAlumno.EF;
        getline(cin, dummy);
        nuevoAlumno.NP = (nuevoAlumno.T1 + nuevoAlumno.T2 + nuevoAlumno.T3 + nuevoAlumno.T4) / 4.0;
        nuevoAlumno.NF = (0.7 * nuevoAlumno.NP) + (0.3 * nuevoAlumno.EF);
        lista.push_back(nuevoAlumno);
    }
    return lista;
}
int mostrarEstadisticas(vector<Alumno> lista) {
    double sumaTotal = 0.0;
    double notaMinima = lista[0].NF;
    double notaMaxima = lista[0].NF;
    string mejorAlumno = lista[0].nombre;
    string peorAlumno = lista[0].nombre;
    cout << "           NOTAS FINALES DEL CURSO        " << endl;
    for (int i = 0; i < lista.size(); i = i + 1) {
        cout << "- " << lista[i].nombre << " | NP: " << lista[i].NP << " | NF: " << lista[i].NF << endl;
        sumaTotal = sumaTotal + lista[i].NF;
        if (lista[i].NF > notaMaxima) {
            notaMaxima = lista[i].NF;
            mejorAlumno = lista[i].nombre;
        }
        if (lista[i].NF < notaMinima) {
            notaMinima = lista[i].NF;
            peorAlumno = lista[i].nombre;
        }
    }
    double promedioCurso = sumaTotal / lista.size();
    cout << "           ESTADISTICAS GENERALES         " << endl;
    cout << "Promedio del curso: " << promedioCurso << endl;
    cout << "Nota maxima: " << notaMaxima << " (" << mejorAlumno << ")" << endl;
    cout << "Nota minima: " << notaMinima << " (" << peorAlumno << ")" << endl;
    return 1;
}
int main() {
    cout << "--- Sistema de Calificaciones ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (N) de alumnos: ";
    cin >> cantidad;
    if (cantidad <= 0) {
        cout << "Debe registrar al menos 1 alumno para calcular estadisticas." << endl;
        return 1;
    }
    string dummy;
    getline(cin, dummy);
    vector<Alumno> alumnosRegistrados = procesarAlumnos(cantidad);
    int estadoProceso = mostrarEstadisticas(alumnosRegistrados);
    return 0;
}
