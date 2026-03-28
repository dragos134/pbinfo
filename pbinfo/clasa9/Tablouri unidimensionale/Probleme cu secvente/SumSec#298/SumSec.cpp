#include <fstream>

using namespace std;

ifstream fin("sumsec.in");
ofstream fout("sumsec.out");

int este_prim(int nr)
{
    if(nr < 2)
    {
        return 0;
    }
    if(nr == 2)
    {
        return 1;
    }
    if(nr % 2 == 0)
    {
        return 0;
    }

    for(int i = 3; i * i <= nr; i += 2)
    {
        if(nr % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    long long n, a[1000], i1 = 0, i2, s = 0;
    fin >> n;
    i2 = n - 1;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    while(!este_prim(a[i1]))
    {
        i1++;
    }

    while(!este_prim(a[i2]))
    {
        i2--;
    }

    for(int i = i1; i <= i2; i++)
    {
        s += a[i];
    }

    fout << s;

    return 0;
}