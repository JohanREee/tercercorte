#include <iostream>
#include <stdlib.h>
/* Leer las notas de una clase de informatica y deducir todas aquellas que son notables (>=7 y <9)*/
using namespace std;

int main (){
    int est;
    cout << "Dime la cantidad de estudiantes de la clase de informatica: "; cin >> est;
    int calificaciones[est], total;

    for (int i = 0; i < est ; i++){
        cout << "Dime la nota del estudiante numero "<< i+1 << " : "; cin >> calificaciones [i];
    }
    for (int i = 0; i < est;i++){
        if (calificaciones [i] >=7 && calificaciones [i] <9){
            total ++;
        }
    }
    cout << "La cantidad de notas que son notables son: " << total << "\n";
    system("pause");
    return 0;
}