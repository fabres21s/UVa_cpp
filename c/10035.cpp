
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


/*
 *  10035 - Primary Arithmetic
 * - Matemáticas
 * - Contar el número de veces que hay una operación de acarreo en una suma
 * */


using namespace std;

int main(){

    long a = 0, modA;
    cin >> a;
   // int arreglo_a [10];

    long b, modB ;
   // int arreglo_b[10];
    cin >>b;

    while (a != 0 || b != 0){

        int carry=0;
        int carryOperations = 0;
    for (int i=0; i <10; i++){
        modA = a % 10;
        a /= 10;

        modB = b %10;
        b/=10;
        if ( (modA + modB + carry) > 9){
            carryOperations ++;
            carry = 1;
        } else {
            carry = 0;
        }


    }

    if (carryOperations == 0) {
        cout << "No carry operation." << endl;
    } else if (carryOperations == 1) {
        cout << "1 carry operation." << endl;
    } else {
        cout << carryOperations << " carry operations."<<endl;
    }
    //cout<<"Carry operations "<<carryOperations<<endl;




        cin >>a;
        cin >> b;
    }



   return 0;

}
