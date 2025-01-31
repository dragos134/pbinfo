#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nrasoc.in");
ofstream fout("nrasoc.out");

struct cif
{
    short cifra;
    bool scoasa;
};

int main()
{
    short n = 0;
    bool isOk = false;
    cif v[80];
    while(fin >> v[n].cifra)
    {
        v[n].scoasa = false;
        n++;
    }

    for(int i = 2; i < n; i++)
    {
        int xlast2 = v[i - 2].cifra;
        int xlast1 = v[i - 1].cifra;
        int x = v[i].cifra;
        if(x > xlast2 && !isOk)
        {
            isOk = true;
            v[i - 2].scoasa = 1;
            v[i - 1].scoasa = 1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(v[i].scoasa == false)
        {
            fout << v[i].cifra << ' ';
        }
    }

    return 0;
}