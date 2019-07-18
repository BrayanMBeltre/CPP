#include <iostream>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
void rellenarArreglos(int a[10][10]);
void desplegarArreglo(int a[10][10]);
void ordenarArreglo(int a[10][10]);
 
int main(){
 
    int arreglo1[10][10];
 
    cout << "Arreglo1\n\n";
    rellenarArreglos(arreglo1);
    ordenarArreglo(arreglo1);
    desplegarArreglo(arreglo1);
 
 
    system("pause");
    return 0;
}
 
void rellenarArreglos(int a[10][10]){
 
    srand(time(0));
 
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++)
            a[i][j] = (1 + rand() % 1000);
    }
 
}
 
void desplegarArreglo(int a[10][10]){
 
    for(int c = 0; c < 10; c++){
        for(int b = 0; b < 10; b++)
            cout << c[a][b] << "\t";
            cout << endl;
    }
 
}
 
void ordenarArreglo(int a[10][10]){
 
    int k = 0;
    int arreglo[100];
 
    //Convertir el arreglo de dos dimensiones en uno de una sola dimensión.
    for(int fila = 0; fila < 10; fila++){
        for(int col = 0; col < 10; col++){
            arreglo[k] = a[fila][col];
            k++;
        }
    }
 
 
    //Aplicación del Ordenamiento Burbuja.
    for(int f = 1; f < 100; f++){
        for(int c = 0; c < 100; c++){
            if(arreglo[c] > arreglo[c+1]){
                int temp = arreglo[c];
                arreglo[c] = arreglo[c+1];
                arreglo[c+1] = temp;
 
            }
        }
    }
 
    k = 0;
 
    //Convertir el arreglo de una dimensión en una de dos dimensiones
    //como anteriormente estaba.
    for(int f = 0; f < 10; f++){
        for(int c = 0; c < 10; c++){
            a[f][c] = arreglo[k];
            k++;
        }
    }
 
}