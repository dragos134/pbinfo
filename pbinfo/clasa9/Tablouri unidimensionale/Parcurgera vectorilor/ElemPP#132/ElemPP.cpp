#include <fstream>

using namespace std;

ifstream fin("elempp.in");
ofstream fout("elempp.out");

int main()
{
    int n, x;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        int cpy_x = x;
        while(x >= 100)
        {
            x /= 10;
        }
        int i = 1;
        while(i * i < x)
        {
            i++;
        }
        if(i * i == x)
        {
            fout << cpy_x << ' ';
        }
    }
    return 0;
}