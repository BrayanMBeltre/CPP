#include <iostream>
#include <stdlib.h>
#include <time.h>

/*
const int PopulationSize = 10;
const int ArraySize = 9;
 
int main(){
 
  int population[ PopulationSize ];
  for ( int i=0; i < PopulationSize; i++ )
    population[ i ] = i+1;
 
   int NumeroDePisos[ ArraySize ];
 
   srand(time(0));
 
   for(int i = 0; i < PopulationSize; i++)
   {
     int j = rand() % PopulationSize;
 
     if ( i == j )
       j = ( i + 1 ) % PopulationSize;
 
     std::swap( population[i], population[j]);
   }
 
   for ( int i = 0; i < ArraySize; ++i )
   {
     NumeroDePisos[ i ] = population[ i ];
     std::cout << NumeroDePisos[ i ] << std::endl;
   }
 
   return 0;
}
*/

using namespace std;
 
int main(){
 
 //Tamano de la ruleta
    int NumeroDePisos[10];
//Memoria
    int MemoriaPisos1 = 0;
 //Como una semilla 
    srand(time(0));
 
    for(int i = 0; i < 10; i++){
        //numero aleatorio
        MemoriaPisos1 = (1 + rand() % 10);
    //memoria 2
        int MemoriaPisos2 = 0;
 
 //mientras memoria 2 menor a i
        while(MemoriaPisos2 < i){
 
            //si memoria 1 es Diferente al NumeroDePisos con tamano de la memoria 2
            if(MemoriaPisos1 != NumeroDePisos[MemoriaPisos2])
            //sumarle 1 a la memoria 2
                MemoriaPisos2++;
 
 //Cuando memoria 2 sea igual o mayor que i crear otro numero aleatorio
            else{
                    MemoriaPisos1 = (1 + rand() % 10);
                    //resetear memoria 2
                    MemoriaPisos2 = 0;
 
                }
        }
 
    // asignarle el numero aleatorio al vector ahora de tamanio i
        NumeroDePisos[i] = MemoriaPisos1;

        // imprimir
 
        cout << NumeroDePisos[i] << "\n";
    }
 
    return 0;
}






















    cout << "A que piso quieres ir: ", cin >> PisoFinal, cout << endl;
    do 
    {
        
        cout << "--Area restringida-- " << endl<< endl;
        cout << "Escoja un numero del 1 al " << PistosTotales << ": ", Cin >> PisoFinal << endl;


    }while (PisoFinal == PisoInicial || PisoInicial < 1 || PisoInicial > PisosTotales);



    
    default:
        break;
    }