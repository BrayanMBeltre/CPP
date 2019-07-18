/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int n,x;
    float altura,suma,promedio;
    cout <<"Cuantas personas hay:";
    cin >>n;
    x=1;
    suma=0;
    while (x <= n) 
    {
        cout <<"Ingrese la altura:";
        cin >>altura;
        suma=suma + altura;
        x=x + 1;
    }
    promedio=suma/n;
    cout <<"Altura promedio:";
    cout <<promedio;
    cin.get();
    cin.get();
}