#include <iostream>

using namespace std;

int main()
{
    long long n;
    int pMax = 0;
    bool ok = false;

    cin >> n;

    if(n == 0)
    {
        ok = true;
        pMax = 0;
    }

    while(n)
    {
        short uCif = n % 10;
        if(uCif % 2 == 0)
        {
            ok = true;
            if(uCif > pMax)
            {
                pMax = uCif;
            }
        }
        n /= 10;
    }

    if(ok)
    {
        cout << pMax;
    }
    else
    {
        cout << 10;
    }
    return 0;
}