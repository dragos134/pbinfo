#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("tripar.in");
ofstream fout("tripar.out");

int main()
{
    int n, m, p, x;
    fin >> p;
    fin >> n >> m;
    while (n)
    {
        n--;
        fin >> x;
        long long a = pow(2, m);
        if (p == 1)
        {
            fout << a * x * a * x << '\n';
        }
        if (p == 2)
        {
            fout << (a * x * (a * x - 1) * 3) / 2 << '\n';
        }
    }
    return 0;
}