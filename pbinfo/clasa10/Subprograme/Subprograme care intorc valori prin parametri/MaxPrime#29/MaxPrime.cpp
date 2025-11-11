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

void sub(int n, int &a, int &b)
{
    int i = n - 1;
    while(!este_prim(i))
    {
        i--;
    }
    a = i;
    i--;
    while(!este_prim(i))
    {
        i--;
    }
    b = i;
}

int main()
{
    int a, b;
    sub(28, a, b);
    cout << a << ' ' << b;
    return 0;
}