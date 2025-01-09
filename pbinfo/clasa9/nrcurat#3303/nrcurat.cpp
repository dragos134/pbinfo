#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrcurat.in");
ofstream fout("nrcurat.out");

int main()
{
    int x;
    while(fin >> x)
    {
        int cpy = x, og = 0, p = 1;
        while(cpy)
        {
            og = og * 10 + cpy % 10;
            p *= 10;
            cpy /= 10;
        }
        fout << (p - 1 - og == x) << ' ';
    }
    return 0;
}
