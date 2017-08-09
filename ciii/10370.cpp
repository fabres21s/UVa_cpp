
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>


/*
 * 10370 - Above Average
 * Matemáticas - Promedio
 *
 * De un conjunto de números, sacar el promedio
 * e imprimir el % de ellos, que está por encima de ese promedio
 * */
using namespace std;

int main(){

    int testCases;
    cin >> testCases;
    int n;
    for (int i=1; i <= testCases; i++) {

        cin >> n;
        double arreglo[n];
        double prom = 0;

        for (int j = 0; j < n; j++) {
            cin >> arreglo[j];
            prom += arreglo[j];
        }

        prom /= n;
        double count = 0;
        for (int j =0; j <n; j++) {
            if (arreglo[j] > prom) {
                count++;
            }
        }
        printf("%.3f%%\n", (count*100)/n);


    }
   return 0;
}



