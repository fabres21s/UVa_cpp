
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>


/*
 * 113 - Power Of Cryptography
 * Matemáticas - Potencias
 *
 * Dados n y p, encontrar la raiz n de p
 * */
using namespace std;

int main(){

    double p, n;

    while ( cin >> n ) {
        cin >> p;
        printf("%.0f\n",pow(p,1/n));
       // printf ("%ld\n", pow(p, 1/n));

    }
   return 0;
}



