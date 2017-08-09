
#include <stdlib.h>
#include <iostream>
#include <math.h>


long  modular (long x, long y, long z);




using namespace std;


/*
12318 - Digital Roulette
-Modular
-Proceso matemático

Encontrar la cantidad de residuos generados tras ejecutar un polinomio
*/

int main(void){


       long sum;
       int k,n,m,i,j;

      // printf("hola!!");

       while(std::cin >> n >> m)
               {
        //    printf ("dentro del while %d %d \n", n,m);



                    n++;
                   if((n-1)==0 && m==0)
                   {
                    //   cout<<"son ceros"<<endl;
                       break;
                   }

                  cin >> k;

                  long  *arreglo = new long[10];
                  long  *solucion = new long [10000000];

                   for(i=0;i<=k;i++)
                   {
                       cin>>arreglo[i];
                   }
                 //  cout<<arreglo[0]<<endl;

                   for(i=0;i<=m;i++)
                   {
                       sum=0;
                       for(j=k;j>-1;j--)
                       {
                           //modular(i,j,n);
                           sum+=(modular(i,j,n)*arreglo[j])%n;
                       }
                       solucion[ (int)(sum%n)]=1;
                   }

                   sum=0;
                   for(i=0;i<n;i++)
                   {
                       if(solucion[i]>0)
                       {
                           sum++;
                       }
                   }


                   cout<<(sum)<<endl;


               }
}

long modular(long x, long y, long z)
   {

       long residuos[2][500];
       int i=-1,j;
       if(y==0)
           return z;
       do
       {
           i++;
           residuos[0][i]=pow(2, i);
       }while(residuos[0][i]<=y);
       residuos[1][0]=x%z;
       i=1;
       while(residuos[0][i]<=y)
       {
           residuos[1][i]=(residuos[1][i-1]*residuos[1][i-1])%z;
           i++;
       }
       i--;
       if(residuos[0][1]==y)
       {
           return (residuos[1][i]);
       }
       y-=residuos[0][i];
       while(y>0)
       {
           j=0;
           while(residuos[0][j]<=y)
           {
               j++;
           }
           j--;
           i++;
           residuos[0][i]=residuos[0][j]+residuos[0][i-1];
           residuos[1][i]=(residuos[1][j]*residuos[1][i-1])%z;
           y-=residuos[0][j];
       }
       return  (residuos[1][i]);
   }


