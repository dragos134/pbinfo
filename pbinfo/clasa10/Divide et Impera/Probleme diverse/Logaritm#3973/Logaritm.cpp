#include <iostream>
#include <math.h>
#include <iomanip> 

using namespace std;

double logaritm(double n, int zecimale)
{
    double rez = 1;
    if(zecimale > 0)
    {
        rez = logaritm(n, zecimale - 1);
    }
    double p = 1;
    while(zecimale)
    {
        zecimale--;
        p /= 10.0;
    }

    while(pow(M_E, rez) <= n)
    {
        rez += p;
    }
    rez -= p;

    return rez;
}

int main()
{
    double n;
    cin >> n;
    cout << fixed << setprecision(6) << logaritm(n, 6);
    return 0;
}