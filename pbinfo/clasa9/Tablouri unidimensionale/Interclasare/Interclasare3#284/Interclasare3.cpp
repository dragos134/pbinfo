#include <fstream>

using namespace std;

ifstream fin("interclasare3.in");
ofstream fout("interclasare3.out");

int main()
{
    int n, m, a[100000], b[100000], c[200000];
    fin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    for(int i = 0; i < m; i++)
    {
        fin >> b[i];
    }

    int ia = 0, ib = m - 1, ic = 0;
    while((ia < n && ib >= 0))
    {
        if(a[ia] < b[ib])
        {
            if(a[ia] % 2 == 0)
                c[ic++] = a[ia];
            ia++;
        }
        else
        {
            if(b[ib] % 2 == 0)
                c[ic++] = b[ib];
            ib--;
        }
    }

    while(ia < n)
    {
        if(a[ia] % 2 == 0)
            c[ic++] = a[ia];
        ia++;
    }
    while(ib >= 0)
    {
        if(b[ib] % 2 == 0)
            c[ic++] = b[ib];
        ib--;
    }

    for(int i = 0; i < ic; i++)
    {
        fout << c[i] << ' ';
        if((i + 1) % 20 == 0)
        {
            fout << endl;
        }
    }

    return 0;
}