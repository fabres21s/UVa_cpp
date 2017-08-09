
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>


/*
 * 11727 - Cost Cutting
 * Muy fácil
 *
 * Dados a,b y c, imprimir el número de la mitad
 * */
using namespace std;

int main(){

    int testCases;
    cin >> testCases;
    int a,b,c, middle;
    for (int i=1; i <= testCases; i++) {

        cin >> a;
        cin >> b;
        cin >> c;

        middle = b;

        if ( (a > b && a < c) || (a >c && a < b) ) {
            middle = a;
        } else if ( (c > b && b < a) || (c > a && c < b) ) {
            middle = c;
        }


        printf ("Case %d: %d\n", i, middle);
    }
   return 0;
}



