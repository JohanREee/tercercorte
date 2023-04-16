#include <iostream>
#include <stdlib.h>
/* Leer 100 numeros. Determinar la media de los numeros positivos y la media de los numeros negativos*/
using namespace std;

int main (){
    int numeros[100], positivo = 0, negativo = 0,o = 0,j = 0;

    for ( int i = 0; i < 100; i++){
        cout << i+1 << ". Dime un numero: "; cin >> numeros[i];
        if (numeros[i] > 0){
            positivo += numeros [i];
            o++;
            
        }
        else {
            negativo += numeros [i];
            j++;
        }
    }
    cout << "La media de los numeros positivos es: " << positivo / o << endl;
    cout << "La media de los numeros negativos es: " << negativo / j << endl;
   
    system("pause");
    return 0;    
}
