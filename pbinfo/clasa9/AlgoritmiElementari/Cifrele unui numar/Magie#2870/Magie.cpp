#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("magie.in");
ofstream fout("magie.out");

int main()
{
    int n, x, cnt = 0, maxc = 0;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        int s = 0;
        if (x == 2005)
        {
            cnt++;
        }
        while(x)
        {
            s += x % 10;
            x /= 10;
        }
        if(s > maxc)
        {
            maxc = s;
        }
    }

    fout << cnt << endl << maxc;
    return 0;
}