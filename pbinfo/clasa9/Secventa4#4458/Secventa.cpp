#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("secventa4.in");
ofstream fout("secventa4.out");

int main()
{
    int n, v[1000];
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];

    int st = 1, dr = 1, l = 0, sm = 0, dm = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] % 10 == v[i + 1] % 10)
        {
            dr++;
        }
        if (v[i] % 10 != v[i + 1] % 10 || i + 1 == n)
        {
            if (dr - st > l)
            {
                sm = st;
                dm = dr;
                l = dr - st;
            }
            st = i + 1;
            dr = i + 1;
        }
    }

    fout << sm << ' ' << dm;
}