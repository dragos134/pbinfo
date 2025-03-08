#include <iostream>

using namespace std;

int GenNr1(long long a, long long b)
{
    short nrmin = 100, nrmax = 0;
    long long cpyb = b;
    if(!a || !b)
    {
        a = max(a, b);
        b = 0;
    }
    while(a)
    {
        b = cpyb;
        if(b == 0)
        {
            short nr = a % 10 * 10;
            if(nr < nrmin)
            {
                nrmin = nr;
            }
            if(nr > nrmax)
            {
                nrmax = nr;
            }
        }
        while(b)
        {
            short nr1 = a % 10 * 10 + b % 10;
            short nr2 = b % 10 * 10 + a % 10;
            
            if(nr1 > nrmax && nr1 > 9)
            {
                nrmax = nr1;
            }
            if(nr2 > nrmax && nr2 > 9)
            {
                nrmax = nr2;
            }
            if(nr1 < nrmin && nr1 > 9)
            {
                nrmin = nr1;
            }
            if(nr2 < nrmin && nr2 > 9)
            {
                nrmin = nr2;
            }

            b /= 10;
        }
        a /= 10;
    }

    return nrmin * 100 + nrmax;
}

int GenNr2(long long a, long long b)
{
    short cifmina = 10, cifmaxa = 0, cifminb = 10, cifmaxb = 0;
    short nrmin = 100, nrmax = 0;
    bool exista_zero = false;

    if (a == 0)
    {
        cifmina = 0;
        exista_zero = true;
    }
    while(a)
    {
        if(a % 10 > cifmaxa)
        {
            cifmaxa = a % 10;
        }
        if(a % 10 < cifmina && a % 10 > 0)
        {
            cifmina = a % 10;
        }
        if(a % 10 == 0)
        {
            exista_zero = true;
        }
        a /= 10;
    }

    if (b == 0)
    {
        cifminb = 0;
        exista_zero = true;
    }
    while(b)
    {
        if(b % 10 > cifmaxb)
        {
            cifmaxb = b % 10;
        }
        if(b % 10 < cifminb && b % 10 > 0)
        {
            cifminb = b % 10;
        }
        if(b % 10 == 0)
        {
            exista_zero = true;
        }

        b /= 10;
    }

    if(!exista_zero)
    {
        nrmin = min(cifmina, cifminb) * 10 + max(cifmina, cifminb);
    }
    else
    {
        nrmin = min(cifmina, cifminb) * 10;
    }
    nrmax = max(cifmaxa, cifmaxb) * 10 + min(cifmaxa, cifmaxb);

    return nrmin * 100 + nrmax;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    int nr = GenNr1(a, b);
    cout << nr / 100 << ' ' << nr % 100;

    return 0;
}