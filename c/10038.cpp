
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>


/*
 *10038 - Jolly Jumpers
 * Dado un número n y n números, ver si la diferencia absoluta entre valores sucesivos
 * generan los valores desde 1 hasta n
 *
 * - Arreglos
 */

using namespace std;

int main(){


    int n;
    while (cin >> n) {

        int arreglo[n];
        int arreglo2[3200];

        for (int i = 0; i < n; i++){
            cin >> arreglo[i];
            arreglo2[i] = 0;
        }

        for (int i = 1; i< n; i++){
            arreglo2[(abs(arreglo[i] - arreglo[i-1]))] =1;
            //cout<<"agregando "<< ((arreglo[i] - arreglo[i-1]))<<endl;
        }


        bool jolly = true;

         for (int i=1; i<n; i++){
            if (arreglo2[i] == 0 ){
                jolly = false;
                break;
            }
         }

         if (jolly){
             cout <<"Jolly"<<endl;
         } else {
             cout <<"Not jolly"<<endl;
         }
    }
   return 0;
}



