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
        if(w < n)
        {
            if(w < p - 1)
            {
                sum = w;
            }
        }
        fout << sum;
    }
    if (c == 2)
    {
        fin >> x;
        if (w >= n - 1)
        {
            p = n;
            sum = n - 1;
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
            p = w + 1;
            if (w > x)
            {
                sum = w + x;
            }
            else
            {
                sum = 2 * w;
            }
        }
        fout << sum << ' ' << p;
    }
    return 0;
}