#include <fstream>

using namespace std;

ifstream fin("produsmaxim.in");
ofstream fout("produsmaxim.out");

int main()
{
    int n;
    while(fin >> n)
    {
        fout << n << ' ' << n / 3 << ' ';
        if(n % 3 == 0)
        {
            fout << n / 3 << ' ' << n / 3;
        }
        if(n % 3 == 1)
        {
            fout << n / 3 << ' ' << n / 3 + 1;
        }
        if(n % 3 == 2)
        {
            fout << n / 3 + 1 << ' ' << n / 3 + 1;
        }
        fout << '\n';
    }
    return 0;
}