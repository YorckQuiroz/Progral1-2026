/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 3
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int GenerarAleatorio(int LimInferior, int LimSuperior);

int main(){
	srand(time(0));
	vector<int>notas;
	int n=0;
	float rep=0.0,reg=0.0,buenos=0.0,exc=0.0,c1=0.0,c2=0.0,c3=0.0,c4=0.0;
	cout<<"Ingrese el numero de calificaciones a generar: ";
	cin>>n;
	cout<<"Notas: ";
	for(int i=0;i<n;i++){
		notas.push_back(GenerarAleatorio(0,100));
		cout<<notas[i]<<"   ";
		if(notas[i]>=90){
			c1++;
		}
		else if(notas[i]>=80){
			c2++;
		}
		else if(notas[i]>60){
			c3++;
		}
		else{
			c4++;
		}
	}
	exc=(c1/notas.size())*100;
	buenos=(c2/notas.size())*100;
	reg=(c3/notas.size())*100;
	rep=(c4/notas.size())*100;	
	cout<<"\nReprobados: "<<rep<<"%\nRegulares: "<<reg<<"%\nBuenos: "<<buenos<<"%\nExcelentes: "<<exc<<"%";
}

int GenerarAleatorio(int LimInferior, int LimSuperior)
{
    int aleatorio = 0;
    aleatorio = ( rand() % ( LimSuperior - LimInferior + 1) ) + LimInferior;
    return aleatorio;
}
