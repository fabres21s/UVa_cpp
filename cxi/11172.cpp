
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;


/*
11172 - Relational Operator
- Muy fácil
Validar si un número es mayor, menor o igual a otro
*/

int main(void){

    int n;

    cin >> n;
    int a, b;
    while ( (n -- > 0)  ){

        cin >> a;
        cin >> b;
        //cout<<a<<" "<<b<<endl;
        if (a > b){
            cout<<">"<<endl;
        } else if (a < b){
            cout<<"<"<<endl;
        } else {
            cout<<"="<<endl;
        }
    }

}

