/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 5
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Pelicula {
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

vector<Pelicula> registrarPeliculas(int n) {
    vector<Pelicula> cartelera;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        Pelicula nuevaPelicula;
        cout << "\n--- Datos de la Pelicula " << i + 1 << " ---" << endl;
        cout << "Titulo: ";
        getline(cin, nuevaPelicula.titulo);
        cout << "Director: ";
        getline(cin, nuevaPelicula.director);
        cout << "Duracion (en minutos): ";
        cin >> nuevaPelicula.duracion;
        cout << "Anio de estreno: ";
        cin >> nuevaPelicula.anio_estreno;
        getline(cin, dummy);
        cout << "Genero: ";
        getline(cin, nuevaPelicula.genero);
        cartelera.push_back(nuevaPelicula);
    }

    return cartelera;
}
int buscarPorGenero(vector<Pelicula> cartelera, string generoBuscado) {
    int peliculasEncontradas = 0;
    cout << "   RESULTADOS DE BUSQUEDA POR GENERO: " << generoBuscado << endl;
    for (int i = 0; i < cartelera.size(); i = i + 1) {
        if (cartelera[i].genero == generoBuscado) {
            cout << "- " << cartelera[i].titulo << " (" << cartelera[i].anio_estreno << ") | Dir: " << cartelera[i].director << endl;
            peliculasEncontradas = peliculasEncontradas + 1;
        }
    }
    if (peliculasEncontradas == 0) {
        cout << "No se encontraron peliculas registradas en este genero." << endl;
    }
    return 1;
}
int buscarPorDirector(vector<Pelicula> cartelera, string directorBuscado) {
    int peliculasEncontradas = 0;
    cout << "  RESULTADOS DE BUSQUEDA POR DIRECTOR: " << directorBuscado << endl;
    for (int i = 0; i < cartelera.size(); i = i + 1) {
        if (cartelera[i].director == directorBuscado) {
            cout << "- " << cartelera[i].titulo << " (" << cartelera[i].anio_estreno << ") | Genero: " << cartelera[i].genero << endl;
            peliculasEncontradas = peliculasEncontradas + 1;
        }
    }
    if (peliculasEncontradas == 0) {
        cout << "No se encontraron peliculas registradas bajo este director." << endl;
    }
    return 1;
}
int main() {
    cout << "--- Sistema de Gestion de Peliculas ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (N) de peliculas a registrar: ";
    cin >> cantidad;
    if (cantidad <= 0) {
        cout << "Debe ingresar una cantidad estrictamente mayor a 0." << endl;
        return 1;
    }
    string dummy;
    getline(cin, dummy);
    vector<Pelicula> listaPeliculas = registrarPeliculas(cantidad);
    string generoDeseado;
    string directorDeseado;
    cout << "\nIngrese el genero que desea consultar: ";
    getline(cin, generoDeseado);
    int estadoGenero = buscarPorGenero(listaPeliculas, generoDeseado);
    cout << "\nIngrese el director que desea consultar: ";
    getline(cin, directorDeseado);
    int estadoDirector = buscarPorDirector(listaPeliculas, directorDeseado);
    return 0;
}
