/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include<iostream>

using namespace std;

void main()
{
    int num;
    cout <<"Ingrese un valor:";
    cin >>num;
    if (num == 0) 
    {
        cout <<"Se ingresó el cero";
    } 
    else 
    {
        if (num > 0) 
        {
            cout <<"Se ingresó un valor positivo";
        } 
        else 
        {
            cout <<"Se ingresó un valor negativo";
        }
    }
    cin.get();
    cin.get();
}