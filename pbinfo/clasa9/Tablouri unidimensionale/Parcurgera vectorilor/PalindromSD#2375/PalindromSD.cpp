#include <fstream>

using namespace std;

ifstream fin("palindromsd.in");
ofstream fout("palindromsd.out");

bool este_palindrom(int n)
{
    int ogl = 0, cpy_n = n;
    while(n)
    {
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }

    return cpy_n == ogl;
}

int main()
{
    int n = 0, x, a[1000], ok = 0;
    while(fin >> x)
    {
        a[n] = x;
        n++;
    }

    int i = 0, j = n - 1, st = 1;
    while(i <= j)
    {
        if(st == 1)
        {
            bool ep = false;
            while(i <= j && !ep)
            {
                ep = este_palindrom(a[i]);
                i++;
            }

            if(ep == true)
            {
                fout << a[i - 1] << ' ';
                ok = 1;
            }
            st = 0;
        }

        else
        {
            bool ep = false;
            while(j >= i && !ep)
            {
                ep = este_palindrom(a[j]);
                j--;
            }

            if(ep == true)
            {
                fout << a[j + 1] << ' ';
            }

            st = 1;
        }
    }

    if(!ok)
    {
        fout << -1;
    }

    return 0;
}