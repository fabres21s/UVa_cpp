
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <map>


/*
 *591 - Box of Bricks
 *De un conjunto de números, sacar el promedio, y sumar cuanto se pasa cada número mayor, de ese promedio
 *
 * -Arreglos
 */

using namespace std;

int main(){

        int stacks;
        int cases = 0;
        while ( true) {

            cin >> stacks;

            if (stacks == 0) {
                break;
            }
            cases ++;
            int arreglo[stacks];

            int sum = 0;
            for (int i = 0; i < stacks; i++) {
                cin >> arreglo[i];
                sum += arreglo[i];
            }

            sum = sum/stacks;
            int changes = 0;
            for (int i=0; i < stacks; i++) {
                if (arreglo[i] > sum) {
                    changes += arreglo[i] - sum;
                }
            }
            printf("Set #%d\nThe minimum number of moves is %d.\n\n", cases, changes);

        }
       return 0;
}

