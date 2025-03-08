#include <iostream>
using namespace std;

bool este_prim(int n)
{
    if(n == 0 || n == 1)
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

    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    long long s = 0;
    cin >> n;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(!este_prim(i))
            {
                s += i;
            }
            if(!este_prim(n / i) && i != n / i)
            {
                s += n / i;
            }
        }
    }

    cout << s;

    return 0;
}