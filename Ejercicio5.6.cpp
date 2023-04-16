#include <iostream>
#include <stdlib.h>

using namespace std;

/*Se desea leer las calificaciones de una clase de informatica 
y contar el numero total de aprobados (5 o mayor a 5)*/

int main (){
    int est, l;
    cout << "Dime la cantidad total de estudiantes de la clase de informatica: "; cin >> est;
    int calificaciones[est], total;

    for (int i = 0; i < est; i++){
        cout << "Dime la nota del estudiante numero "<< i+1 << " : "; cin >> calificaciones [i];
    }
    for (int i = 0; i < est; i++){
        if (calificaciones [i] >= 5){
            total++;
        }
        else{

        }
    }
    cout << "De "<< est << " estudiantes "<<total<< " aprobaron";

    system("pause");
    return 0;
}