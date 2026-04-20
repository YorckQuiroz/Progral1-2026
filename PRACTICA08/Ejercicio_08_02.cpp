/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 2
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int main(){
	vector<string>nombres1{"Juan","Maria","Pedro","Ana","Luis"};
	vector<string>nombres2{"Ana","Carlos","Pedro","Sofia","Luis"};
	vector<string>nombresRepetidos;
	cout<<"Lista 1: ";
	for(int i=0;i<nombres1.size();i++){
		cout<<nombres1[i]<<"  \t";
		for(int j=0;j<nombres2.size();j++){
			if (nombres2[j]==nombres1[i]){
				nombresRepetidos.push_back(nombres2[j]);
			}
		}
	}
	cout<<"\nLista 2: ";
	for(int i=0;i<nombres2.size();i++){
		cout<<nombres2[i]<<"  \t";
	}
	cout<<"\n\nClientes repetidos: ";
	for(int i=0;i<nombresRepetidos.size();i++){
		cout<<nombresRepetidos[i]<<"  \t";
	}
}

