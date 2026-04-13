// Materia: Programación I, Paralelo 4
// Autor: Yorck Legolas Quiroz Villalobos
// Fecha creación: 13/04/2026
// Número de ejercicio: 1
#include <iostream>
#include <vector>
#include <random>
#include <ctime>
using namespace std;
void genVoltajes(vector<double>& v) {
    for(int i = 0; i < 100; i++) v.push_back(20.0 + (rand() % 20001) / 100.0);
}
void genTemps(vector<double>& v) {
    for(int i = 0; i < 50; i++) v.push_back((rand() % 10001) / 100.0);
}
void genChars(vector<char>& v) {
    const char alnum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 30; i++) v.push_back(alnum[rand() % 62]);
}
void genAnios(vector<int>& v) {
    for(int i = 0; i < 100; i++) v.push_back(1990 + rand() % 36);
}
void genVelocidades(vector<double>& v) {
    for(int i = 0; i < 32; i++) v.push_back(10.0 + (rand() % 29001) / 100.0);
}
void genDistancias(vector<double>& v) {
    for(int i = 0; i < 1000; i++) v.push_back(1.0 + (rand() % 99901) / 100.0);
}
int main() {
    srand(time(0));
    vector<double> voltios, temps, vel, dist;
    vector<char> chars;
    vector<int> anios;
    genVoltajes(voltios); genTemps(temps); genChars(chars);
    genAnios(anios); genVelocidades(vel); genDistancias(dist);
    cout << "Vectores generados correctamente." << endl;
    return 0;
}
