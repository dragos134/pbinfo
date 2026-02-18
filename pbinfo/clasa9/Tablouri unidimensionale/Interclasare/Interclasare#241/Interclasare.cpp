#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int main()
{
    int n, m, a[100000], b[100000], c[200000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    fin >> m;
    for(int j = 0; j < m; j++)
    {
        fin >> b[j];
    }

    int ia = 0, ib = 0;
    for(int i = 0; i < n + m; i++)
    {
        if(ia >= n)
        {
            c[i] = b[ib];
            ib++;
        }
        else if (ib >= m)
        {
            c[i] = a[ia];
            ia++;
        }
        else if(a[ia] < b[ib])
        {
            c[i] = a[ia];
            ia++;
        }
        else
        {
            c[i] = b[ib];
            ib++;
        }
    }

    for(int i = 0; i < n + m; i++)
    {
        fout << c[i] << ' ';
        if((i + 1) % 10 == 0)
        {
            fout << endl;
        }
    }
    return 0;
}