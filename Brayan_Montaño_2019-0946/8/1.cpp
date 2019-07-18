/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int dia,mes,año;
    cout <<"Ingrese nro de día:";
    cin >>dia;
    cout <<"Ingrese nro de mes:";
    cin >>mes;
    cout <<"Ingrese nro de año:";
    cin >>año;
    if (mes == 12 && dia == 25) 
    {
        cout <<"La fecha ingresada corresponde a navidad.";
    }    
    cin.get();
    cin.get();
}