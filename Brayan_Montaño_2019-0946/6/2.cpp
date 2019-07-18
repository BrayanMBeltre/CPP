/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include<iostream>

using namespace std;

void main()
{
    int nota1,nota2,nota3;
    cout <<"Ingrese primer nota:";
    cin >>nota1;
    cout <<"Ingrese segunda nota:";
    cin >>nota2;
    cout <<"Ingrese tercer nota:";
    cin >>nota3;
    int promedio;
    promedio = (nota1 + nota2 + nota3) / 3;
    if (promedio >= 7) 
    {
        cout <<"Promocionado";
    }
    cin.get();
    cin.get();
}