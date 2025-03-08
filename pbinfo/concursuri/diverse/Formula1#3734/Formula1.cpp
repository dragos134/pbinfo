#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("formula1.in");
ofstream fout("formula1.out");

int main()
{
    long long k, n, c, a = 0;
    fin >> c >> k >> n;
    if (c == 1)
    {
        fout << (2 * k - 1) * (2 * k - 1);
    }
    if (c == 2)
    {
        a = ((2 * n - 1) * 2 * n * (2 * (2 * n - 1) + 1) / 6 - 4 * (n - 1) * n * (2 * n - 1) / 6 - n) / 2;

        long long i = sqrt(2 * a + 1);
        if (!(i % 2))
        {
            i--;
        }
        fout << i * i;
    }
}