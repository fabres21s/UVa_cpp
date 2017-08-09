
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>


/*
 *10189 - Minesweeper
 *
    Buscaminas, en un arreglo determinar cuantas minas (*) adyacentes hay,
    si el sitio es seguro (.)
 *
 * - Arreglos
 */

using namespace std;

int main(){


    int rows, columns;
    cin >> rows;
    cin >> columns;
    int cases = 0;

    char table[105][105];
    while (rows > 0 && columns > 0){


        for (int i = 0; i<105; i++){
            for (int j =0; j<105; j++){
                table[i][j] = '.';
            }
        }
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                table[i][j] = '0';
                cin >> table[i][j];

                //cout<<"asignando "<<table[i][j];
            }
        }




        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){

                if (table[i][j] == '.'){

                    //cout<<"evaluando "<<table[i][j]<<endl;
                     int mines = 0;

                     if (table[i-1][j-1] == '*'){
                         mines++;
                     }

                     if (table[i-1][j] == '*'){
                         mines++;
                     }

                     if (table[i-1][j+1] == '*'){
                         mines++;
                     }

                     if (table[i][j-1] == '*'){
                         mines++;
                     }

                     if (table[i][j+1] == '*'){
                         mines++;
                     }

                     if (table[i+1][j-1] == '*'){
                         mines++;
                     }

                     if (table[i+1][j] == '*'){
                         mines++;
                     }

                     if (table[i+1][j+1] == '*'){
                         mines++;
                     }

                    table[i][j] = (char)(mines + 48);//convertido a ascii
                   // cout<<"asignando "<<table[i][j]<<" "<<mines<< endl;
                }
           }
        }


        cases++;
        printf("Field #%d:\n", cases);
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= columns; j++){
                cout<<table[i][j];
            }
            printf("\n");
        }


        cin >> rows;
        cin >> columns;

        if (rows > 0){
            printf("\n");
        }
    }
   return 0;
}

