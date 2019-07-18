#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namespace std;

bool checkrep(int n, int num[])
{
    int personas = 4;
    for (int i = 0; i < personas; i++)
    {
        if (n == num[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{

    int Pisos = 10;
    int PisoInicial;
    int PisoPersonaPrincipalFinal;
    int PisosPersonas[4];
    int TurnosPersonas[4];
    int Fil = 3;
    int Col = 1;
    int TurnosPisosPersonas[Fil][Col];
    // int TurnoPisoPersonaPrincipal[1,1];
    int TurnoPersonaPrincipal;
    //int OrdenPersonas [4];

    int Personas = 4;
    //  int PersonaPrincipal;

    srand(time(0));

    cout << "En que piso esta el ascensor: ", cin >> PisoInicial, cout << endl;
    cout << "A que piso vas: ", cin >> PisoPersonaPrincipalFinal, cout << endl;

    TurnoPersonaPrincipal = (1 + rand() % Personas + 1);

    cout << "Turno Persona Principal: " << TurnoPersonaPrincipal << endl;

    int n, num[Personas];
    for (int i = 0; i < Personas; i++)
    {
        do
        {
            n = 1 + rand() % 5;
        }

        while (checkrep(n, num) || n == TurnoPersonaPrincipal);
        num[i] = n;
        TurnosPersonas[i] = num[i];

        cout << "Turno Persona : " << i + 1 << " = " << TurnosPersonas[i] << endl;
    }

    cout << endl
         << endl;

    for (int i = 0; i < Personas; i++)
    {
        do
        {

            PisosPersonas[i] = 1 + rand() % Pisos;

        } while (PisosPersonas[i] == PisoInicial);

        cout << "La persona : " << TurnosPersonas[i] << " quiere ir al piso " << PisosPersonas[i] << endl;
    }

    cout << "Tu turno es: " << TurnoPersonaPrincipal << " y quieres ir al piso " << PisoPersonaPrincipalFinal << endl;

    cout << endl
         << endl;


        for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            TurnosPisosPersonas[i][j] = TurnosPersonas[i];
           /TurnosPisosPersonas[i][j] = PisosPersonas[i];
            cout << "Turnos"<< "[" << i + 1 << "]" << TurnosPisosPersonas[i][j] << " Pisos"  << "[" << j + 1 << "]" << TurnosPisosPersonas[j][i] << endl;
        }
        
        //cout << "Turnos"<< "[" << i + 1 << "]" << TurnosPisosPersonas[i][j] << " Pisos"  << "[" << j + 1 << "]" << TurnosPisosPersonas[i][j] << endl;
            
    }

    cout << endl
         << endl;
         

            for (int i = 0; i < 4; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    
                   cout<<TurnosPisosPersonas[i][j]<<" ";
        }
        cout<<endl;
                
            }
            

        cout << endl;
   
;
                    int i, j , x ,y;
                    int mayor =0;
                    for(i=0; i<3; i++)
                    {
                        for(j=0; j<1; j++)
                        {
                            for(x=0; x<3;x++)
                            {
                                for(y=0; y<1; y++)
                                {
                                    if(TurnosPisosPersonas[i][j]<TurnosPisosPersonas[x][y])
                                    {
                                        mayor=TurnosPisosPersonas[i][j];
                                        TurnosPisosPersonas[i][j]=TurnosPisosPersonas[x][y];
                                        TurnosPisosPersonas[x][y]=mayor;
                                    }

                                }
                            }
                        }
                    }


    for (int i = 0; i < Personas; i++)
    {
        cout << "Turnos organizados"
             << "[" << i + 1 << "]" << TurnosPisosPersonas[i][0] << " Pisos"
             << "[" << i + 1 << "]" << TurnosPisosPersonas[i][1] << endl;
    }

    //  for (int i = 0; i < Personas; i++)
    //  {

    //     for (int J = 0; J < Personas; J++)
    //     {
    //         if (TurnosPisosPersonas[i][0] < TurnosPisosPersonas[j][0])
    //         {
    //             /* code */
    //         }

    //     }

    //      cout << "Ahora el orden es: " << OrdenPersonas[i] << " y esta perona quiere ir al piso" << PisosPersonas[i]<< endl;

    //  }

    // Sin ordenar{
    // La persona : 1 quiere ir al piso 3
    // La persona : 5 quiere ir al piso 8
    // La persona : 3 quiere ir al piso 3
    // La persona : 4 quiere ir al piso 3
    // Tu turno es: 2 y quieres ir al piso 4

    // Ordenado{
    //     La persona : 1 quiere ir al piso 3
    //     Tu turno es: 2 y quieres ir al piso 4
    //     La persona : 3 quiere ir al piso 3
    //     La persona : 4 quiere ir al piso 3
    //     La persona : 5 quiere ir al piso 8
    // }

    system("Pause");
    return 0;
}