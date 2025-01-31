#include <iostream>

using namespace std;

long long cmmnr1(long long n)
{
    long long cpyn = n, nr = 0, p = 1;
    short cifmin = 10, imin = 0, i = 0;
    while(n)
    {
        if (n % 10 <= cifmin)
        {
            imin = i;
            cifmin = n % 10;
        }
        i++;
        n /= 10;
    }

    n = cpyn;
    i = 0;
    while(n)
    {
        if(i != imin)
        {
            nr = n % 10 * p + nr;
            p *= 10;
        }
        i++;
        n /= 10;
    }
    return nr;
}

short nr_cif(long long n)
{
    short cif = 0;
    while(n)
    {
        cif++;
        n /= 10;
    }
    return cif;
}

long long cmmnr2(long long n)
{
    short cif = nr_cif(n);
    long long cpyn = n, nrmax = 0;
    for(short i = 0; i < cif; i++)
    {
        n = cpyn;
        short j = 0;
        long long nr = 0, p = 1;
        while(n)
        {
            if(j != i)
            {
                nr = n % 10 * p + nr;
                p *= 10;
            }
            j++;
            n /= 10;
        }

        if(nr > nrmax)
        {
            nrmax = nr;
        }
    }
    return nrmax;
}

int main()
{
    long long n;
    for(long long i = 10; i <= 1000; i++)
    {
        long long c1 = cmmnr1(i), c2 = cmmnr2(i);
        if(c1 != c2)
        {
            cout << i << ' ' << c1 << ' ' << c2 << endl;
        }
    }
    return 0;
}