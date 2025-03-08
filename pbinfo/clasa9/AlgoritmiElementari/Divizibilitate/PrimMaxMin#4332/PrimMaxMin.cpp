#include <iostream>
using namespace std;

bool este_prim(int n)
{
    if(n < 2)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return false;
    }
    for(int d = 3; d * d <= n; d += 2)
    {
        if(n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, x, pMin = 1000000000, pMax = -1;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(este_prim(x))
        {
            if(x < pMin)
            {
                pMin = x;
            }
            if(x > pMax)
            {
                pMax = x;
            }
        }
    }

    cout << pMin + pMax;
    return 0;
}