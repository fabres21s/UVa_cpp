
#include <stdlib.h>
#include <iostream>
#include <cstdio>



void solve(int b, int c, int g);

/*
 * 102 - Ecological Bin Packing
 * -Simulación
 * Mínimos movimientos necesarios para
 * intercambiar botellas de tres colores Brown, Clear y Gray
 * en tres cajas diferentes.
 * Inicialmente en desordem
 * */
int min = 1000000;
 int array [] = {20 ,1000 ,50, 2000, 50, 5000, 1500, 20, 30};
int x,y,z;


//using namespace std;

int main(){


    char arreglo [] = {'B','C','G'};

    int n;

    while ((std::cin >> n) ){

        min = 2147483647;
        array[0] = n;//b

    std::cin >>array[2];
    std::cin >>array[1];

    std::cin >>array[3];//b
    std::cin >>array[5];
    std::cin >>array[4];

    std::cin >>array[6];//b
    std::cin >>array[8];
    std::cin >>array[7];

        solve(0,1,2);
        solve(0,2,1);

        solve(1,0,2);
        solve(1,2,0);

        solve(2,0,1);
        solve(2,1,0);

        std::cout<<arreglo[x]<<arreglo[y]<<arreglo[z]<<" "<<min<<std::endl;

    }

}


void solve (int b,int c, int g){
    int moves = 0;
    switch (b){
        case 0://todas las b a la 1ra caja
         moves += (array[3] + array[6]);
        break;

        case 1://todas las c a la primera caja
             moves += (array[4] + array[7]);
            break;

        case 2://todas las g a la primera caja
         moves += (array[5] + array[8]);
           break;
    }

    switch (c){
        case 0://todas las b a la 2da caja
        moves += (array[0] + array[6]);
        break;

        case 1://todas las c a la 2da caja
            moves += (array[1] + array[7]);
            break;

        case 2://todas las g a la 2da caja
        moves += (array[2] + array[8]);
           break;
    }

    switch (g){
        case 0://todas las b a la 3ra caja
            moves += (array[0] + array[3]);

        break;

        case 1://todas las c a la 3ra caja
        moves += (array[1] + array[4]);
            break;

        case 2://todas las g a la 3ra caja
        moves += (array[2] + array[5]);
           break;
    }

 //   std::cout<<b<<" "<<c<<" " <<g<<" >> "<<moves<<std::endl;
    if (moves < min){
        min = moves;
        x = b;
        y = c;
        z = g;
    }

}


