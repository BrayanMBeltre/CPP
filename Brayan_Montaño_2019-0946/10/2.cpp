/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

int main()
{
    int f,valor,suma;
    suma=0;
    for(f=1; f <= 10 ;f++) 
    {
        cout <<"Ingrese un valor:";
        cin >>valor;
        if (f>5) 
        {
            suma=suma+valor;
        }
    }
    cout <<"La suma de los últimos 5 valores es:";
    cout <<suma;
    cin.get();
    cin.get();
}