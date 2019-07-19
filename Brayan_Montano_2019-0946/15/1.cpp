/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>

using namespace std;

class PruebaVector4{
private:
    int vec[8];
public:
    void cargar();
    void acumularElementos();
    void acumularMayores36();
    void CantidadMayores50();
};

void PruebaVector4::cargar()
{
    for(int f = 0; f < 8; f++) 
    {
        cout <<"Ingrese elemento:";
        cin >>vec[f];
    }
}

void PruebaVector4::acumularElementos()
{
    int suma=0;
    for(int f = 0; f < 8; f++) 
    {
        suma=suma+vec[f];
    }
    cout <<"La suma de los 8 elementos es:";
    cout <<suma;
    cout <<"\n";
}

void PruebaVector4::acumularMayores36()
{
    int suma=0;
    for(int f = 0; f < 8; f++) 
    {
        if (vec[f] > 36) 
        {
            suma=suma+vec[f];
        }
    }
    cout <<"La suma de los elementos mayores a 36 es:";
    cout <<suma;
    cout <<"\n";
}

void PruebaVector4::CantidadMayores50()
{
    int cant=0;
    for(int f = 0; f < 8; f++) 
    {
        if (vec[f] > 50) 
        {
            cant++;
        }    
    }
    cout <<"La cantidad de valores mayores a 50 es:";
    cout <<cant;
    cout <<"\n";
    cin.get();
    cin.get();
}

void main()
{
    PruebaVector4 pv4;
    pv4.cargar();
    pv4.acumularElementos();
    pv4.acumularMayores36();
    pv4.CantidadMayores50();
}