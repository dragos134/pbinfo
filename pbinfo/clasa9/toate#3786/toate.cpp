#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("toate.in");
ofstream fout("toate.out");

int main()
{
    int n, x, xmax = 0;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        int fn = 0, p = 1;
        while(x)
        {
            if(x % 10 != 9)
            {
                fn = p * (x % 10) + fn;
                p *= 10;
            }
            x /= 10;
        }
        
        if(fn > xmax)
        {
            xmax = fn;
        }
    }
    fout << xmax;
    return 0;
}