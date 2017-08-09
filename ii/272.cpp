
#include <stdlib.h>
#include <iostream>
#include <math.h>


using namespace std;

/*
     272 - Tex Quotes
- Cadena de caracteres, reemplazar
Reemplazar la primer comilla por `` y la segunda por ''

*/

int main(void){

    string line;

    int count = 0;
    while (getline(cin , line)){


        int first = line.find_first_of('"');

        while (first > -1){
           // cout<<"The first occurency is "<<first<<endl;

            if (count == 0) {

                 line.replace(first, 1, "``");

                 count =1;
            } else {
                line.replace(first, 1, "''");
                count = 0;
            }
          //  cout<<line<<endl;
            first = line.find_first_of('"');
        }
      cout<<line<<endl;






    }

}

