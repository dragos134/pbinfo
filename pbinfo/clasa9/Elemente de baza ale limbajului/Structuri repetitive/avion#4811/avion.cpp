#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("avion.in");
ofstream fout("avion.out");

int main()
{
    int c, nr, p, rand, loc;
    fin >> c >> nr >> p;
    if(c == 1)
    {
        while(p)
        {
            p--;
            fin >> rand >> loc;
            if(rand <= nr / 2)
            {
                fout << 1 << '\n';
            }
            else
            {
                fout << 2 << '\n';
            }
        }
    }
    if(c == 2)
    {
        int s = 0;
        while(p)
        {
            p--;
            fin >> rand >> loc;
            if(rand <= nr / 2)
            {
                s = s + 3 + rand;
            }
            else
            {
                s = s + 4 + nr - rand;
            }
            if(loc == 1 || loc == 6)
            {
                s += 3;
            }
            
            if(loc == 2 || loc == 5)
            {
                s += 2;
            }
            
            if(loc == 3 || loc == 4)
            {
                s += 1;
            }
        }
        fout << s;
    }
    return 0;
}