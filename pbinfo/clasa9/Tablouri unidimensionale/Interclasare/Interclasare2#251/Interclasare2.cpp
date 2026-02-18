#include <fstream>

using namespace std;

ifstream fin("interclasare2.in");
ofstream fout("interclasare2.out");

int main()
{
    int n, m, a[100000], b[100000], c[200000];
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    fin >> m;
    for (int i = 0; i < m; i++)
    {
        fin >> b[i];
    }

    int ia = 0, ib = 0, ic = 0, i = 0;

    while (i < n + m)
    {
        while (a[ia] != b[ib] && i < n + m && ia < n && ib < m)
        {
            if (a[ia] < b[ib])
            {
                ia++;
            }
            else
            {
                ib++;
            }
            i++;
        }
        int ok = 0;
        if (a[ia] == b[ib])
        {
            c[ic] = a[ia];
            ok = 1;
        }
        while (a[ia] == c[ic] && ia < n && i < n + m)
        {
            ia++;
            i++;
        }
        while (b[ib] == c[ic] && ib < m && i < n + m)
        {
            ib++;
            i++;
        }
        if (ok)
        {
            ic++;
        }
        else
        {
            i++;
        }
    }

    for (int j = 0; j < ic; j++)
    {
        fout << c[j] << ' ';
        if ((j + 1) % 10 == 0)
        {
            fout << endl;
        }
    }
    return 0;
}