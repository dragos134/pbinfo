#include <fstream>

using namespace std;

ifstream fin("sir.in");
ofstream fout("sir.out");

int main()
{
    int c, n, a[100000], max_nr = 0, max_st = 0, max_dr = 0;
    fin >> c;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        if(a[i] >= max_nr)
        {
            max_nr = a[i];
            max_dr = i;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == max_nr)
        {
            max_st = i;
            break;
        }
    }

    if(c == 1)
    {
        fout << max_dr + 1;
    }

    if(c == 2)
    {
        max_nr = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > max_nr)
            {
                max_nr = a[i];
                fout << i + 1 << ' ';
            }
        }
    }

    if(c == 3)
    {
        int s = 0;
        for(int i = max_st + 1; i < max_dr; i++)
        {
            s += max_nr - a[i];
        }
        fout << s;
    }

    return 0;
}