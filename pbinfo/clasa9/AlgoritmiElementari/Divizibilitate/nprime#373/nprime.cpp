#include <iostream>

using namespace std;

bool este_prim(int n)
{
    if (n == 0 || n == 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
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
    long long i = 3;
    cin >> n;
    n--;
    cout << 2 << ' ';
    while(n)
    {
        if(este_prim(i))
        {
            n--;
            cout << i << ' ';
        }
        i += 2;
    }
    return 0;
}