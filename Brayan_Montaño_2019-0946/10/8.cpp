/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int f,edad,suma1,suma2,suma3,pro1,pro2,pro3;
    suma1=0;
    suma2=0;
    suma3=0;
    for(f=1; f <= 5 ;f++) 
    {
        cout <<"Ingrese edad:";
        cin >>edad;
        suma1=suma1+edad;
    }
    pro1=suma1/5;
    cout <<"Promedio de edades del turno mañana:";
    cout <<pro1;
    cout <<"\n";
    for(f=1; f <= 6 ;f++)
    {
        cout <<"Ingrese edad:";
        cin >>edad;
        suma2=suma2+edad;
    }
    pro2=suma2/6;
    cout <<"Promedio de edades del turno tarde:";
    cout <<pro2;
    cout <<"\n";
    for(f=1; f <= 11 ;f++) 
    {
        cout <<"Ingrese edad:";
        cin >>edad;
        suma3=suma3+edad;
    }
    pro3=suma3/11;
    cout <<"Promedio de edades del turno noche:";
    cout <<pro3;
    cout <<"\n";
    if (pro1 < pro2 && pro1 < pro3) 
    {
        cout <<"El turno mañana tiene un promedio menor de edades.";
    }
    else
    {
        if (pro2 < pro3) 
        {
            cout <<"El turno tarde tiene un promedio menor de edades.";
        }
        else
        {
            cout <<"El turno noche tiene un promedio menor de edades.";
        }
    }
    cin.get();
    cin.get();
}
