#include <fstream>
using namespace std;

ifstream fin("lowmem.in");
ofstream fout("lowmem.out");

int main()
{
    int k, n, x, ult, sir = 0, cnt = 0;
    fin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        fin >> ult;
    }
    fin.close();
    fin.open("lowmem.in");
    fin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        if(x <= ult)
        {
            sir++;
        }
        else
        {
            if(sir >= k)
            {
                cnt += sir - k + 1;
            }
            sir = 0;
        }
    }
    if(sir >= k)
    {
        cnt += sir - k + 1;
    }
    fout << cnt;
    return 0;
}