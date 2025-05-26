#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("robot5.in");
ofstream fout("robot5.out");

int main()
{
    int n, w, p, x, c, sum = 0;
    fin >> c >> n >> w;
    if (c == 1)
    {
        fin >> p >> x;
        int curr = 0;
        if (p <= w + 1)
        {
            sum = p - 1;
            curr = w - p + 1;
            if (curr + x < w)
            {
                sum += curr + x;
            }
            else
            {
                sum += w;
            }
        }
        else
        {
            sum = w;
        }
        fout << sum;
    }
    if (c == 2)
    {
        fin >> x;
        if (w > n)
        {
            p = n;
            sum = p - 1;
            int curr = w - p + 1;
            if (curr + x < w)
            {
                sum += curr + x;
            }
            else
            {
                sum += w;
            }
        }
        else
        {
            if (w - x > 0)
            {
                p = w - x + 1;
                sum = w + x;
            }
            else
            {
                p = w + 1;
                sum = 2 * w;
            }
        }
        fout << sum << ' ' << p;
    }
    return 0;
}