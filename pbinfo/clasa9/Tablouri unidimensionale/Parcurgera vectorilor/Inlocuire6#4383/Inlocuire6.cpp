#include <iostream>
#include <vector>
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
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (is_prime(v[i]))
        {
            v[i] = 0;
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}