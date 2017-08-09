
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <set>
#include <list>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;
/*
1709 - Amalgamated Artichokes
-Proceso matemático
Dada una fórmula, encontrar su pico y la máxima diferencia con el punto más bajo

*/
int main() {


    int p = 100, a = 7, b = 615, c = 998, d = 801, n = 3;

            double difMayor = 0, price = 0;
            double precioMinimo;
            double precioMaximo;
           // Scanner input = new Scanner(System.in);
            while (cin >> p) {
                //cin >> p;
                cin >> a;
                cin >> b;
                cin >> c;
                cin >>d;
                cin >> n;
                 precioMaximo = precioMinimo = p
                      * (sin(a + b) + cos(c + d) + 2);

                for (int k = 2; k <= n; k++) {
                    price = p * (sin(a * k + b) + cos(c * k + d) + 2);

                    if (price < precioMinimo) {
                        difMayor = max(difMayor, (precioMaximo - price));
                        precioMinimo = price;

                    } else if (price >= precioMaximo) {
                        precioMinimo = precioMaximo = price;
                    }

                }
                printf("%.6f\n",difMayor);
                difMayor = 0;
            }

    return 0;
}
