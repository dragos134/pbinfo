#include <fstream>

using namespace std;

ifstream fin("secvcresc.in");
ofstream fout("secvcresc.out");

int main()
{
    int n, a[10000], cnt = 1, cntmax = 0, imax = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if(i + 1 < n && a[i] < a[i + 1])
        {
            cnt++;
        }
        else
        {
            if(cnt > cntmax)
            {
                cntmax = cnt;
                imax = i;
            }
            cnt = 1;
        }
    }

    fout << imax - cntmax + 2 << ' ' << imax + 1;

    return 0;
}