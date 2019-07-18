/*
IDEA:

Decir el piso actual del ascensor aleatoriamente del 1 al 10
pedir el numero de personas que entraran al ascensor
introducir al piso al que quiere ir
darle un numero aleatorio a la persona entre las personas que ingresaron aleatoriamente
si el usuario no es el primero entonces ir a los PisoInicial de las personas que estan antes que el (el piso sera aleatorio)

opcional: Seguir el programa desde ahi

presentar de alguna manea al usuario lo que esta pasando


1: Si estas en el piso X no puedes ir al piso X
2: El ascensor no puede bajar mas abajo del piso 1 - El ascensor no puede subir mas alla del piso 10
3: 


*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    int Ascensor;
    int Personas;
    int PersonaP = 0;

    int PisoInicial = 10;
    int PisoFinal = 10;

    /* numero ramdom fijo
            srand(time(NULL));
    int NumeroRandom = rand() % 11; */

    // El piso no puede ser negativo... El piso no puede ser mayor que 10... Avisarle al usuario esto...

    do
    {
        cout << "En que piso estas (Max 10): ", cin >> PisoInicial, cout << endl;
    } while (PisoInicial < 1 || PisoInicial > 10);

    // Quizas aca tenga que tener un limite
    cout << "Cuantas personas entraron al ascensor: ", cin >> Personas, cout << endl;

    // Si estas en el piso X no puedes ir al piso X.. El piso no puede ser mayor que 10 o menor a 1...

    cout << "A que piso quieres ir: ", cin >> PisoFinal, cout << endl;
    if (PisoFinal == PisoInicial || PisoInicial < 1 || PisoInicial > 10)
    {
        if (PisoFinal == PisoInicial)
        {

            do
            {
                cout << "Estas en el piso: " << PisoInicial << endl
                     << endl;

                cout << "A que piso quieres ir: ", cin >> PisoFinal, cout << endl;

            } while (PisoFinal == PisoInicial || PisoInicial < 1 || PisoInicial > 10);
        }
    }

    /* 
    Aca va el sistema de asignarle un numero aleatorio a cada quien

    La persona Principal sera la primera en el vector

    En  "Cuantas personas entraron al ascensor" no se si te incluyes o no asi que pongo el total de personas + 1

    el primer numero ramdom que cree tenia un numero fijo siempre ---

    El numero aleatorio no se puede repetir
*/

    // Turno aleatorio para cada persona
    int Turno[Personas + 1];

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

        //Memoria
        int aux = 0;
        //Como una semilla
        srand(time(0));

        for (int i = 0; i < Personas; i++)
        {
            //numero aleatorio
            aux = (1 + rand() % Personas);
            //memoria 2
            int aux2 = 0;

            //mientras memoria 2 menor a i
            while (aux2 < i)
            {

                //si memoria 1 es Diferente al VectorPersonas con tamano de la memoria 2
                if (aux != VectorPersonas[aux2])
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

        Turno[i] = VectorPersonas[i];

        //Esto no es necesario creo
        cout << "La persona " << i + 1 << " Tiene el turno: " << VectorPersonas[i] << endl;
    }
        /* Ahora cada quien tendra un piso diferente 
 dependiendo de que numero tengas sera el turno de ir a tu piso
 Cuando se llegue a tu piso el programa se detiene
el piso al que quiere ir cada persona es diferente al actual

// */


//             int PisoPersonas[PisoInicial];

//             //Memoria 3
//             int aux3 = 0;
//             //Como una semilla
//             srand(time(0));

//             for (int i = 0; i < PisoInicial; i++)
//             {
//                 //numero aleatorio
//                 aux3 = (1 + rand() % PisoInicial);
//                 //memoria 4
//                 int aux4 = 0;

//                 //mientras memoria 4 menor a i
//                 while (aux4 < i)
//                 {

//                     //si memoria 3 es Diferente al PisoInicial con tamano de la memoria 4
//                     if (aux3 != PisoPersonas[aux4])
//                         //sumarle 1 a la memoria 4
//                         aux4++;

//                     //Cuando memoria 4 sea igual o mayor que i crear otro numero aleatorio
//                     else
//                     {
//                         aux3 = (1 + rand() % PisoInicial);
//                         //resetear memoria 4
//                         aux4 = 0;
//                     }
//                 }

//                 // asignarle el numero aleatorio al vector ahora de tamanio i
//                 PisoPersonas[i] = aux3;

                 
//         cout << "La persona " << i + 1 << " Tiene el turno: " << VectorPersonas[i] << " y quiere ir al piso "  << PisoPersonas[i] << endl;
        
//             }

            
//     }

    cout << "Tu turno es " << PersonaP << endl;

    system("pause");
    return 0;
}