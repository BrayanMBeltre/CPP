/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int cuenta;
    float saldo,suma;
    suma=0;
    do {
        cout <<"Ingrese número de cuenta:";
        cin >>cuenta;
        if (cuenta >= 0) 
        {
            cout <<"Ingrese saldo:";
            cin >>saldo;
            if (saldo >0 ) 
            {
                cout <<"Saldo Acreedor.";
                suma=suma+saldo;
            } 
            else 
            {
                if (saldo < 0) 
                {
                    cout <<"Saldo Deudor.";
                } 
                else 
                {
                    cout <<"Saldo Nulo.";
                }
            }
            cout <<"\n";
        }
    } while(cuenta>=0);
    cout <<"Total de saldos Acreedores:";
    cout <<suma;
    cin.get();
    cin.get();
}