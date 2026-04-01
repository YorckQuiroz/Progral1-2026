/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 6
*/
#include <iostream>
using namespace std;
void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos);
int pedirnum(int n1);
int main(){
	int totalSegundos=0,horas=0,minutos=0,segundos=0;
	totalSegundos=pedirnum(totalSegundos);
	calcularTiempo(totalSegundos,horas,minutos,segundos);	
	return 0;
}
int pedirnum(int n1) {
    cout << "Ingrese el valor: ";
    cin >> n1;
    return n1;
}

void calcularTiempo(int totalSegundos, int &horas, int &minutos, int &segundos){
	int aux=totalSegundos;
	horas=totalSegundos/3600;
	totalSegundos=totalSegundos%3600;
	minutos=totalSegundos/60;
	totalSegundos=totalSegundos%60;
	segundos=totalSegundos;
	cout<<"Total de segundos: "<<totalSegundos<<"\nTotal horas: "<<horas<<"\nTotal minutos: "<<minutos<<"\nTotal segundos: "<<segundos;
}
