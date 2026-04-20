/*
Materia: Programación I, Paralelo 4
Autor: Yorck Legolas Quiroz Villalobos
Fecha creación: 20/04/2026
Número de ejercicio: 9
*/
#include <iostream>
#include <string>

using namespace std;
bool esPalindromo(string texto);

int main() {
    string frase;
    cout<<"Ingrese una palabra o frase: ";
    getline(cin, frase);
    if (esPalindromo(frase)) {
        cout<<"Es palindromo"<<endl;
    } else {
        cout<<"No es palindromo"<<endl;
    }
    return 0;
}
bool esPalindromo(string texto){
    string textoLimpio="";
    bool resultado=true;
    int inicio=0,fin=0;
    for (int i=0;i<texto.length();i++) {
        char c=texto[i];
        if (c>='A' and c<='Z') {
            c=c+32;
        }
		if (c>='a' and c<='z') {
            textoLimpio=textoLimpio+c;
        }
    }
    fin=textoLimpio.size()-1;
    while (inicio<fin and resultado==true) {
        if (textoLimpio[inicio]!=textoLimpio[fin]) {
            resultado=false;
        }
        inicio++;
        fin--;
    }
    return resultado;
}
