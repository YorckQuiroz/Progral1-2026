/* Materia: Programación I, Paralelo 4 
Autor: Yorck Legolas Quiroz Villalobos
Carnet: 10925362 
Carrera del estudiante: Ingenieria de Sistemas 
Fecha creación: 18/02/2026 
*/
#include <iostream> 
using namespace std;
main(){
	int  suma, resta, mult;
	float num1, num2,div;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>num1;
	cout<<"Ingrese el segundo numero: "<<endl;
	cin>>num2;
	suma=num1+num2;
	resta=num1-num2;
	mult=num1*num2;
	div=num1/num2;
	cout<<"Suma = "<<suma<<endl<<"Resta = "<<resta<<endl<<"Multiplicacion = "<<mult<<endl<<"Division = "<<div<<endl;
	return 0;
	
}

