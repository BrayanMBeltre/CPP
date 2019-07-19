/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int num1,num2,num3;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
    cout <<"Ingrese tercer valor:";
    cin >>num3;
    cout <<"Rango de valores:";
    if (num1 < num2 && num1 < num3) 
    {
        cout <<num1;
    } 
    else 
    {
        if (num2 < num3) 
        {
            cout <<num2;
        }
        else
        {
            cout <<num3;
        }
    }
    cout <<"-";
    if (num1 > num2 && num1 > num3) 
    {
        cout <<num1;
    }
    else
    {
        if (num2 > num3)
        {
            cout <<num2;
        }
        else
        {
            cout <<num3;
        }
    }
    cin.get();
    cin.get();
}