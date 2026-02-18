#include <fstream>

using namespace std;

ifstream fin("interclasare1.in");
ofstream fout("interclasare1.out");

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

    int ia = 0, ib = 0, ic = 1;
    if (a[ia] < b[ib])
    {
        c[0] = a[ia];
        ia++;
    }
    else
    {
        c[0] = b[ib];
        ib++;
    }
    for (int i = 1; i < n + m; i++)
    {
        if(ia >= n)
        {
            if (c[ic - 1] != b[ib])
            {
                c[ic] = b[ib];
                ic++;
            }
            ib++;
        }
        else if (ib >= m)
        {
            if (c[ic - 1] != a[ia])
            {
                c[ic] = a[ia];
                ic++;
            }
            ia++;
        }
        else if (a[ia] >= b[ib])
        {
            if (c[ic - 1] != b[ib])
            {
                c[ic] = b[ib];
                ic++;
            }
            ib++;
        }
        else
        {
            if (c[ic - 1] != a[ia])
            {
                c[ic] = a[ia];
                ic++;
            }
            ia++;
        }
    }

    for (int i = 0; i < ic; i++)
    {
        fout << c[i] << ' ';
        if ((i + 1) % 10 == 0)
        {
            fout << endl;
        }
    }

    return 0;
}