
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


unsigned int reverse(unsigned int n);

/*
 *10018 - Reverse and Add
 * Tomar un número, ver si al revés es el mismo,
 * si no lo es, sumarlo hasta que sea el mismo
 */

//#define MAX =  50;
using namespace std;

int main(){

    int test;
    cin >> test;

    while (test > 0){

         unsigned int n;
        cin >> n;
        int count = 0;
        while(reverse(n) != n && count <30){
            n += reverse(n);
          // cout<<"value "<<n<<endl;
            count++;
        }
        cout<<count<<" "<<n<<endl;
        test--;
    }
   return 0;

}


 unsigned int reverse(unsigned int num) {
        long dig = 0;
        unsigned int rev = 0;
        while (num > 0) {
            dig = num % 10;
            rev = rev * 10 + dig;
            num = num / 10;
        }
        return rev;
    }
