#include <iostream>

using namespace std;

int main()
{
    int n;
    int a = 0, b = 0, c = 0, d = 0, e = 1, f = 0;
    cin >> n;
    f = n % 10;
    while(n)
    {
        int cif = n % 10;
        a += cif * cif;
        if(cif % 2)
        {
            b += cif;
        }
        if(cif % 3 == 0)
        {
            c += cif;
        }
        if(cif > 5)
        {
            d++;
        }
        if(cif)
        {
            e *= cif;
        }
        if(n < 10)
        {
            f += n;
        }
        n /= 10;
    }
    cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << ' ' << f;
    return 0;
}