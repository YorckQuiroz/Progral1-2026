/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos.
Fecha creación: 30/03/2025
Número de ejercicio: 5
*/
#include <iostream>
using namespace std;
double calcularArea(double valor1);
double calcularArea(double valor1,double valor2);
float calcularArea(float valor1, float pi);
float pedirnum(float n1);
double pedirnum(double n1);
int main(){
	int n=0;
	double lado=0.0,base=0.0,altura=0.0,area=0.0;
	float radio=0.0,pi=3.1416;
	do{
		cout<<"Seleccione una opcion: \n1.- Calcular Area de un cuadrado.\n2.- Calcular Area de un rectangulo.\n3.- Calcular Area de un circulo.\nIngrese: ";
		cin>>n;
		switch(n){
			case 1:
				lado=pedirnum(lado);
				area=calcularArea(lado);
				cout<<"El area de un cuadrado es = "<<area;
				break;
			case 2:
				base=pedirnum(base);
				altura=pedirnum(altura);
				area=calcularArea(base,altura);
				cout<<"El area de un rectangulo es = "<<area;
				break;
			case 3:
				radio=pedirnum(radio);
				area=calcularArea(radio,pi);
				cout<<"El area de un circulo es = "<<area;
				break;
			default:
				cout<<"Valor erroneo, vuelva a ingresar.\n";
		}
	}while(n<1 or n>3);
}

float pedirnum(float n1) {
    cout << "Ingrese el valor: ";
    cin >> n1;
    return n1;
}

double pedirnum(double n1) {
    cout << "Ingrese el valor: ";
    cin >> n1;
    return n1;
}

double calcularArea(double valor1){
	double area=0.0;
	area=valor1*valor1;
	return area;
}

double calcularArea(double valor1,double valor2){
	double area=0.0;
	area=valor1*valor2;
	return area;
}

float calcularArea(float valor1, float pi){
	float area=0.0;
	area=pi*(valor1*valor1);
	return area;
}

