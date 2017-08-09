
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <map>


/*
 *136 - Ugly Number
 *
 * Un número feo es aquel que sus divisores primos son 2, 3, 5
 * Hallar el feo 1500
 *
 * -Preprocesar
 */

using namespace std;

int main(){
/*
        int n = 1;
        int count = 0;
        int x= 0;
        while(count < 1500){
            x ++;
            n = x;
            while (n % 2 == 0){
                n = n /2;
            }

            while (n % 3 == 0){
                n = n / 3;
            }

            while (n % 5 == 0){
                n = n /5;
            }

            if (n == 1){
                count++;
                cout <<x << "  >> "<<count<<endl;
            }

        }*/

        cout<<"The 1500'th ugly number is 859963392."<<endl;

       return 0;
}

