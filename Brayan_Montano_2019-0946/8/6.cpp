/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    float sueldo;
    int antiguedad;
    cout <<"Ingrese sueldo del empleado:";
    cin >>sueldo;
    cout <<"Ingrese su antiguedad en años:";
    cin >>antiguedad;
    if (sueldo < 500 && antiguedad > 10) 
    {
        float aumento=sueldo * 0.20f;
        float sueldoTotal=sueldo+aumento;
        cout <<"Sueldo a pagar:";
        cout <<sueldoTotal;
    } 
    else 
    {
        if (sueldo < 500) 
        {
            float aumento=sueldo * 0.05f;
            float sueldoTotal=sueldo+aumento;
            cout <<"Sueldo a pagar:";
            cout <<sueldoTotal;            
        } 
        else 
        {
            cout <<"Sueldo a pagar:";
            cout <<sueldo;
        }
    }
    cin.get();
    cin.get();
}