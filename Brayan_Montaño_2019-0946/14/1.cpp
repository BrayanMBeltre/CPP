/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include<iostream>

using namespace std;

class MostrarHasta {
private:
    void mostrarEnteros(int valor);
public:
    void cargar();
};

void MostrarHasta::mostrarEnteros(int valor)
{
    for (int f = 1; f <= valor; f++)
    {
        cout << f;
        cout << "-";
    }
}

void MostrarHasta::cargar()
{
    int val;
    cout << "Ingresar un valor entero:";
    cin >> val;
    mostrarEnteros(val);
}

void main()
{
    MostrarHasta mostrarHasta1;
    mostrarHasta1.cargar();
    cin.get();
    cin.get();
}