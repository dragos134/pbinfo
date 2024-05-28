#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("echipe.in");
ofstream fout("echipe.out");

int main()
{
    long long n, i;
    fin >> n;
    i = 1;
    while (i * (i + 1) / 2 < n)
    {
        i++;
    }
    if (i * (i + 1) / 2 == n)
    {
        fout << 0;
    }
    else
    {
        fout << n - i * (i - 1) / 2;
    }

    return 0;
}