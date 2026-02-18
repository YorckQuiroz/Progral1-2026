/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
main(){
	float precio,iva,total;
	cout<<"Ingrese el precio del producto: "<<endl;
	cin>>precio;
	iva=precio*0.13;
	total=precio+iva;
	cout<<"Total del IVA: "<<iva<<endl<<"Total a pagar con un IVA del 13%: "<<total<<endl;
	
	return 0;
	
}

