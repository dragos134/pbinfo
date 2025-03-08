#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("maxcadou.in");
ofstream fout("maxcadou.out");

int main()
{
    long long n, new_n, cifra_maxima, max_n = 0, new_n_cpy, p, nr_cifre_n = 0, nr_de_zero = 1;
    fin >> n;
    new_n = n;

    while (n)
    {
        if (n % 10 == 0)
        {
            nr_de_zero *= 10;
        }
        n /= 10;
        nr_cifre_n++;
    }

    while (new_n)
    {
        new_n_cpy = new_n;
        cifra_maxima = 0;

        // gasirea cifrei maxima si numarului ei de aparitii
        while (new_n_cpy)
        {
            int ultima_cifra = new_n_cpy % 10;
            if (ultima_cifra > cifra_maxima)
            {
                cifra_maxima = ultima_cifra;
            }
            new_n_cpy /= 10;
        }

        new_n_cpy = new_n;

        // eliminarea cifrei maxime si gasirea noului n
        p = 1;
        // cout << nr_cifre_n << ' ' << cifra_maxima << ' ' << new_n << ' ';
        new_n = 0;

        while (new_n_cpy)
        {
            int ultima_cifra = new_n_cpy % 10;
            if (ultima_cifra == cifra_maxima)
            {
                max_n = max_n * 10 + ultima_cifra;
                nr_cifre_n--;
            }
            else
            {
                new_n = p * ultima_cifra + new_n;
                p *= 10;
            }
            new_n_cpy /= 10;
        }
        // cout << endl;
    }

    fout << nr_de_zero * max_n;
}