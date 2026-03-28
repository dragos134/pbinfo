#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("cb3.in");
ofstream fout("cb3.out");

int main()
{
    int n, q, a[10000], x;
    fin >> n >> q;

    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    sort(a, a + n);

    for(int i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }

    for(int i = 0; i < q; i++)
    {
        fin >> x;
        int st = 0, dr = n - 1, gasit = 0;
        if(x < a[0])
        {
            fout << 0 << '\n';
            continue;
        }
        while(st <= dr)
        {
            int mij = (st + dr) / 2;
            if(x >= a[mij])
            {
                gasit = mij;
                st = mij + 1;
            }
            else
            {
                dr = mij - 1;
            }
        }
        fout << gasit + 1 << '\n';
    }

    return 0;
}