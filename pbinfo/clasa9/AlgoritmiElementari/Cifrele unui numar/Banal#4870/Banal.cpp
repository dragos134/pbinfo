#include <iostream>

using namespace std;

int main()
{
    int n, k = 1, hk = 0, lk = 10, ok = 1, cpyn;
    cin >> n;
    cpyn = n;
    while(n)
    {
        if(n % 10 == n / 10 % 10)
        {
            k++;
        }
        else
        {
            if(k > hk)
            {
                hk = k;
            }
            if(k < lk && k > 1)
            {
                lk = k;
            }
            k = 1;
        }
        n /= 10;
    }

    n = cpyn;
    k = 1;
    while(n)
    {
        if(n % 10 == n / 10 % 10)
        {
            k++;
        }
        else
        {
            if(!(hk % k == 0 && k != 1)) // hk % k != 0 || k == 1
            {
                ok = 0;
                break;
            }
            k = 1;
        }

        n /= 10;
    }

    if(ok)
    {
        cout << lk;
    }
    else
    {
        cout << "nenorocos";
    }

    return 0;
}