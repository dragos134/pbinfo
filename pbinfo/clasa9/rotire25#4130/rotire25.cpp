#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("rotire25.in");
ofstream fout("rotire25.out");

long long remove_zero(long long nr)
{
    long long tn = 0, p = 1;
    while (nr)
    {
        if (nr % 10)
        {
            tn += p * (nr % 10);
            p *= 10;
        }
        nr /= 10;
    }
    return tn;
}

long long inverse_number(long long nr)
{
    long long tn = 0;
    while (nr)
    {
        tn = 10 * tn + nr % 10;
        nr /= 10;
    }
    return tn;
}

long long transformare1(long long nr)
{
    return inverse_number(remove_zero(nr * 5));
}

long long transformare2(long long nr)
{
    return inverse_number(remove_zero(nr * 2));
}

int main()
{
    long long x, k, c, ultima_cifra, ultima_cifra_p;
    fin >> c >> x >> k;

    if (c == 1)
    {
        ultima_cifra = x % 10;
        if (ultima_cifra == 2 || ultima_cifra == 3 || ultima_cifra == 7 || ultima_cifra == 8)
        {
            if (k % 4)
            {
                ultima_cifra_p = pow(ultima_cifra, k % 4);
            }
            else
            {
                ultima_cifra_p = pow(ultima_cifra, 4);
            }
            ultima_cifra_p = ultima_cifra_p % 10;
        }

        if (ultima_cifra == 0 || ultima_cifra == 1 || ultima_cifra == 5 || ultima_cifra == 6)
        {
            ultima_cifra_p = ultima_cifra;
        }

        if (ultima_cifra == 4 || ultima_cifra == 9)
        {
            ultima_cifra_p = pow(ultima_cifra, 2 - k % 2);
            ultima_cifra_p = ultima_cifra_p % 10;
        }

        while (x > 9)
        {
            x /= 10;
        }
        cout << ultima_cifra << ' ' << ultima_cifra_p << ' ' << x;

        fout << x * ultima_cifra_p;
    }

    if (c == 2)
    {
        long long i = 3;
        long long nr_nou_anterior2 = x;
        long long nr_nou_anterior1 = transformare1(nr_nou_anterior2);
        long long nr_nou = transformare2(nr_nou_anterior1);
        while (i <= k && nr_nou != nr_nou_anterior2)
        {
            nr_nou_anterior2 = nr_nou_anterior1;
            nr_nou_anterior1 = nr_nou;
            if (i % 2)
            {
                nr_nou = transformare1(nr_nou);
            }
            else
            {
                nr_nou = transformare2(nr_nou);
            }
            i++;
        }
        if ((k % 2) != (i % 2))
        {
            fout << nr_nou;
        }
        else
        {
            fout << nr_nou_anterior1;
        }
    }

    return 0;
}