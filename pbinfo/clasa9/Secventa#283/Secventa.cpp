#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("secventa.in");
ofstream fout("secventa.out");

int main()
{
    int n, v[100000];
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];

    int st = 1, dr = 1, sum = v[1], l = 0, sm = 1, dm = n, sumax = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] % 2 != v[i + 1] % 2)
        {
            dr++;
            sum += v[i + 1];
        }
        if (v[i] % 2 == v[i + 1] % 2 || i + 1 == n)
        {
            if (dr - st + 1 == l)
            {
                if (sum >= sumax)
                {
                    sm = st;
                    dm = dr;
                    sumax = sum;
                }
            }
            else if (dr - st + 1 > l)
            {
                l = dr - st + 1;
                sm = st;
                dm = dr;
                sumax = sum;
            }

            dr = i + 1;
            st = i + 1;
            sum = v[st];
        }
    }
    fout << sm << ' ' << dm;

    return 0;
}