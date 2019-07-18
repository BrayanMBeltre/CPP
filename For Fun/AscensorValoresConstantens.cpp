#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

int main()
{

    int Pisos = 5;
    int PisoInicial;
    int Pesonas = 5;
    int TurnoPersonaPrincipal;
    int TurnoPersona1;
    int TurnoPersona2;
    int TurnoPersona3;
    int TurnoPersona4;
    int DestinoPersonaPrincipal;
    int Destino1;
    int Destino2;
    int Destino3;
    int Destino4;

    srand(time(0));

    cout << "El edificio es de 5 pisos." << endl
         << endl;

    do
    {
        cout << "En que piso esta el ascensor: ", cin >> PisoInicial, cout << endl;
    } while (PisoInicial < 1 || PisoInicial > 5);

    TurnoPersonaPrincipal = (1 + rand() % Pesonas);

    cout << "Mi turno es: " << TurnoPersonaPrincipal << endl;

    do
    {
        TurnoPersona1 = (1 + rand() % Pesonas);

    } while (TurnoPersona1 == TurnoPersonaPrincipal);

    cout << "El turno de la persona 1 es el: " << TurnoPersona1 << endl;

    do
    {
        TurnoPersona2 = (1 + rand() % Pesonas);

    } while (TurnoPersona2 == TurnoPersonaPrincipal || TurnoPersona2 == TurnoPersona1);

    cout << "El turno de la persona 2 es el: " << TurnoPersona2 << endl;

    do
    {
        TurnoPersona3 = (1 + rand() % Pesonas);

    } while (TurnoPersona3 == TurnoPersonaPrincipal || TurnoPersona3 == TurnoPersona1 || TurnoPersona3 == TurnoPersona2);

    cout << "El turno de la persona 3 es el: " << TurnoPersona3 << endl;

    do
    {
        TurnoPersona4 = (1 + rand() % Pesonas);

    } while (TurnoPersona4 == TurnoPersonaPrincipal || TurnoPersona4 == TurnoPersona1 || TurnoPersona4 == TurnoPersona2 || TurnoPersona4 == TurnoPersona3);

    cout << "El turno de la persona 4 es el: " << TurnoPersona4 << endl;

    cout << endl;
    
    do
    {
        cout << "A que piso desea ir: ", cin >> DestinoPersonaPrincipal, cout << endl;

    } while (DestinoPersonaPrincipal < 1 || DestinoPersonaPrincipal > Pisos);
    
    

    cout << "Quiero ir al piso: " << DestinoPersonaPrincipal << endl;

    do
    {
        Destino1 = (1 + rand() % Pisos);

    } while (Destino1 == PisoInicial);
    
    do
    {
        Destino2 = (1 + rand() % Pisos);
        
    } while (Destino2 == PisoInicial);

        do
    {
        Destino3 = (1 + rand() % Pisos);
        
    } while (Destino3 == PisoInicial);

        do
    {
        Destino4 = (1 + rand() % Pisos);
        
    } while (Destino4 == PisoInicial);

    cout << "La persona con el turno " << TurnoPersona1 << " quiere ir al piso " << Destino1 << endl;
    cout << "La persona con el turno " << TurnoPersona2 << " quiere ir al piso " << Destino2 << endl;
    cout << "La persona con el turno " << TurnoPersona3 << " quiere ir al piso " << Destino3 << endl;
    cout << "La persona con el turno " << TurnoPersona4 << " quiere ir al piso " << Destino4 << endl;

    cout << endl;

    //Turno Persona Principal
    if (TurnoPersonaPrincipal < TurnoPersona1 && TurnoPersonaPrincipal < TurnoPersona2 && TurnoPersonaPrincipal < TurnoPersona3 && TurnoPersonaPrincipal < TurnoPersona4)
    {
        //SUBIENDO PERSONA PRINCIPAL
        if (DestinoPersonaPrincipal > PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << DestinoPersonaPrincipal << endl;

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }

                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial++;

            } while (DestinoPersonaPrincipal > PisoInicial);

            if (DestinoPersonaPrincipal <= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << DestinoPersonaPrincipal << endl;

                system("pause");
                system("exit");
            }
        }

        //BAJANDO PERSONA PRINCIPAL

        if (DestinoPersonaPrincipal < PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << DestinoPersonaPrincipal << endl;

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }

                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial--;

            } while (DestinoPersonaPrincipal <= PisoInicial);

            if (DestinoPersonaPrincipal >= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << DestinoPersonaPrincipal << endl;

                system("pause");
                system("exit");
            }
        }
    }

    //TURNO PERSONA DESTINO 1
    if (TurnoPersona1 < DestinoPersonaPrincipal && TurnoPersona1 < TurnoPersona2 && TurnoPersona1 < TurnoPersona3 && TurnoPersona1 < TurnoPersona4)
    {
        //SUBIENDO PERSONA 1
        if (Destino1 > PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino1 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;

                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial++;

            } while (Destino1 > PisoInicial);

            if (Destino1 <= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino1 << endl;

                system("pause");
                system("exit");
            }
        }

        //BAJANDO PERSONA 1

        if (Destino1 < PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino1 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino" << DestinoPersonaPrincipal << endl;
                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial--;

            } while (Destino1 <= PisoInicial);

            if (Destino1 >= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino1 << endl;

                system("pause");
                system("exit");
            }
        }
    }

    //TURNO PERSONA DESTINO 2
    if (TurnoPersona2 < DestinoPersonaPrincipal && TurnoPersona2 < TurnoPersona1 && TurnoPersona2 < TurnoPersona3 && TurnoPersona2 < TurnoPersona4)
    {
        //SUBIENDO PERSONA 2
        if (Destino2 > PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino2 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;

                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial++;

            } while (Destino2 > PisoInicial);

            if (Destino2 <= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino2 << endl;

                system("pause");
                system("exit");
            }
        }

        //BAJANDO PERSONA 2

        if (Destino2 < PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino2 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino" << DestinoPersonaPrincipal << endl;
                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial--;

            } while (Destino2 <= PisoInicial);

            if (Destino2 >= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino2 << endl;

                system("pause");
                system("exit");
            }
        }
    }

    //TURNO PERSONA DESTINO 3
    if (TurnoPersona3 < DestinoPersonaPrincipal && TurnoPersona3 < TurnoPersona1 && TurnoPersona3 < TurnoPersona2 && TurnoPersona3 < TurnoPersona4)
    {
        //SUBIENDO PERSONA 3
        if (Destino3 > PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino3 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;

                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial++;

            } while (Destino3 > PisoInicial);

            if (Destino3 <= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino3 << endl;

                system("pause");
                system("exit");
            }
        }

        //BAJANDO PERSONA 3

        if (Destino3 < PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino3 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;
                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona4 << " ha llegado a su destino el piso " << Destino4 << endl;
                }
                PisoInicial--;

            } while (Destino3 <= PisoInicial);

            if (Destino3 >= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino3 << endl;

                system("pause");
                system("exit");
            }
        }
    }

    //TURNO PERSONA DESTINO 4
    if (TurnoPersona4 < DestinoPersonaPrincipal && TurnoPersona4 < TurnoPersona1 && TurnoPersona4 < TurnoPersona2 && TurnoPersona4 < TurnoPersona3)
    {
        //SUBIENDO PERSONA 4
        if (Destino4 > PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino4 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;

                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona2 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino3)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                PisoInicial++;

            } while (Destino4 > PisoInicial);

            if (Destino4 <= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino4 << endl;

                system("pause");
                system("exit");
            }
        }

        //BAJANDO PERSONA 4

        if (Destino4 < PisoInicial)
        {

            do
            {

                cout << "Estas en el piso " << PisoInicial << " de camino a " << Destino4 << endl;

                if (PisoInicial == DestinoPersonaPrincipal)
                {
                    cout << "Haz llegado a tu destino " << DestinoPersonaPrincipal << endl;
                    system("pause");
                    system("exit");
                }

                if (PisoInicial == Destino1)
                {
                    cout << "La persona con el turno " << TurnoPersona1 << " ha llegado a su destino el piso " << Destino1 << endl;
                }
                if (PisoInicial == Destino2)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino2 << endl;
                }
                if (PisoInicial == Destino4)
                {
                    cout << "La persona con el turno " << TurnoPersona3 << " ha llegado a su destino el piso " << Destino3 << endl;
                }
                PisoInicial--;

            } while (Destino4 <= PisoInicial);

            if (Destino4 >= PisoInicial)
            {
                cout << "Has llegado a tu destino! el piso " << Destino4 << endl;

                system("pause");
                system("exit");
            }
        }
    }

    system("Pause");
    return 0;
}