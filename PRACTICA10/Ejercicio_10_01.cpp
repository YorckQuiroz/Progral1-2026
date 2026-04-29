/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 29/04/2026
Número de ejercicio: 1 
*/
#include <iostream>
#include <vector>
#include<ctime>
#include<cstdlib>
#include <string>
using namespace std;
int genAleatorio(int limInf, int limSup);
void procesarResultados(vector<string>&nombres,vector<double> &notas, double &promedio, int &aprobados, int n);
int main(){
	int aprobados=0,n=0;
	double promedio=0.0,notaFinal=0.0;
	vector<string> nombres ={"Mateo","Ronaldo","Reynaldo","Juan","Mauricio","Marco","Aracely","Adriana","Sabrina","Amilcar"};
	vector<double> notas;
	cout<<"Ingrese el numero de nombres y apellidos: ";
	cin>>n;
	procesarResultados(nombres,notas,promedio,aprobados,n);
}
void procesarResultados(vector<string>&nombres,vector<double> &notas, double &promedio, int &aprobados,int n){
	int posNombres=0,posApellido1=0,posApellido2=0,suma=0,contAprobados=0;
	double notaFinal=0.0;
	vector<string> apellidos ={"Quiroga","Serrano","Espinoza","Espinal","Villalobos","Joffre","Smith","Miranda","Cutipa","Chavez"};
	for(int i=0;i<n;i++){
		posNombres=genAleatorio(0,nombres.size()-1);
		posApellido1=genAleatorio(0,apellidos.size()-1);
		posApellido2=genAleatorio(0,apellidos.size()-1);
		notaFinal=genAleatorio(0.0,100.0);
		notas.push_back(notaFinal);
		suma=suma+notaFinal;
		promedio=suma/n;
		if(notaFinal>=51){
			contAprobados++;
		}
		else if(notaFinal>=45 and notaFinal<51){
			notas.push_back(51);
			contAprobados++;
		}
		cout<<"Nombre "<<i+1<<": "<<nombres[posNombres]<<" "<<apellidos[posApellido1]<<" "<<apellidos[posApellido2]<<"  \t\t"<<notas[i]<<endl;
	}
	cout<<"Promedio de la clase: "<<promedio<<"\nTotal de aprobados: "<<contAprobados;
}

int genAleatorio(int limInf, int limSup){
	int aleatorio=0;
	aleatorio=(rand()%(limSup-limInf +1))+limInf;
	return aleatorio;
}
ejercicio_1.cpp
Mostrando ejercicio_1.cpp
