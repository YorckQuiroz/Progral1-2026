/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 5
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
int actualizarPrecio(string productoBuscado, double nuevoPrecio) {
    ifstream archivoLectura("productos.txt");
    if (!archivoLectura.is_open()) {
        cout << "Error: No se pudo abrir el archivo 'productos.txt'." << endl;
        return -1;
    }
    vector<string> nombres;
    vector<double> precios;
    string productoLeido;
    double precioLeido;
    int encontrado = 0;
	while (archivoLectura >> productoLeido >> precioLeido) {
        if (productoLeido == productoBuscado) {
            precioLeido = nuevoPrecio;
            encontrado = 1;
        }
        
        nombres.push_back(productoLeido);
        precios.push_back(precioLeido);
    }
    archivoLectura.close();
	if (encontrado == 1) {
        ofstream archivoEscritura("productos.txt");
        
        for (int i = 0; i < nombres.size(); i = i + 1) {
            archivoEscritura << nombres[i] << " " << precios[i] << endl;
        }
        
        archivoEscritura.close();
        return 1;
    }
	return 0;
}

int main() {
    cout << "--- Actualizacion de Precios ---" << endl;
    
    string producto;
    double nuevoPrecio;
    
    cout << "Ingrese el nombre del producto a actualizar: ";
    cin >> producto;
    
    cout << "Ingrese el nuevo precio para " << producto << ": ";
    cin >> nuevoPrecio;
 	if (nuevoPrecio < 0) {
        cout << "El precio no puede ser un valor negativo." << endl;
        return 1;
    }
    int estado = actualizarPrecio(producto, nuevoPrecio);
    if (estado == 1) {
        cout << "Operacion exitosa: El precio de '" << producto << "' fue actualizado en el archivo." << endl;
    } else if (estado == 0) {
        cout << "Aviso: El producto '" << producto << "' no existe en el archivo." << endl;
    }
    return 0;
}
