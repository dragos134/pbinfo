#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

int main()
{
    int n, i, cnt = 0;
    fin >> n;
    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            cnt += 2;
        }
    }
    if(i * i == n)
    {
        cnt++;
    }
    fout << cnt;
    return 0;
}