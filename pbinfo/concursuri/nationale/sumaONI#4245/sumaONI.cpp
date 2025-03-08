#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sumaoni.in");
ofstream fout("sumaoni.out");

int main()
{
    int n, d = 1, p, h;
    fin >> n;
    while (d * (d + 1) / 2 < n || (d * (d + 1) / 2) % 2 != n % 2)
    {
        d++;
    }

    fout << d << endl;
    p = d * (d + 1) / 2;
    if (p == n)
    {
        return 0;
    }
    h = (p - n) / 2;
    if (h < d)
    {
        fout << h;
    }
    else
    {
        fout << h - d << '\n'
             << d;
    }

    return 0;
}