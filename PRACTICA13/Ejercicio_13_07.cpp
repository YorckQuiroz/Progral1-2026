/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 07/06/2026
Número de ejercicio: 7
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct Producto {
    string nombre;       
    string codigo;      
    double precio;       
    int cantidad_en_inventario; 
    string observaciones; 
};
vector<Producto> registrarInventario(int n) {
    vector<Producto> lista;
    string dummy;
    for (int i = 0; i < n; i = i + 1) {
        Producto nuevoProducto;
        cout << "\n--- Datos del Producto " << i + 1 << " ---" << endl;
        cout << "Nombre: ";
        getline(cin, nuevoProducto.nombre);
        cout << "Codigo: ";
        getline(cin, nuevoProducto.codigo);
        cout << "Precio: ";
        cin >> nuevoProducto.precio;
        cout << "Cantidad en inventario: ";
        cin >> nuevoProducto.cantidad_en_inventario;
        getline(cin, dummy);
        if (nuevoProducto.cantidad_en_inventario < 5) {
            nuevoProducto.observaciones = "PRUDUCTO CON BAJA CANTIDAD DE INVENTARIO"; // 
        } else {
            nuevoProducto.observaciones = "Cantidad adecuada";
        }
        lista.push_back(nuevoProducto);
    }
    return lista;
}
int buscarProductoMasCaro(vector<Producto> lista) {
    int indiceMayor = 0;
    double precioMaximo = lista[0].precio;

    for (int i = 1; i < lista.size(); i = i + 1) {
        if (lista[i].precio > precioMaximo) {
            precioMaximo = lista[i].precio;
            indiceMayor = i;
        }
    }
    return indiceMayor;
}
int calcularTotalArticulos(vector<Producto> lista) {
    int total = 0;

    for (int i = 0; i < lista.size(); i = i + 1) {
        total = total + lista[i].cantidad_en_inventario;
    }
    return total;
}
int generarReporte(vector<Producto> lista, int indiceCaro, int totalArticulos) {
    cout << "           REPORTE DE INVENTARIO          " << endl;
    cout << "\n[PRODUCTO MAS CARO]" << endl;
    cout << "Nombre: " << lista[indiceCaro].nombre << endl;
    cout << "Codigo: " << lista[indiceCaro].codigo << endl;
    cout << "Precio: " << lista[indiceCaro].precio << endl;
    cout << "\n[CANTIDAD TOTAL EN INVENTARIO]" << endl;
    cout << "Hay un total de " << totalArticulos << " articulos fisicos registrados." << endl;
    cout << "\n[ESTADO DE OBSERVACIONES]" << endl;
    for (int i = 0; i < lista.size(); i = i + 1) {
        cout << "- " << lista[i].nombre << " (Stock: " << lista[i].cantidad_en_inventario << ") -> " << lista[i].observaciones << endl;
    }
    return 1;
}
int main() {
    cout << "--- Sistema de Gestion de Inventario ---" << endl;
    int cantidad;
    cout << "Ingrese la cantidad (N) de productos a registrar: ";
    cin >> cantidad;
    if (cantidad <= 0) {
        cout << "Debe registrar al menos 1 producto." << endl;
        return 1;
    }
    string dummy;
    getline(cin, dummy);
    vector<Producto> inventario = registrarInventario(cantidad);
    int indiceMasCaro = buscarProductoMasCaro(inventario);
    int totalEnStock = calcularTotalArticulos(inventario);
    int estadoProceso = generarReporte(inventario, indiceMasCaro, totalEnStock);
    return 0;
}
