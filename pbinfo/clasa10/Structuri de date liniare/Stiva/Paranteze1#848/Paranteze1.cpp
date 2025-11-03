#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

ifstream fin("paranteze1.in");
ofstream fout("paranteze1.out");

int main()
{
    int n;
    char par[256];
    fin >> n;
    fin.getline(par, 256);
    while(n)
    {
        n--;
        fin.getline(par, 256);
        int cnt = 0, sz = strlen(par), i = 0;
        while(cnt >= 0 && i < sz)
        {
            if(par[i] == '(')
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            i++;
        }
        if(cnt != 0)
        {
            fout << 0 << '\n';
        }
        else
        {
            fout << 1 << '\n';
        }
    }
    return 0;
}