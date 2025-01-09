#include <iostream>
using namespace std;

bool este_palindrom(long long n)
{
    long long og = 0, cpyn = n;
    while(n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }
    return og == cpyn;
}

int main()
{
    long long n, og = 0, sufmax = 0, prefmax = 0;
    long long p = 10;
    cin >> n;
    while((p / 10) <= n)
    {
        int suf = n % p;
        og = og * 10 + (n / (p / 10)) % 10;
        if(este_palindrom(suf))
        {
            if(suf > sufmax)
            {
                sufmax = suf;
            }
        }
        p *= 10;
    }
    p = 10;
    while((p / 10) <= og)
    {
        int pref = og % p;
        if(este_palindrom(pref))
        {
            if(pref > prefmax)
            {
                prefmax = pref;
            }
        }
        p *= 10;
    }

    cout << prefmax << ' ' << sufmax;
    return 0;
}