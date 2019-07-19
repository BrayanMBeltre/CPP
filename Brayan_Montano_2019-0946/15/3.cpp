/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include<iostream>
#include <vector> 

using namespace std;

class PruebaVector6 {
private:
    int cursoa[5];
    int cursob[5];
public:
    void cargar();
    void calcularPromedios();
};


void PruebaVector6::cargar()
{
    cout <<"Carga de notas del curso A";
    cout <<"\n";
    for(int f = 0; f < 5; f++) 
    {
        cout <<"Ingrese nota:";
        cin >>cursoa[f];
    }
    cout <<"Carga del notas del curso B";
    cout <<"\n";
    for(int f = 0; f < 5; f++) 
    {
        cout <<"Ingrese nota:";
        cin >>cursob[f];
    }        
}

void PruebaVector6::calcularPromedios()
{
 
    int suma1=0;
    int suma2=0;
 
    for(int f=0;f < sizeof(cursoa) ;f++) 
    {
        suma1=suma1+cursoa[f];
        suma2=suma2+cursob[f];            
    }
    int promedioa=suma1/sizeof(cursoa);
    int promediob=suma2/5;
    if (promedioa>promediob) 
    {
        cout <<"El curso A tiene un promedio mayor.";
    }
    else
    {
        cout <<"El curso B tiene un promedio mayor.";
    }
    cin.get();
    cin.get();
}

int main()
{
    PruebaVector6 pv6;
    pv6.cargar();
    pv6.calcularPromedios();
}