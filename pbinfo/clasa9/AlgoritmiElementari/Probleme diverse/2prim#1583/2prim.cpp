#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("2prim.in");
ofstream fout("2prim.out");

int main()
{
    int ciur[100];
    
    for(int i = 0; i < 100; i++)
    {
        ciur[i] = 1;
    }

    ciur[0] = 0;
    ciur[1] = 0;

    for(int i = 2; i < 100; i++)
    {
        if(ciur[i] == 1)
        {
            for(int j = 2 * i; j < 100; j += i)
            {
                ciur[j] = 0;
            }
        }
    }

    int n, x, cnt = 0;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        cnt += ciur[x % 100];
    }
    fout << cnt;
    return 0;
}