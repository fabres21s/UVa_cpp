
#include <stdlib.h>
#include <iostream>
#include <cstdio>

using namespace std;

/*
 *458 - The Decoder
 * - Cadena de caracteres
 * - Reemplazar un caracter por su ASCII - 7
 *
 * */

int main(){

    char c;
    while( (c =cin.get()) != EOF ){//se parece al buffered reader que lee caracter por caracter

        if (c == '\n'){
            cout<<endl;
        } else
            cout<<(char)((int)c - 7);

    }

}

