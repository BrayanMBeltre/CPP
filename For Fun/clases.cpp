#include <iostream>

using namespace std;

class Persona
{
private:
    char nombre[40];
    int edad;

public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};

void Persona::inicializar()
{
    cout << "Ingrese nombre:";
    cin.getline(nombre, 40);
    cout<< endl;
    cout << "Ingrese edad:";
    cin >> edad;
    cout << endl;
}

void Persona::imprimir()
{
    cout << "Nombre:" << nombre << endl;


    cout << "Edad:" << edad << endl;


}

void Persona::esMayorEdad()
{
    if (edad >= 18)
    {
        cout << "Es mayor de edad." << endl;
    }
    else
    {
        cout << "No es mayor de edad." << endl;
    }
    cin.get();
    cin.get();
}

int main()
{
    Persona persona[1];
    Persona persona[2];
    Persona persona[3];

    for (int i = 0; i < 3; i++)
    {
        
        persona[i].inicializar();
        persona[i].imprimir();
        persona[i].esMayorEdad();
    }

    persona[2].imprimir();

    return 0;
}