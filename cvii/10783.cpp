
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


/*
 *  10783 - Odd Sum
 * - Matemáticas
 * - Hallar la sumatoria de números impares en un rango dado
 * - Obedece a la fórmula (1 + 3 + 5 + ... n) = n^2
 * */


using namespace std;

int main(){

    int cases = 0;
    cin >> cases;

    int a, b, sum;
    for (int i = 1; i <= cases; i++){

        cin >>a;
        cin >> b;

        sum = pow((b + 1)/2, 2) - pow((a/2), 2);
        printf("Case %d: %d\n", i,sum);

    }


   return 0;

}
