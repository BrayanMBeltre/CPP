/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int num;
    cout <<"Ingrese un valor de hasta tres dígitos positivo:";
    cin >>num;
    if (num < 10) 
    {
        cout <<"Tiene un dígito";
    }
    else 
    {
        if (num < 100) 
        {
            cout <<"Tiene dos dígitos";
        }
        else 
        {
            if (num < 1000) 
            {
                cout <<"Tiene tres dígitos";
            }
            else 
            {
                cout <<"Error en la entrada de datos.";
            }
        }
    }
    cin.get();
    cin.get();
}
