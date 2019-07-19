/* Nombre: Brayan
Apellido: Montaño Beltre
Matricula: 2019-0946 */


#include <iostream>

using namespace std;

class empleado
{

private:
    char nombre[40];
    int sueldo;

public:
    void introducir();
    void imprimir();
    void pagarimpuestos();
};

void empleado::introducir(){

    cout << "Introduzca su nombre: ", cin.getline(nombre, 40), cout << endl;

    cout << "Ingrese su sueldo: ", cin >> sueldo, cout << endl;

}

void empleado::imprimir(){
    cout << "El empleado con el nombre " << nombre << " y un sueldo de " << sueldo;
}
void empleado::pagarimpuestos(){

    if (sueldo >= 3000)
    {
        cout << " tiene que pagar impuestos." << endl;
    }else if (sueldo < 3000)
    {
        cout << " no tiene que pagar impuestos." << endl;
    }
    

}

int main(){
    
    empleado empleado1;
    empleado1.introducir();
    empleado1.imprimir();
    empleado1.pagarimpuestos();

return 0;
}