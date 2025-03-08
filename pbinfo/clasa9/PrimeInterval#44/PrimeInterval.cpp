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
    int a, b, cnt = 0;
    cin >> a >> b;
    if (a > b)
    {
        swap(a, b);
    }
    for(int i = a; i <= b; i++)
    {
        if(este_prim(i))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}