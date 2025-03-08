#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("fulger.in");
ofstream fout("fulger.out");

int main()
{
    short n, cnt = 0;
    int x;
    long long p, res;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        int cpyx = x;
        p = 1;
        while(cpyx)
        {
            p *= 10;
            cpyx /= 10;
        }
        res = p - x - 1;
        fout << res << ' ';
        if(res % 100 == 10)
        {
            cnt++;
        }
    }
    fout << endl << cnt;
    return 0;
}