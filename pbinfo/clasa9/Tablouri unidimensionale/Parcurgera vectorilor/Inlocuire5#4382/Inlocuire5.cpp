#include <iostream>

using namespace std;

bool is_prime(int n)
{
    if (n < 2)
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
    for (int d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, x;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        if (is_prime(x))
        {
            cout << 0 << ' ';
        }
        else
        {
            cout << x << ' ';
        }
    }
    return 0;
}