#include <fstream>

using namespace std;

ifstream fin("perechi6.in");
ofstream fout("perechi6.out");

int main()
{
    int n, m, a[100000], b[100000];
    long long cnt = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    fin >> m;
    for(int i = 0; i < m; i++)
    {
        fin >> b[i];
    }

    int ia = 0, ib = 0;
    while(ia < n && ib < m)
    {
        if(a[ia] < b[ib])
        {
            ia++;
        }
        else if (a[ia] > b[ib])
        {
            ib++;
        }
        else
        {
            long long cnt_a = 1, cnt_b = 1;
            while(ia < n - 1 && a[ia] == a[ia + 1])
            {
                cnt_a++;
                ia++;
            }
            while(ib < m - 1 && b[ib] == b[ib + 1])
            {
                cnt_b++;
                ib++;
            }
            cnt = cnt + cnt_a * cnt_b;
            ia++;
            ib++;
        }
    }

    fout << cnt;

    return 0;
}