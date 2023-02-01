#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{

    float V1[3], V2[3], V3[3];
    double i, j, k, i1, j1, k1, resul[3], suma;
    int ix;

    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del primer vector: " << endl;
        cin >> V1[ix];
    }
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del segundo vector: " << endl;
        cin >> V2[ix];
    }
    for (ix = 0; ix < 3; ix++)
    {
        cout << "Introduce el " << ix + 1 << " valor del tercer vector: " << endl;
        cin >> V3[ix];
    }

    i = (V2[1] * V3[2]) - (V2[2] * V3[1]);
    j = -((V2[0] * V3[2]) - (V2[2] * V3[0]));
    k = (V2[0] * V3[1]) - (V2[1] * V3[0]);

    i1 = V1[0] * i;
    j1 = V1[1] * j;
    k1 = V1[2] * k;


    suma = i1 + j1 + k1;

    cout << "El producto escalar triple es: \n\n";

    system("pause");
    cout << "\n\n";
    return 0;

}