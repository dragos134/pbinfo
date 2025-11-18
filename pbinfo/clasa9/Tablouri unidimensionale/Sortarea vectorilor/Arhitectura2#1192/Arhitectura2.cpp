#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("arhitectura2.in");
ofstream fout("arhitectura2.out");

int main()
{
    int n, a[100001], x, hmax = 0;
    fin >> n;
    for(int i = 0; i < 100001; i++)
    {
        a[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        if(x > hmax)
        {
            hmax = x;
        }
        a[x]++;
    }
    for(int i = hmax; i >= 0; i--)
    {
        for(int j = 0; j < a[i]; j++)
        {
            fout << i << ' ';
        }
    }
    
    fout << "\n0 ";

    int nr[3], k = 0;

    nr[0] = -1;
    nr[1] = -1;
    nr[2] = -1;

    while(k < 3)
    {
        for(int i = hmax; i >= 0 && k < 3; i--)
        {
            while(a[i] && k < 3)
            {
                a[i]--;
                nr[k] = i;
                k++;
            }
        }
    }

    for(int i = hmax; i >= 0; i--)
    {
        while(a[i])
        {
            fout << (nr[1] == ((nr[0] + nr[2]) / 2.)) << ' ';
            a[i]--;
            nr[0] = nr[1];
            nr[1] = nr[2];
            nr[2] = i;
        }
    }

    fout << (nr[1] == ((nr[0] + nr[2]) / 2.)) << ' ';
    
    nr[0] = nr[1];
    nr[1] = nr[2];

    fout << (nr[1] == (nr[0] / 2.));

    return 0;
}