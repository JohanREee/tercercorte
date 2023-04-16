#include <iostream>
#include <string.h>
#include <string>
/*Dado el nombre de un mes y si el año es o no bisiesto, deducir el número de días del mes*/
using namespace std; 
int main (){
    string mes;
    int año, uno, dos, tres,suma1,suma2;
    cout << "Dime el mes el cual quieres saber la cantidad de dias (Ej: Enero, Febrero, Junio):  ";
    cin >> mes;
    cout << "Dime el año (Hasta el año 10000): "; cin >> año;

    if (año <= 10000){
        for (int uno = 0; uno < 32; uno ++) {suma1++;}
        if (mes == "Enero" || mes == "Marzo" || mes == "Mayo" || mes == "Julio" || mes == "Agosto" || mes == "Octubre" || mes == "Diciembre"){
            
            cout << "El mes "<< mes << " tiene "<<suma1 -1<< " dias"; 
        }
        else if (mes == "Abril" || mes == "Junio" || mes == "Septiembre" || mes == "Noviembre"){
            
            cout << "El mes "<< mes << " tiene 30 dias"; 
        }
        else if (mes == "Febrero"){
            if ((año % 4 == 0) || (año % 4 == 0 && año %  100 != 0) || (año %400 == 0)){
                cout << "El mes de Febrero tiene 29 dias por estar en un año bisiesto";
            }
            else{ 
                cout << "El mes Febrero tiene 28 dias";
            }
        }
        else {
            cout << "El mes o valor escrito no coincide con ninguno de los 12 conocidos. Volver a intentar (Recuerda seguir las pautas de ortografia)";
        }
        
    }
    else {
        cout << "El año escrito es mayor a 10000. Volver a intentar";
    }
    cout << "\n";
    system("pause");
    return 0;
    
}