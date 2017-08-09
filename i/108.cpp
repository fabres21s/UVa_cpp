
#include <stdlib.h>
#include <iostream>
#include <map>
#include <set>


/*
108 - Maximum Sum
Arreglos
Lo entenderá su puta madre, que ejercicio más enredado
 * */
using namespace std;

#define Dif(i,j,k) (Table[i+k][j] - Table[i][j])

int main(){

    int N;

    while (cin >> N) {

        int Table[N+2][N+2] ;

       for (int i = 0; i <N+2; i ++ ) {
            for (int j=0; j <N+2; j++) {
                    Table[i][j] = 0;
            }
       }
        for (int i = 1; i <= N; i++) {
                        for (int j = 0; j < N; j++){
                           cin >> Table[i][j];

                        }
        }


        int i, j, k, t;
          for(i = 1; i<=N; i++)
          {
                  for(j = 0; j<N; j++)
                         Table[i][j] =  Table[i][j] + Table[i-1][j];
          }

         int  MAX = Table[1][0];
          for(k = 1; k<=N; k++)
          {
                  for(i = 0; i<=N-k; i++)
                  {
                           for(t = 0, j = 0; j<N; j++)
                          {
                                 if(t>=0)
                                         t+= Dif(i,j,k);
                                 else
                                         t = Dif(i,j,k);
                                 if(t>MAX)
                                         MAX = t;
                          }
                  }
          }
          printf("%d\n",MAX);
    }


   return 0;
}

