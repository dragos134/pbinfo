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
    long long n, i;
    cin >> n;
    i = n + 1;
    while(!(este_prim(i)))
    {
        i++;
    }

    cout << i;
    return 0;
}