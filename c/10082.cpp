
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <map>


/*
 *10082 - WERTYU
 *
 * El teclado está corrido un caracter a la derecha,
    encontrar el texto original
 *
 * - Map
 */

using namespace std;

int main(){

        map<char, char> wertyu;
        wertyu['W'] = 'Q';
        wertyu['E'] = 'W';
        wertyu['R'] = 'E';
        wertyu['T'] = 'R';
        wertyu['Y'] = 'T';
        wertyu['U'] = 'Y';
        wertyu['I'] = 'U';
        wertyu['O'] = 'I';
        wertyu['P'] = 'O';
        wertyu['['] = 'P';
        wertyu[']'] = '[';
        wertyu['\\'] = ']';

        wertyu['1'] = '`';
        wertyu['2'] = '1';
        wertyu['3'] = '2';
        wertyu['4'] = '3';
        wertyu['5'] = '4';
        wertyu['6'] = '5';
        wertyu['7'] = '6';
        wertyu['8'] = '7';
        wertyu['9'] = '8';
        wertyu['0'] = '9';
        wertyu['-'] = '0';
        wertyu['='] = '-';

        wertyu['S'] = 'A';
        wertyu['D'] = 'S';
        wertyu['F'] = 'D';
        wertyu['G'] = 'F';
        wertyu['H'] = 'G';
        wertyu['J'] = 'H';
        wertyu['K'] = 'J';
        wertyu['L'] = 'K';
        wertyu[';'] = 'L';
        wertyu[(char)39] = ';';


        wertyu['X'] = 'Z';
        wertyu['C'] = 'X';
        wertyu['V'] = 'C';
        wertyu['B'] = 'V';
        wertyu['N'] = 'B';
        wertyu['M'] = 'N';
        wertyu[','] = 'M';
        wertyu['.'] = ',';
        wertyu['/'] = '.';
        wertyu[' '] = ' ';

        char c;
        while( (c = cin.get())  != EOF){
            if (c == '\n'){
                cout<<endl;
            } else {
                cout << wertyu.find(c)->second;
            }
        }


       return 0;
}

