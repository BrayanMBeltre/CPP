/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include <iostream>

using namespace std;

class operaciones
{
private:
    int x = 0;
    int y = 0;

public:
    int introducir();
    int suma();
    int resta();
    int multiplicion();
    int division();
};

int operaciones::introducir(){

    cout<<"Introduzca el primer numero: ", cin >> x, cout << endl;

    cout<<"Introduzca el segundo numero: ", cin >> y, cout << endl;
}

int operaciones::suma(){

    cout << "Suma de " << x << " + " << y << " = " << x+y << endl;
}

int operaciones::resta(){

    cout << "resta de " << x << " - " << y << " = " << x-y << endl;
}

int operaciones::multiplicion(){

    cout << "multiplicion de " << x << " * " << y << " = " << x*y << endl;
}

int operaciones::division(){

    cout << "division de " << x << " / " << y << " = " << x/y << endl;
}

int main(){

    operaciones operaciones1;
    operaciones1.introducir();
    operaciones1.suma();
    operaciones1.resta();
    operaciones1.multiplicion();
    operaciones1.division();
}