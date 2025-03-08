#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("grupapregatitoare.in");
ofstream fout("grupapregatitoare.out");

int main()
{
    int n, p, x1, x2, s = 0, dif = 0, difmin = 1002, x1l = 0, x2l = 0, x1pr = 0, x2pr = 0, l = 1, lmax = 0, lpr = 0;
    bool seDivide = false, primulsir = true;
    fin >> n >> p;
    for(int i = 0; i < n; i++)
    {
        fin >> x1 >> x2;
        if (max(x1, x2) % p == 0)
        {
            seDivide = true;
        }
        s += max(x1, x2);
        if ((x1 * x2) % p == 0)
        {
            dif = max(x1, x2) - min(x1, x2);
            if(dif < difmin)
            {
                difmin = dif;
            }
        }
        
        if(i == 0)
        {
            x1pr = x1;
            x2pr = x2;
            x1l = x1;
            x2l = x2;
        }
        else
        {
            if((x1 + x1l) % 2 == 0 || (x1 + x2l) == 0 || (x2 + x1l) % 2 == 0 || (x2 + x2l) % 2 == 0)
            {
                l++;
            }
            else
            {
                if(primulsir)
                {
                    lpr = l;
                    primulsir = false;
                }
                if(l > lmax)
                {
                    lmax = l;
                }
                l = 1;
            }
        }

        x1l = x1;
        x2l = x2;
    }
    if((x1pr + x1l) % 2 == 0 || (x1pr + x2l) == 0 || (x2pr + x1l) % 2 == 0 || (x2pr + x2l) % 2 == 0)
    {
        l += lpr + 1;
    }
    if(l > lmax)
    {
        lmax = l;
    }
    if(lmax > n)
    {
        lmax = n;
    }



    if (seDivide)
        fout << s << "\n";
    else
    {
        fout << s - difmin << "\n";
    }
    fout << lmax;


    return 0;
}