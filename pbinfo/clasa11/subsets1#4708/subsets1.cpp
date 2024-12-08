#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("subsets.in");
ofstream fout("subsets.out");

long long combinari(int n, int k)
{
    if (k >= n / 2)
    {
        k = n - k;
    }
}

int main()
{
    int n;
    fin >> n;

    return 0;
}