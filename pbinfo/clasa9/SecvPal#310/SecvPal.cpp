#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("secvpal.in");
ofstream fout("secvpal.out");

int main()
{
    int n, v[1000], l, lmax = 0, sm, dm;
    fin >> n;
    for (int i = 1; i <= n; i++)
        fin >> v[i];

    for (int st = 1; st < n; st++)
    {
        for (int dr = n; dr > st; dr--)
        {
            int stc = st, drc = dr;
            while (v[stc] == v[drc] && stc < drc)
            {
                stc++;
                drc--;
            }

            if (stc >= drc)
            {
                l = dr - st;
                if (l > lmax)
                {
                    lmax = l;
                    sm = st;
                    dm = dr;
                }
            }
        }
    }
    fout << sm << ' ' << dm;

    return 0;
}