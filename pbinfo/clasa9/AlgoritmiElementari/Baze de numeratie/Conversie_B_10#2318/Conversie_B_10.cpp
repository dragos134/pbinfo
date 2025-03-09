#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("conversie_b_10.in");
ofstream fout("conversie_b_10.out");

int main()
{
    int n, b, nrB = 0, p = 1;
    fin >> n >> b;
    while(n)
    {
        nrB = p * (n % 10) + nrB;
        p *= b;
        n /= 10;
    }
    fout << nrB;
    return 0;
}