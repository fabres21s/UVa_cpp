
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


/*
 *  10300 - Ecological Premium
 * -Fácil
 * Tres números, a, b y c, multiplicar a * c y llevar la sumatoria
 *
 * */


using namespace std;

int main(){

    int cases;
    cin >> cases;
    long a,b,c, sum;
    int f;
    for (int i = 0; i < cases; i++){
        cin >> f;
        sum = 0;
        for (int j = 0; j < f; j ++){
            cin >> a;
            cin >> b;
            cin >> c;
            sum = sum + a*c;
        }
        cout<<sum<<endl;


    }


   return 0;

}
