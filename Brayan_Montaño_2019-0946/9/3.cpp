/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

void main()
{
    int n,x,conta1,conta2;
    float sueldo,gastos;
    cout <<"Cuantos empleados tiene la empresa:";
    cin >>n;
    x=1;
    conta1=0;
    conta2=0;
    gastos=0;
    while ( x<= n) 
    {
        cout <<"Ingrese el sueldo del empleado:";
        cin >>sueldo;
        if (sueldo<=300) 
        {
            conta1=conta1 + 1;
         } 
        else 
        {
            conta2=conta2 + 1;
        }
        gastos=gastos+sueldo;
        x=x + 1;
    }
    cout <<"Cantidad de empleados con sueldos entre 100 y 300:";
    cout <<conta1;
    cout <<"\n";
    cout <<"Cantidad de empleados con sueldos mayor a 300:";
    cout <<conta2;
    cout <<"\n";
    cout <<"Gastos total de la empresa en sueldos:";
    cout <<gastos;
    cin.get();
    cin.get();
}