
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <string.h>


/*
 * 494 - Kindergarten Counting Game
 * Estructura de Datos  - Arreglos
 * Contar las palabras en un línea, una palabra definida como una serie de letras
 * y la separación son las no letras, es decir (espacios, números, símbolos...)
 * ej, asdv-9sds
 * Son dos palabras
 *
 * */


using namespace std;

int main(){

    char  line [1024] ;

   while (gets( line)){
  //     tokens = strtok(line, " ");

       bool nuevaPalabra = true;
       int ascii =0;
       int count = 0;
        for (int i = 0; i < 1024; i++){
            ascii = (int) line[i];

            if (ascii == 0){
                break;
            } else if ((ascii > 96 && ascii <123) || (ascii > 64 && ascii < 91)){

                if (nuevaPalabra) {
                    count ++;
                }
                nuevaPalabra = false;

            } else {
                nuevaPalabra = true;
            }
           // cout<<ascii<<" cantidad de palabras "<<count<<" character "<<line[i]<<endl;


        }

        cout<<count<<endl;
   }

   return 0;

}
/*
So if on advanced SO addition absolute received ....*&23so90-+    So replying throwing he. Delighted consisted newspaper of unfeeling as neglected so.
Tell size come hard mrs and four fond are. Of in commanded earnestly resources it. Tell (mrs)
At quitting in strictly up wandered of relation answered felicity. [ . . . . . .  ; "
       Side          need at... ...in/s,. what dear ever upon if... Same down want at ""joy neat ask pain help [][]``she.
Alone three stuff use law walls fat asked. Near do that     walls walls walls------he help.
Much residence dashwoods she 28402342042excellent you.\\ Shade being under his bed her. Much read on as draw.
Blessing for ignorant exercise any yourself unpacked.any.....anyanyanay....-0-23any
Pleasant horrible but confined day end marriage. marriage M arriage carriage.
Eagerness furniture set preserved far recommend.
It        abode          wrong miles an so delay plate. She relation own put        \\\\outl///ived may disposed. */

