#include <iostream>

using namespace std;

int main()
{
    long long n, on = 0, cpyn;
    bool ok = true;
    int cif = 0;

    cin >> n;
    cpyn = n;
    if(cif % 2 == 1)
    {
        ok = false;
    }
    while(n)
    {
        on = 10 * on + n % 10;
        cif++;
        n /= 10;
    }

    n = cpyn;

    while(n)
    {
        if(n % 10 + on % 10 != 9)
        {
            ok = false;
            break;
        }
        n /= 10;
        on /= 10;
    }

    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}