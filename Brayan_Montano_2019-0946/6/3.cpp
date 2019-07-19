/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include<iostream>

using namespace std;

void main()
{
    int num;
    cout <<"Ingrese un valor entero de 1 o 2 dígitos:";
    cin >>num;
    if (num < 10) 
    {
        cout <<"Tiene un dígito";
    }
    else 
    {
        cout <<"Tiene dos dígitos";
    }    
    cin.get();
    cin.get();
}