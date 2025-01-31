#include <iostream>

using namespace std;

int main()
{
    int n, x, asocmax = 0, nrmax = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        int asoc = 0, p = 1, cpyx = x;
        while(x)
        {
            if(x % 10 % 2 == 0)
            {
                asoc = p * (x % 10) + asoc;
                p *= 10;
            }
            x /= 10;
        }
        if(asoc > asocmax)
        {
            asocmax = asoc;
            nrmax = cpyx;
        }
        if(asoc == asocmax && cpyx > nrmax)
        {
            nrmax = cpyx;
        }
    }

    cout << nrmax;
    return 0;
}