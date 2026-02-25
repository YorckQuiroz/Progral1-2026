/*
Materia: Programación I, Paralelo 4 
Autor:  Yorck Legolas Quiroz Villalobos
Carnet:  10925362
Carrera del estudiante: Ingenieria de Sistemas  
Fecha creación: 24/02/2026
*/
#include <iostream>
using namespace std;
int main(){
	float prod,iva,n,totProd,total=0;
	do{
		cout<<"Ingrese el numero total de productos: ";
		cin>>n;
		if(n<1){
			cout<<"Intente nuevamente(Productos negativos). "<<endl;
		}
	}while(n<1);
	for(int i=1;i<=n;i++){
		do{
			cout<<"Ingrese el costo del producto "<<i<<" : ";
			cin>>prod;
			if(prod<1){
				cout<<"Precio invalido, intente nuevamente."<<endl;
			}
		}while(prod<1);
		iva=prod*0.13;
		totProd=prod+iva;
		total+=totProd;
		cout<<"Producto "<<i<<" : "<<prod<<" Bs. tras el cobro del IVA con 13% ahora vale: "<<totProd<<" Bs."<<endl;
	}
	cout<<"\nMonto total a pagar: "<<total<<" Bs."<<endl;
	return 0;
}
