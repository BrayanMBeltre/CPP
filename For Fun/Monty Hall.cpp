#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int PuertaSeleccionada ;
    int Puertas = 3;
    srand(time(0));
    int AbrirPuerta;
    int CambioPuerta;
    int SIoNO;
    
  
    int Auto ;
//MENU:
    do
    {
        cout << "Selecione una puerta 1, 2 o 3: ", cin >> PuertaSeleccionada, cout << endl;

        if (PuertaSeleccionada < 1 || PuertaSeleccionada > Puertas)
        {
            cout << "Seleccione una puerta del 1 al 3" << endl;
        }

    } while (PuertaSeleccionada < 1 || PuertaSeleccionada > Puertas);

    

// AUTO:
        Auto = ( 1 + rand() % Puertas);
    
   // cout << "El auto esta en la Puerta " << Auto << endl;

//PUERTAS:
    do
    {
        AbrirPuerta = (1 + rand() % Puertas);

    } while (AbrirPuerta == Auto || AbrirPuerta == PuertaSeleccionada);
    
 

    cout << "El anfitrion abre la puerta  "<< AbrirPuerta << " y no hay nada" << endl << endl ;
    
//CAMBIODEPUERTA:

       do
    {
        CambioPuerta = (1 + rand() % Puertas);

    } while (CambioPuerta == AbrirPuerta || CambioPuerta == PuertaSeleccionada);


    cout << "Quiere Cambiar su respuesta de la puerta "<<PuertaSeleccionada << " a " << CambioPuerta << "?" <<endl <<endl;

    do
    {
        cout << "Escriba   1 para SI    y     0 para NO: ";
        cin >> SIoNO, cout <<endl << endl;

    } while (SIoNO > 1 || SIoNO < 0);
    
    
    if (SIoNO == 1)
    {
        PuertaSeleccionada = PuertaSeleccionada;
    }else
    {
        PuertaSeleccionada = CambioPuerta;
    }
    
    

//SALIDA:
    if(PuertaSeleccionada == Auto){
        cout <<"Usted Gano el auto"<<endl << endl;
        // cout <<"Su puerta seleccionada fue: " << PuertaSeleccionada<<endl; 
        // cout <<"El auto esta en la puerta: " << Auto<<endl; 
    }else
    {
        cout <<"Usted Perdio"<<endl << endl;
        // cout <<"Su puerta seleccionada fue: " << PuertaSeleccionada<<endl; 
        // cout <<"El auto esta en la puerta: " << Auto<<endl; 
    }
    


    system("Pause");
    return 0;
}