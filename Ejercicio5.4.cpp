#include <iostream>
/*"Determinar la media de una lista de números positivos terminada con un número no positivo 
después del último número válido"*/
using namespace std;

int main (){
    int lista[1000], x, negativo;
    float suma;
    cout << "Es importante mencionar que la lista terminara una vez escribas un numero negativo. Se obtendra la media sin contar el numero negativo.\n";
        for (int i = 0; i < 1000; i++){
            cout << "Dime un numero para la posicion " << i+1 << " : "; cin >> lista[i];
            if (lista[0] > 0){
                if (lista [i] > 0){
                    suma += lista [i];
                }
                else if (lista[i] < 0){
                    cout << "El sistema se ha detenido. La media de todos los numeros escritos es: ";
                    cout << (suma) / (i); break;
                }
            }
            else if (lista[0] < 0){
                cout << "El primer digito ingresado no puede ser un numero negativo."; break;
            }
        }           
}
   