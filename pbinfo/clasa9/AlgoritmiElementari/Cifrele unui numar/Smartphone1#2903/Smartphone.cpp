#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("smartphone1.in");
ofstream fout("smartphone1.out");

bool vecin(short cif, short v)
{
    if(cif == 1)
    {
        return v == 2 || v == 4 || v == 5;
    }

    if(cif == 2)
    {
        return v != 7 && v != 8 && v != 9  && v != 2;
    }

    if(cif == 3)
    {
        return v == 2 || v == 5 || v == 6;
    }

    if(cif == 4)
    {
        return v != 3 && v != 6 && v != 9 && v != 4;
    }

    if(cif == 5)
    {
        return v != 5;
    }

    if(cif == 6)
    {
        return v != 1 && v != 4 && v != 7 && v != 6;
    }

    if(cif == 7)
    {
        return v == 4 || v == 5 || v == 8;
    }

    if(cif == 8)
    {
        return v != 1 && v != 2 && v != 3 && v != 8;
    }

    if(cif == 9)
    {
        return v == 6 || v == 5 || v == 8;
    }

    return false;
}

int main()
{
    short n, cnt = 0;
    int x;
    bool ok;
    fin >> n;
    while(n)
    {
        n--;

        fin >> x;
        ok = true;
        while(x > 9)
        {
            if(!vecin(x % 10, x / 10 % 10))
            {
                ok = false;
                break;
            }
            x /= 10;
        }
        if(ok)
        {
            cnt++;
        }
    }
    fout << cnt;
    return 0;
}