#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fotbal.in");
ofstream fout("fotbal.out");


int main()
{
    int cpy_n, n, c, e, p, pct_curent, pct_max = 0, p_min = 10000;
    fin >> n;
    cpy_n = n;
    while(n > 0)
    {
        n--;
        fin >> c >> p >> e;

        pct_curent = 3 * c + e;
        if (pct_curent > pct_max)
        {
            pct_max = pct_curent;
        }

        if (p > 0 && p < p_min)
        {
            p_min = p;
        }
        cout << p_min << ' ';
    }

    if (cpy_n%2)
    {
        fout << p_min;
    }
    else
    {
        fout << pct_max;
    }
    return 0;
}