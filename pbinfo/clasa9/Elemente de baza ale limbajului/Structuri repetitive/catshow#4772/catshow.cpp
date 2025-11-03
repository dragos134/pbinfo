#include <fstream>

using namespace std;

ifstream fin("catshow.in");
ofstream fout("catshow.out");

int main()
{
    int n, x, min_col = 100;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        int s = 0;
        if(x >= 1)
        {
            s += 15;
        }
        if(x >= 2)
        {
            s += 9;
        }
        if(x >= 3)
        {
            s = s + 4 * (x - 2);
        }
        if(s / 10 < min_col)
        {
            min_col = s / 10;
        }
    }
    fout << min_col;
    return 0;
}