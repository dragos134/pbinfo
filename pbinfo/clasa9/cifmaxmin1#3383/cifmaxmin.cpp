#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("cifmaxmin.in");
ofstream fout("cifmaxmin.out");

int main()
{
    long long n, x, c_par = 0, c_impar = 0, cmin, cmax, par_max = 9, impar_min = 100;
    int este_impar;
    fin >> n;
    while (n)
    {
        n--;
        fin >> x;
        este_impar = x % 2;
        cmin = x % 10;
        cmax = x % 10;
        x /= 10;
        while (x)
        {
            if (x % 10 < cmin)
            {
                cmin = x % 10;
            }

            if (x % 10 > cmax)
            {
                cmax = x % 10;
            }
            x /= 10;
        }

        if (este_impar)
        {
            c_impar++;
            if (10 * cmin + cmax < impar_min)
            {
                impar_min = 10 * cmin + cmax;
            }
        }
        else
        {
            c_par++;
            if (10 * cmax + cmin > par_max)
            {
                par_max = 10 * cmax + cmin;
            }
        }
    }

    fout << par_max << ' ' << c_par << ' ' << impar_min << ' ' << c_impar;
    return 0;
}