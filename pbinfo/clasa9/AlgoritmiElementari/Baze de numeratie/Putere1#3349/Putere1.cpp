#include <iostream>
using namespace std;

int main()
{
    long long b, n, p, cpyP, pMod = 1, lastP = 1, fastPow;
    cin >> b >> n >> p;
    cpyP = p;

    while(cpyP)
    {
        pMod *= 10;
        cpyP--;
    }

    fastPow = b % pMod;

    while(n)
    {
        if(n % 2 == 1)
        {
            lastP = (lastP * fastPow) % pMod;
        }
        fastPow = (fastPow * fastPow) % pMod;
        n /= 2;
    }

    cout << lastP;

    return 0;
}