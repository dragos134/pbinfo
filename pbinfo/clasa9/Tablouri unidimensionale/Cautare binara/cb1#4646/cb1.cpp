#include <fstream>

using namespace std;

ifstream fin("cb1.in");
ofstream fout("cb1.out");

int main()
{
    int n, a[50000], rasp[200000], q;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    fin >> q;
    for(int i = 0; i < q; i++)
    {
        int c, x;
        fin >> c >> x;

        int st = 0, dr = n - 1, gasit = 0;

        
        if((c == 1 && x >= a[n - 1]) || (c == 2 && x < a[0]))
        {
            rasp[i] = n;
        }
        else if((c == 1 && x < a[0]) || (c == 2 && x >= a[n - 1]))
        {
            rasp[i] = 0;
        }
        else if(c == 1)
        {
            while(st <= dr)
            {
                int mij = (st + dr) / 2;
                if(x >= a[mij])
                {
                    gasit = mij;
                    st = mij + 1;
                }
                else
                {
                    dr = mij - 1;
                }
            }
            rasp[i] = gasit + 1;
        }
        else if(c == 2)
        {
            while(st <= dr)
            {
                int mij = (st + dr) / 2;
                if(x < a[mij])
                {
                    gasit = mij;
                    dr = mij - 1;
                }
                else
                {
                    st = mij + 1;
                }
            }
            rasp[i] = n - gasit;
        }
        else
        {
            while(st <= dr)
            {
                int mij = (st + dr) / 2;
                if(x >= a[mij])
                {
                    gasit = mij;
                    st = mij + 1;
                }
                else
                {
                    dr = mij - 1;
                }
            }
            rasp[i] = 0;
            while(gasit >= 0 && a[gasit] == x)
            {
                rasp[i]++;
                gasit--;
            }
        }
    }

    for(int i = 0; i < q; i++)
    {
        fout << rasp[i] << '\n';
    }
    return 0;
}