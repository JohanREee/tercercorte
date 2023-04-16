#include <iostream>
#include <stdlib.h>
/*Imprimir todos los numeros primos entre 2 y 1000 inclusive.*/
using namespace std;

int main (){
    int suma = 0;
    bool primo;
    for (int i = 3; i<1000; i++){
        primo = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                primo = false; break;
            }
        }
        if (primo){
            cout << i << " ";
        }
    }
    cout << "\n";
    system("pause");
    return 0;
}