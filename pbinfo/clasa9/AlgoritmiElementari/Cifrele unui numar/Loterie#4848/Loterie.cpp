#include <fstream>

using namespace std;

ifstream fin("bac.in");
ofstream fout("bac.out");

int main()
{
    int x, min1 = 10000, min2 = 10000, max_nr = 999;
    while(fin >> x)
    {
        int y = x % 10 * 1000 + x / 10 % 10 * 100 + x / 100 % 10 * 10 + x / 1000;
        if(y < min1)
        {
            min2 = min1;
            min1 = y;
        }
        else if(y < min2 && y > min1)
        {
            min2 = y;
        }
        if(y > max_nr)
        {
            max_nr = y;
        }
    }

    if(min1 == min2 || min1 == max_nr)
    {
        fout << "nu exista";
    }
    else
    {
        fout << min1 << ' ' << max_nr << ' ' << min2;
    }

    return 0;
}