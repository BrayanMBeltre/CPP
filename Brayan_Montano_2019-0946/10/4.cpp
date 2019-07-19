/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int f,valor;
    cout <<"Ingrese un valor entre 1 y 10:";
    cin >>valor;
    for(f=valor; f <= valor*12 ;f=f+valor) 
    {
        cout <<f;
        cout <<"-";
    }
    cin.get();
    cin.get();
}