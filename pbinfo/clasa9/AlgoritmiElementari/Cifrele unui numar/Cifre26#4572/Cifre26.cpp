#include <iostream>

using namespace std;

int main()
{
    int n, nr = 0, p = 1;
    bool ok = false;
    cin >> n;
    if(n == 0)
    {
        ok = true;
    }
    while(n)
    {
        int uc = n % 10;
        if(uc <= 2 || uc >= 6)
        {
            ok = true;
            nr = p * uc + nr;
            p *= 10;
        }
        n /= 10;
    }
    if(ok)
        cout << nr;
    else
        cout << -1;
    return 0;
}