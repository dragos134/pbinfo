#include <fstream>

using namespace std;

ifstream fin("clase.in");
ofstream fout("clase.out");

int main()
{
    int n, m, cnt = 0;
    long long a[10000], b_nr;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    fin >> m;
    for(int i = 0; i < m; i++)
    {
        fin >> b_nr;
        int st = 0, dr = n - 1;
        while(st <= dr)
        {
            int mij = (st + dr) / 2;
            if(b_nr < a[mij])
            {
                dr = mij - 1;
            }
            else if(a[mij] < b_nr)
            {
                st = mij + 1;
            }
            else
            {
                cnt++;
                break;
            }
        }
    }

    fout << cnt;

    return 0;
}