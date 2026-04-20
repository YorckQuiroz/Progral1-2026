/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 1
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>>

using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);


int main(){
	srand(time(0));
	vector<int>edades;
	vector<string>Nombres{"Mateo","Luis","Yorck","Rodrigo","Matias","Camilo","Carlos","Esteban","Javier","Santiago"};
	vector<string>Apellidos{"Quiroz","Miranda","Espinal","Smith","Flores","Avila","Rojas","Villalobos","Balcazar","Perez"};
	int n=0,PosNombre=0,PosApellido=0,PosEdades=0;
	cout<<"Ingrese el numero de combinaciones: ";
	cin>>n;
	for (int i=0;i<n;i++){
		edades.push_back(GenerarAleatorio(1,100));
		PosNombre=GenerarAleatorio(0,Nombres.size()-1);
		PosApellido=GenerarAleatorio(0,Apellidos.size()-1);
		PosEdades=GenerarAleatorio(0,edades.size()-1);
		
		cout<<"Persona "<<i+1<<": "<<Nombres[PosNombre]<<"  \t "<<Apellidos[PosApellido]<<"  \tEdad: "<<edades[PosEdades]<<" anios.\n";
		
	}
	
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}

