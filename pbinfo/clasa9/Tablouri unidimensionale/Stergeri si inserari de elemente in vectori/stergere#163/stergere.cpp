#include <iostream>

using namespace std;

int este_prim(int n)
{
    if(n < 2)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }

    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, x;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(!(este_prim(x)))
        {
            cout << x << ' ';
        }
    }
    return 0;
}