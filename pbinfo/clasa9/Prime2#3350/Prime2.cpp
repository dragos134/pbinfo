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

    if (n % 2 == 0)
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
    int n, cnt = 0;
    long long x;

    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(este_prim(x))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}