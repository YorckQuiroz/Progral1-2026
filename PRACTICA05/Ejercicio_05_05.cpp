#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// 1. Funciones generadoras de datos aleatorios
int genC() {
    int r = 0;
    r = 1 + (rand() % 4);
    return r;
}

int genS() {
    int r = 0;
    r = 2 + (rand() % 4);
    return r;
}

int genM() {
    int r = 0;
    r = 3 + (rand() % 4);
    return r;
}

// 2. Calcula el costo mensual total del estudiante
int calcBs(int m) {
    int tot = 0;
    tot = m * 525;
    return tot;
}

// 3. Funciones puras para actualizar contadores de carrera sin usar void
int actC1(int c, int c1) {
    int r = 0;
    r = c1;
    
    if (c == 1) {
        r = c1 + 1;
    }
    
    return r;
}

int actC2(int c, int c2) {
    int r = 0;
    r = c2;
    
    if (c == 2) {
        r = c2 + 1;
    }
    
    return r;
}

int actC3(int c, int c3) {
    int r = 0;
    r = c3;
    
    if (c == 3) {
        r = c3 + 1;
    }
    
    return r;
}

int actC4(int c, int c4) {
    int r = 0;
    r = c4;
    
    if (c == 4) {
        r = c4 + 1;
    }
    
    return r;
}

// 4. Funciones puras para sumar materias por semestre sin usar void
int actS2(int s, int m, int s2) {
    int r = 0;
    r = s2;
    
    if (s == 2) {
        r = s2 + m;
    }
    return r;
}

int actS3(int s, int m, int s3) {
    int r = 0;
    r = s3;
    
    if (s == 3) {
        r = s3 + m;
    }
    return r;
}
int actS4(int s, int m, int s4) {
    int r = 0;
    r = s4;
    
    if (s == 4) {
        r = s4 + m;
    }
    
    return r;
}

int actS5(int s, int m, int s5) {
    int r = 0;
    r = s5;
    
    if (s == 5) {
        r = s5 + m;
    }
    
    return r;
}

// Funcion principal
int main() {
    // Declaracion de todas las variables al inicio del bloque
    int n = 0,i = 1, c = 0, s = 0, m = 0, bs = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0,s2 = 0, s3 = 0,s4 = 0, s5 = 0,totBs = 0;
    srand(time(0));    
    cout << "Ingrese la cantidad de estudiantes a inscribir en el semestre 1-2026 (N): ";
    cin >> n;
    while (i <= n) {
        c = genC();
        s = genS();
        m = genM();
        bs = calcBs(m);  
        c1 = actC1(c, c1);
        c2 = actC2(c, c2);
        c3 = actC3(c, c3);
        c4 = actC4(c, c4);
        s2 = actS2(s, m, s2);
        s3 = actS3(s, m, s3);
        s4 = actS4(s, m, s4);
        s5 = actS5(s, m, s5);
        totBs = totBs + bs;
        cout << "Estudiante " << i << " de la Carrera: " << c << " Semestre: " << s 
             << " Materias: " << m << " Total: " << bs << " Bs" << endl;
        i++;
    }
    cout << "1. Sistemas: " << c1 << " inscritos." << endl;
    cout << "   Diseno Digital: " << c2 << " inscritos." << endl;
    cout << "   Mecatronica: " << c3 << " inscritos." << endl;
    cout << "   Innovacion Emp.: " << c4 << " inscritos." << endl;
    cout << "\n2. Materias tomadas en 2do Sem: " << s2 << endl;
    cout << "   Materias tomadas en 3er Sem: " << s3 << endl;
    cout << "   Materias tomadas en 4to Sem: " << s4 << endl;
    cout << "   Materias tomadas en 5to Sem: " << s5 << endl;
    cout << "\n3. Monto TOTAL recaudado mensual: " << totBs << " Bs" << endl;

    return 0;
}
