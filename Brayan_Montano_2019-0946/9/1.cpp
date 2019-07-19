/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int x,nota,conta1,conta2;
    x=1;
    conta1=0;
    conta2=0;
    while (x <= 10) 
    {
        cout <<"Ingrese nota:";
        cin >>nota;
        if (nota >= 7) 
        {
            conta1=conta1 + 1;
        }
        else 
        {
            conta2=conta2 + 1;
        }
        x=x + 1;
    }
    cout <<"Cantidad de alumnos con notas mayores o iguales a 7:";
    cout <<conta1;
    cout <<"\n";
    cout <<"Cantidad de alumons con notas menores a 7:";
    cout <<conta2;
    cin.get();
    cin.get();
}