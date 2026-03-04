/*
Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos 
Carnet: 10925362
Fecha creación: 03/03/2026 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(NULL));
	int i,num,fact=1;
	num=rand()%10+1;
	for(i=1;i<=num;i++){
		fact*=i;
	}
	cout<<"El factorial de el numero: "<<num<<" es = "<<fact;
}
