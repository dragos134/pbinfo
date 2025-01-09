#include <iostream>

using namespace std;

int main()
{
    long long n, cpyn, sufix = 0, p = 1, cpy_sufix;
    int cif = 0, i = 1;
    bool alipit = false;
    cin >> n;
    cpyn = n;

    while(n)
    {
        cif++;
        n /= 10;
    }

    n = cpyn;
    while(i <= cif / 2)
    {
        sufix = (n % 10) * p + sufix;
        p *= 10;
        cpy_sufix = sufix;
        if(cif % i == 0 && sufix)
        {
            while(cpy_sufix < cpyn)
            {
                cpy_sufix = cpy_sufix * p + sufix;
            }
            if(cpy_sufix == cpyn)
            {
                alipit = true;
                break;
            }
        }
        i++;
        n /= 10;
    }

    if(alipit)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }


    return 0;
}