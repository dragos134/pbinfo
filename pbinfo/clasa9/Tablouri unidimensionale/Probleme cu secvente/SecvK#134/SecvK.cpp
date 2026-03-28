#include <fstream>

using namespace std;

ifstream fin("secvk.in");
ofstream fout("secvk.out");

int main()
{
    int n, k, a[100000], s = 0, smax = 0, imax = 0;
    fin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < k; i++)
    {
        s += a[i];
    }

    smax = s;

    for(int i = k; i < n; i++)
    {
        s = s - a[i - k] + a[i];
        if(s > smax)
        {
            smax = s;
            imax = i - k + 1;
        }
    }

    for(int i = imax; i < imax + k; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}