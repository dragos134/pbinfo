#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("binar.in");
ofstream fout("binar.out");

int binar(int n)
{
    int nr = 0;
    while (n != 0)
    {
        nr += n % 2;
        n /= 2;
    }
    return nr;
}

int main()
{
    int n, c, v[10000];
    fin >> c;
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];

    if (c == 1)
    {
        int max = 0, nri;
        for (int i = 1; i <= n; i++)
        {
            int nr = binar(v[i]);
            if (max < nr)
            {
                max = nr;
                nri = v[i];
            }
            else if (max == nr)
            {
                if (v[i] > nri)
                    nri = v[i];
            }
        }

        fout << nri;
    }
    else
    {
        int a[1000];
        for (int i = 1; i <= n; i++)
        {
            a[i] = binar(v[i]);
        }

        int lmax = 0, l = 1, poz = 1;
        for (int i = 1; i < n; i++)
        {
            cout << i << ' ';
            if (a[i] == a[i + 1])
            {
                l++;
            }
            if (a[i] != a[i + 1] || i + 1 == n)
            {
                cout << l << ' ' << lmax << ' ' << poz << ' ';
                if (lmax < l)
                {
                    lmax = l;
                    poz = i - l + 1;
                    if (i + 1 == n)
                        poz++;
                    l = 1;
                }
            }
            cout << endl;
        }
        fout << lmax << ' ' << poz;
    }
}