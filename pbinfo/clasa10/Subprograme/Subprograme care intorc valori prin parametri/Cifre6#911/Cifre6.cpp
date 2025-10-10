#include <iostream>
using namespace std;

void numar(int n, int k, int &x)
{
    x = 0;
    while(k)
    {
        k--;
        long long cpyN = n, cifMax = 0, sufixMax = 0, sufix = 0, p = 1, pMax = 1;
        while(cpyN)
        {
            int uCif = cpyN % 10;
            if(uCif > cifMax)
            {
                cifMax = uCif;
                sufixMax = sufix;
                pMax = p * 10;
            }
            cpyN /= 10;
            sufix = p * uCif + sufixMax;
            p *= 10;
        }
        n = n / pMax * (pMax / 10) + sufixMax;
        x = 10 * x + cifMax;
    }
}


int main()
{
    int x;
    numar(1999999999, 10 , x);
    cout << x;
    return 0;
}