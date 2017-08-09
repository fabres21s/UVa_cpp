
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


/*
 *  299 - Train Swapping
 * - Matemáticas
 * - Utilizando el método de la burbuja, contar las operaciones de intercambio para ordenar un arreglo
 * */

int solve(int arreglo[], int size);

#define MAX 50;
using namespace std;

int main(){

    int test;
    cin >> test;

    while (test > 0){

        int size;
        cin >> size;
        int arreglo [size];

        for (int i = 0; i< size; i++){
            cin >> arreglo [i];
        }
        int swaps = solve(arreglo, size);
        cout<<"Optimal train swapping takes "<<swaps<<" swaps."<<endl;
        test--;
    }
   return 0;

}

int solve(int arreglo[], int size){
    int swaps = 0;
    for (int i = 0; i< size-1; i++){
        for (int j = i+1; j < size; j++){
            if (arreglo[i] > arreglo[j]){
                swaps++;
                int aux = arreglo [i];
                arreglo[i] = arreglo [j];
                arreglo[j] = aux;
            }
        }
    }
    return swaps;
}
