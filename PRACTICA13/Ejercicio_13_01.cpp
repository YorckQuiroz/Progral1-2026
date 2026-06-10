/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 1
*/
#include <iostream>
#include <string>
using namespace std;
struct Libro {
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};
Libro registrarLibro() {
    Libro nuevoLibro;
    int estado_disponible;
    cout << "Ingrese el titulo del libro: ";
    getline(cin, nuevoLibro.titulo);
    cout << "Ingrese el autor del libro: ";
    getline(cin, nuevoLibro.autor);
    cout << "Ingrese el anio de publicacion: ";
    cin >> nuevoLibro.anio_publicacion;
    cout << "El libro esta disponible? (1 para Si, 0 para No): ";
    cin >> estado_disponible;
	if (estado_disponible == 1) {
        nuevoLibro.disponible = true;
    } else {
        nuevoLibro.disponible = false;
    }
    return nuevoLibro;
}
int mostrarLibro(Libro l) {
    cout << "\n--- Datos del Libro Registrado ---" << endl;
    cout << "Titulo: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Anio de publicacion: " << l.anio_publicacion << endl;
	if (l.disponible) {
        cout << "Estado: Disponible" << endl;
    } else {
        cout << "Estado: No disponible" << endl;
    }

    return 1;
}
int main() {
    cout << "--- Sistema de Registro de Biblioteca ---" << endl;
	Libro miLibro = registrarLibro();
    int estadoProceso = mostrarLibro(miLibro);
    return 0;
}
