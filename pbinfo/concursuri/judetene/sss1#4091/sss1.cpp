#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("sss.in");
ofstream fout("sss.out");
int main()
{
    int c, n, x, k, l, s = 0, smax = 0;
    fin >> c >> n;
    if(c == 1)
    {
        fin >> x;
        int cpy = x;
        while(x % 10 == 0)
        {
            x /= 10;
        }
        k = x % 10;
        for(int i = 1; i < n - k; i++)
        {
            fin >> x;
        }
        cout << k << endl;

        if(k / n == 1)
        {
            s += cpy;
        }

        for(int i = n - k; i < n - k / n; i++)
        {
            fin >> x;
            cout << x << ' ';
            s += x;
        }

        fout << s;
    }
    else
    {
        l = sqrt(2 * n + 1 / 4);
        for(int i = 0; i < l; i++)
        {
            s = 0;
            for(int j = l - i; j > 0; j--)
            {
                fin >> x;
                s += x;
            }
            if (s > smax)
            {
                smax = s;
            }
        }
        fout << smax;
    }

    return 0;
}