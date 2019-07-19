/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int n,f,x,y,cant1,cant2,cant3,cant4;
    cant1=0;
    cant2=0;
    cant3=0;   
    cant4=0; 
    cout <<"Cantidad de puntos:";
    cin >>n;
    for(f=1; f <= n ;f++) 
    {
        cout <<"Ingrese coordenada x:";
        cin >>x;
        cout <<"Ingrese coordenada y:";
        cin >>y;
        if (x > 0 && y > 0) 
        {
            cant1++;
        }
        else
        {
            if (x < 0 && y > 0) 
            {
                cant2++;
            }
            else
            {
                if (x < 0 && y < 0) 
                {
                    cant3++;
                }
                else
                {
                    if (x > 0 && y < 0) 
                    {
                        cant4++;
                    }
                }
            }
        }
    }
    cout <<"Cantidad de puntos en el primer cuadrante:";
    cout <<cant1;
    cout <<"\n";
    cout <<"Cantidad de puntos en el segundo cuadrante:";
    cout <<cant2;
    cout <<"\n";
    cout <<"Cantidad de puntos en el tercer cuadrante:";
    cout <<cant3;
    cout <<"\n";
    cout <<"Cantidad de puntos en el cuarto cuadrante:";
    cout <<cant4;
    cin.get();
    cin.get();
}