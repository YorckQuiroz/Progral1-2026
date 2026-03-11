/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362
Carrera del estudiante: Ingenieria de Sistemas
Fecha creación: 11/03/2026
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int suma(int lim);
int main(){
	int n;
	cout<<"Ingrese el numero: ";
	cin>>n;
	cout<<"La sumatoria hasta "<<n<<" es = "<<suma(n)<<endl;
	return 0;
}
int suma(int lim){
	int suma=0;
	for (int i=1;i<=lim;i++){
		suma+=i;
	}
	return suma;
}

