#include <fstream>
#include <cmath>

using namespace std;

ifstream fin("k2.in");
ofstream fout("k2.out");

int main()
{
    long long c, n, baza;
    fin >> c >> n;
    baza = (int)(sqrt(n));
    if(c == 1)
    {
        fout << baza + 1;
    }
    if(c == 2)
    {
        long long start = baza * baza;
        if(n - start < baza)
        {
            fout << baza - n + start + 1;
        }
        else
        {
            fout << n - start - baza + 1;
        }
    }
    return 0;
}