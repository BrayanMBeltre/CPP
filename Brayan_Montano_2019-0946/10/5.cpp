/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int f,lado1,lado2,lado3,cant1,cant2,cant3,n;
    cant1=0;
    cant2=0;
    cant3=0;
    cout <<"Ingrese la cantidad de triángulos:";
    cin >>n;
    for(f=1; f <= n ;f++) 
    {
        cout <<"Ingrese lado 1:";
        cin >>lado1;
        cout <<"Ingrese lado 2:";
        cin >>lado2;
        cout <<"Ingrese lado 3:";
        cin >>lado3;
        if (lado1 == lado2 && lado1 == lado3) 
        {
            cout <<"Es un triángulo equilatero.";
            cout <<"\n";
            cant1++;
        }
        else 
        {
            if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) 
            {
                cout <<"Es un triángulo isósceles.";
                cout <<"\n";
                cant2++;
            }
            else
            {
                cant3++;
                cout <<"Es un triángulo escaleno.";
                cout <<"\n";
            }
        }
    }
    cout <<"Cantidad de triángulos equilateros:";
    cout <<cant1;
    cout <<"\n";
    cout <<"Cantidad de triángulos isósceles:";
    cout <<cant2;
    cout <<"\n";
    cout <<"Cantidad de triángulos escalenos:";
    cout <<cant3;
    cout <<"\n";
    if (cant1 < cant2 && cant1 < cant3) 
    {
        cout <<"Hay menor cantidad de triángulos equilateros.";
    }
    else
    {
        if (cant2 < cant3) 
        {
            cout <<"Han menor cantidad de triángulos isósceles";    
        }
        else
        {
            cout <<"Han menor cantidad de triángulos escalenos";                    
        }
    }
    cin.get();
    cin.get();
}