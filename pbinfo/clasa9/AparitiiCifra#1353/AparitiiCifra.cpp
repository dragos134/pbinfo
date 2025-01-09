#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("aparitiicifra.in");
ofstream fout("aparitiicifra.out");

short nr_cif(int n, short c)
{
    short cnt = 0;
    while(n)
    {
        if(n % 10 == c)
        {
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}

int main()
{
    int n, cpyn, cnt = 1;
    long long p = 1;
    short c;
    fin >> n >> c;
    cpyn = n;
    while(n > 99)
    {
        cnt = cnt * 10 + 9 * p;
        p *= 10;
        n /= 10;
    }
    if(n / 10 > c)
    {
        cnt += p;
    }
    return 0;
}