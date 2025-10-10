#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fmbsorted.in");
ofstream fout("fmbsorted.out");

int FMBSorted(int a[2001][2001], int n)
{
    int valMax = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i][1] == 1)
        {
            return n;
        }
        if(a[i][n] == 0)
        {
            continue;
        }

        if(a[i][n - valMax] == 0)
        {
            continue;
        }

        int st = 1, dr = n, mij;
        while(st <= dr)
        {
            mij = (dr + st) / 2;
            if(a[i][mij] == 0 && a[i][mij + 1] == 1)
            {
                cout << i << ' ' << n - mij << endl;
                if(n - mij > valMax)
                {
                    valMax = n - mij;
                }
                break;
            }
            if(a[i][mij] == 1 && a[i][mij - 1] == 0)
            {
                cout << i << ' ' << n - mij + 1 << endl;
                if(n - mij + 1 > valMax)
                {
                    valMax = n - mij + 1;
                }
                break;
            }
            if(a[i][mij] == 0)
            {
                st = mij;
            }
            if(a[i][mij] == 1)
            {
                dr = mij;
            }
        }
    }

    return valMax;
}

int main()
{
    int a[2001][2001], n;
    fin >> n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <=n; j++)
        {
            fin >> a[i][j];
        }
    }
    cout << FMBSorted(a, n);
    return 0;
}