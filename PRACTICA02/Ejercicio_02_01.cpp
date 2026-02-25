/*
Materia: Programación I, Paralelo 4 
Autor:  Yorck Legolas Quiroz Villalobos
Carnet:  10925362
Carrera del estudiante: Ingenieria de Sistemas  
Fecha creación: 24/02/2026
*/
#include <iostream>
using namespace std;
main(){
	int num,oper;
	do{
		cout<<"Ingrese un numero entre 1 y 10: "<<endl;
		cin>>num;
		if(num<1 or num>10){
			cout<<"Fuera del rango, ingrese de nuevo."<<endl;
		}
	}while((num<1 or num>10));
	switch(num) {
        case 1:
            cout<<"\tTabla del "<<num<<endl;break;
        case 2:
			cout<<"\tTabla del "<<num<<endl;break;
		case 3:
            cout<<"\tTabla del "<<num<<endl;break;
        case 4:
			cout<<"\tTabla del "<<num<<endl;break;
		case 5:
            cout<<"\tTabla del "<<num<<endl;break;
        case 6:
			cout<<"\tTabla del "<<num<<endl;break;
		case 7:
            cout<<"\tTabla del "<<num<<endl;break;
        case 8:
			cout<<"\tTabla del "<<num<<endl;break;
		case 9:
            cout<<"\tTabla del "<<num<<endl;break;
        case 10:
			cout<<"\tTabla del "<<num<<endl;break;
		}
	for (int i=1;i<=10;i++){
		switch(num) {
        case 1:
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
        case 2:
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
		case 3:
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
        case 4:
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
		case 5:
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
        case 6:
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
		case 7:
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
        case 8:
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
		case 9:
            cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
        case 10:
			cout<<num<<" x "<<i<<" = "<<num*i<<endl;break;
		}
	}
	return 0;
}
