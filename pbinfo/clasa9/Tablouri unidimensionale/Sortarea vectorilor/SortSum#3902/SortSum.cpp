#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("sortsum.in");
ofstream fout("sortsum.out");

int sum_cif(int nr)
{
    int s = 0;
    while(nr)
    {
        s += nr % 10;
        nr /= 10;
    }

    return s;
}

int main()
{
    int n = 0, x, keys[10000];

    while(fin >> x)
    {
        int sc = sum_cif(x);
        keys[n] = sc * 10000000 + (10000000 - 1 - x);
        n++;
    }

    sort(keys, keys + n);

    for(int i = 0; i < n; i++)
    {
        int val = 10000000 - 1 - (keys[i] % 10000000);
        fout << val << ' ';
    }
    return 0;
}