#include <iostream>
#include <stdlib.h>
using namespace std;

/*Determinar la media de una lista indefinida de numeros positivos, terminados con un numero negativo */

int main(){
    int x, suma = 0;
    bool verd;
    cout << "Dime la cantidad de numeros que quieres que tenga la lista: "; cin >> x;
    cout << "\nRecuerda que el ultimo valor debe ser un numero negativo";
    int lista[x];
    
    for (int i = 0; i < x; i++){
        
        if (i+1 == x){
            cout << "\nDime un numero negativo para la posicion " << x << " de la lista: "; cin >> lista[i];
            if (lista[i] > 0){
                cout << "El ultimo escrito es un numero positivo."; break;
            }
            else{
                suma += lista[i];
                cout << "La media de esta lista es: " << suma / x << "\n";
            }
        }
        else{
            cout << "\nDime un numero positivo para la posicion " << i+1 << " de la lista: "; cin >> lista[i];
            if (lista[i] > 0) {
                suma += lista[i];
            }
            else{
                cout << "El numero escrito es un numero negativo. Volver a intentar."; break;
            }
        }
    }

    system("pause");
    return 0;
}