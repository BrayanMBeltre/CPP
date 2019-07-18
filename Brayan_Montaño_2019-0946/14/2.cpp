/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include<iostream>

using namespace std;

class MayorDos {
private:
    int mayor(int v1, int v2);
public:
        void cargar();
};

int MayorDos::mayor(int v1, int v2)
{
    if (v1 > v2)
    {
        return v1;
    }
    else
    {
        return v2;
    }
}

void MayorDos::cargar()
{
    int valor1, valor2;
    cout <<"Ingrese primer valor:";
    cin >> valor1;
    cout << "Ingrese segundo valor:";
    cin >> valor2;
    int resu = mayor(valor1, valor2);
    cout << "El valor mayor de los numeros ingresados es:";
    cout << resu;
    cin.get();
    cin.get();
}

void main()
{
    MayorDos mayordos1;
    mayordos1.cargar();
}