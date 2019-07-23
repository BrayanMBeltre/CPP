/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cout <<"Ingrese primer valor:";
    cin >>num1;
    cout <<"Ingrese segundo valor:";
    cin >>num2;
    cout <<"Ingrese tercer valor:";
    cin >>num3;
    if (num1 == num2 && num1 == num3) 
    {
        int suma = num1 + num2;
        cout <<"La suma del primero y segundo:";
        cout <<suma;
        cout <<"\n";
        int producto = suma * num3;
        cout <<"La suma del primero y segundo multiplicado por el tercero:";
        cout <<producto;
    }
    cin.get();
    cin.get();
}