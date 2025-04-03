#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("bibinar.in");
ofstream fout("bibinar.out");

int main()
{
    system("cd");
    int n, x, s, nrCif, cpyX, i;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        cpyX = x;
        s = 0;
        nrCif = 0;
        while(x)
        {
            nrCif++;
            x /= 2;
        }
        x = cpyX;
        i = 0;
        while(x)
        {
            s = s + (x % 2) * (nrCif + i - 1);
            x /= 2;
            i++;
        }
        fout << s << ' ';
    }
    return 0;
}