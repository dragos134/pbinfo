#include <fstream>

using namespace std;

ifstream fin("secvmax.in");
ofstream fout("secvmax.out");

int main()
{
    int n, x, cnt = 0, s = 0, smax = 0, cntmax = 0, imax = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        if(x % 2 == 0)
        {
            cnt++;
            s += x;
        }
        else
        {
            if((cnt > cntmax) || (cnt == cntmax && s > smax))
            {
                cntmax = cnt;
                smax = s;
                imax = i;
            }
            cnt = 0;
            s = 0;
        }
    }

    fout << imax - cntmax + 1 << ' ' << imax;

    return 0;
}