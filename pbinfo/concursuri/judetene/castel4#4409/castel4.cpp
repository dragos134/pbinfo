#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("castel.in");
ofstream fout("castel.out");

int main()
{
    long long c, n, nr_randuri = 1, suma = 0, rand_curent, x, numere_cu_o_cifra = 0;
    fin >> c >> n;
    while ((nr_randuri + 1) * (nr_randuri + 2) / 2 <= n)
    {
        nr_randuri++;
    }

    if (c == 1)
    {
        while (n)
        {
            fin >> x;
            if (x < 10)
            {
                numere_cu_o_cifra++;
            }
            n--;
        }
        fout << numere_cu_o_cifra;
        return 0;
    }

    n = nr_randuri * (nr_randuri + 1) / 2;
    rand_curent = nr_randuri;
    while (n > 1)
    {
        fin >> x;
        if (n != 1 && (n == rand_curent * (rand_curent + 1) / 2 || n == 1 + rand_curent * (rand_curent - 1) / 2))
        {
            suma += x;
        }
        else
        {
            suma += 2 * x;
        }
        if (n == 1 + rand_curent * (rand_curent - 1) / 2)
        {
            rand_curent--;
        }
        n--;
    }

    if (c == 2)
    {
        fin >> x;
        fout << nr_randuri << ' ' << x;
    }
    if (c == 3)
    {
        fout << nr_randuri * (nr_randuri - 1) / 2 << ' ' << suma;
    }
    return 0;
}