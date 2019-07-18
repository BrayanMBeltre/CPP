/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */

#include <iostream>

using namespace std;

class vector
{
private:
    int array[10];

public:
    void ingresar();
    void verificar();
};

void vector::ingresar()
{

    for (int i = 0; i < 10; i++)
    {
        cout << "Ingrese el " << i + 1 << " numero: ", cin >> array[i], cout << endl;
    }
}

void vector::verificar()
{

    int contador = 1;
    for (int i = 0; i < 9; i++)
    {
        if (array[i + 1] < array[i])
        {
            contador = 0;
        }
    }

    if (contador==1)
    {

        cout << "los elementos estan ordenados" << endl;
    }
    else
    {

        cout << "los elementos NO estan ordenados" << endl;
    }

}

int main()
{

    vector vector1;
    vector1.ingresar();
    vector1.verificar();
}
