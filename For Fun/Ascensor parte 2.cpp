/*
IDEA:

Decir el piso actual del ascensor aleatoriamente del 1 al 10
pedir el numero de personas que entraran al ascensor
introducir al piso al que quiere ir
darle un numero aleatorio a la persona entre las personas que ingresaron aleatoriamente
si el usuario no es el primero entonces ir a los Piso de las personas que estan antes que el (el piso sera aleatorio)

opcional: Seguir el programa desde ahi

presentar de alguna manea al usuario lo que esta pasando


1: Si estas en el piso X no puedes ir al piso X
2: El ascensor no puede bajar mas abajo del piso 1 - El ascensor no puede subir mas alla del piso max
3: 


*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

VariablesInicio:

    int Ascensor;
    int Personas;
    int PersonaPrincipal = 0;

    int PisosTotales;
    int PisoInicial;
    int PisoFinal;
    int TurnoPrincipal;

    /* numero ramdom fijo
            srand(time(NULL));
    int NumeroRandom = rand() % 11; */

    // El piso no puede ser negativo... El piso no puede ser mayor que 10... Avisarle al usuario esto...

Menu:

    cout << "Cuantos pisos tiene el edificio:  ", cin >> PisosTotales, cout << endl;

    do
    {
        cout << "En que piso estas (Max " << PisosTotales << "):", cin >> PisoInicial, cout << endl;
    } while (PisoInicial < 1 || PisoInicial > PisosTotales);

    // Quizas aca tenga que tener un limite
    cout << "Cuantas personas entraron al ascensor: ", cin >> Personas, cout << endl;

    // Si estas en el piso X no puedes ir al piso X.. El piso no puede ser mayor que Pisos totales o menor a 1...

        do
    {
        cout << "Cual es tu turno: ", cin >> TurnoPrincipal, cout << endl;
    } while (TurnoPrincipal < 1 || TurnoPrincipal > Personas);

    do
    {
        cout << "A que piso quieres ir: ", cin >> PisoFinal, cout << endl;

        if (PisoFinal == PisoInicial)
        {

            cout << "Estas en el piso: " << PisoInicial << endl
                 << endl;
        }

        if (PisoFinal < 1)
        {

            cout << "--Area Restringida--" << endl
                 << endl;
        }

        if (PisoFinal > PisosTotales)
        {

            cout << "El piso Mas alto es: " << PisosTotales << endl
                 << endl;
        }
    } while (PisoFinal == PisoInicial || PisoFinal < 1 || PisoFinal > PisosTotales);

    /* 
    Aca va el sistema de asignarle un numero aleatorio a cada quien

    La persona Principal sera la primera en el vector

    En  "Cuantas personas entraron al ascensor" no se si te incluyes o no asi que pongo el total de personas + 1

    el primer numero ramdom que cree tenia un numero fijo siempre ---

    El numero aleatorio no se puede repetir
*/

    Turno Principal:

        //Tamano de la ruleta
        int NumeroDePisos[PisosTotales];
        //Memoria
        int MemoriaTurnoP = 0;
        //Como una semilla
        srand(time(0));

        for (int i = 0; i < PisosTotales; i++)
        {
            //numero aleatorio
            MemoriaTurnoP = (1 + rand() % PisosTotales);
            //memoria 2
            int MemoriaTurnoP2 = 0;

        

            // asignarle el numero aleatorio al vector ahora de tamanio i
             MemoriaTurnoP;

        }



TurnosPersonas:

    // Turno aleatorio para cada persona
    int TurnoPersonas[Personas];

    int NumeroRandom;
    //esto funcionaria como una memoria de tolos los numeros aleatorios creados

    int NumeroRandomTotales[Personas];

    for (int i = 0; i < Personas; i++)
    {

        /*numero ramdom fallido 2
            srand(time(NULL));
     int NumeroRandom = rand() % 11;
    */

        // Numeros aleatorios 3

        // vector de personas totales que entraron al ascensor
        int VectorPersonas[Personas];



        for (int i = 0; i < Personas; i++)
        {
            //numero aleatorio
            aux = (1 + rand() % Personas-1);
            //memoria 2
            int aux2 = 0;

            //mientras memoria 2 menor a i
            while (aux2 < i)
            {

                //si memoria 1 es Diferente al VectorPersonas con tamano de la memoria 2
                if (aux != VectorPersonas[aux2] || aux != TurnoPrincipal)
                    //sumarle 1 a la memoria 2
                    aux2++;

                //Cuando memoria 2 sea igual o mayor que i crear otro numero aleatorio
                else
                {
                    aux = (1 + rand() % Personas);
                    //resetear memoria 2
                    aux2 = 0;
                }
            }

            // asignarle el numero aleatorio al vector ahora de tamanio i
            VectorPersonas[i] = aux;

        }

        TurnoPersonas[i] = VectorPersonas[i-];

        //PISOS DE CADA QUIEN
        //Estos numeros si se pueden repetir en el intervalo 1 hasta PisoTotal
        //Estos numeros tienen que ser diferentes al piso inicial

                /* Ahora cada quien tendra un piso diferente 
 dependiendo de que numero tengas sera el turno de ir a tu piso
 Cuando se llegue a tu piso el programa se detiene
el piso al que quiere ir cada persona es diferente al actual

 */

    PisosPersonas:

        //Tamano de la ruleta
        int NumeroDePisos[PisosTotales];
        //Memoria
        int MemoriaPisos1 = 0;
        //Como una semilla
        srand(time(0));

        for (int i = 0; i < PisosTotales; i++)
        {
            //numero aleatorio
            MemoriaPisos1 = (1 + rand() % PisosTotales);
            //memoria 2
            int MemoriaPisos2 = 0;

            //mientras memoria 2 menor a i
            while (MemoriaPisos2 < i)
            {

                //NUMERO DIFERENTE AL DEL PISO ACTUAL
                if (MemoriaPisos1 != PisoInicial)
                    //sumarle 1 a la memoria 2
                    MemoriaPisos2++;

                //Cuando memoria 2 sea igual o mayor que i crear otro numero aleatorio
                else
                {
                    MemoriaPisos1 = (1 + rand() % PisosTotales);
                    //resetear memoria 2
                    MemoriaPisos2 = 0;
                }
            }

            // asignarle el numero aleatorio al vector ahora de tamanio i
            NumeroDePisos[i] = MemoriaPisos1;

        }

    //Salida1:
        cout << "La persona : " << TurnoPersonas[i] << "  quiere ir al piso " << NumeroDePisos[i] << endl;
        // cout << "Tu turno es " << TurnoPersonas[0] <<" y quieres ir al piso: " << PisoFinal<< endl;

        //Esto no es necesario creo
        //  cout << "La persona " << i + 1 << " Tiene el turno: " << VectorPersonas[i] << endl;


    }

    system("pause");
    return 0;
}