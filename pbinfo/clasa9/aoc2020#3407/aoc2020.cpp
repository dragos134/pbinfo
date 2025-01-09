#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("aoc2020.in");
ofstream fout("aoc2020.out");

long long cmmdc(long long a, long long b)
{
    long long cpy;
    if(a < b)
    {
        swap(a, b);
    }

    while(a && b)
    {
        cpy = b;
        b = a % b;
        a = cpy;
    }

    return a + b;
}

int main()
{
    short n, x, div_com;
    long long mult_com = 1;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        div_com = cmmdc(x, mult_com);
        mult_com = x / div_com * mult_com;
    }

    fout << mult_com;

    return 0;
}