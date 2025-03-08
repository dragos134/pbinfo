#include <iostream>

using namespace std;

int main()
{
    long long n, cpyn, cif = 0, c = 0, pp = 1, pk = 1, pz = 1;
    int p, k;
    bool ok = true;

    cin >> n >> p >> k;
    cpyn = n;

    while(cpyn)
    {
        cif++;
        pz *= 10;
        cpyn /= 10;
    }
    pz /= 10;

    if(cif < k + p)
    {
        n = 0;
        k = 0;
        p = 0;
        ok = false;
    }

    while(p)
    {
        pp *= 10;
        p--;
    }

    while(k)
    {
        c = c * 10 + n % 10;
        pk *= 10;
        n /= 10;
        k--;
    }

    while(n >= pp)
    {
        c = pk * (n % 10) + c;
        pk *= 10;
        n /= 10;
    }

    while(n)
    {
        c = c + (n % 10) * pz;
        pz /= 10;
        n /= 10;
    }
    
    if(ok)
        cout << c;
    else
        cout << "imposibil";

    return 0;
}