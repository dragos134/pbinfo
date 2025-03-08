#include <fstream>
using namespace std;
ifstream fin("bomboane5.in");
ofstream fout("bomboane5.out");

int main()
{
    short c;
    long long n, x, y;
    fin >> c >> n >> x >> y;
    if (c == 1)
    {
        fout << n / x;
    }
    if (c == 2)
    {
        int i = 2;
        while (n % i)
        {
            i++;
        }
        fout << n / i;
    }
    if (c == 3)
    {
        int rMin = n, xMin = 0, bMin = 0;
        while (n / y >= x)
        {
            if (n % y < rMin)
            {
                rMin = n % y;
                xMin = n / y;
                bMin = y;
            }
            y++;
        }
        fout << rMin << ' ' << xMin << ' ' << bMin;
    }
    return 0;
}
