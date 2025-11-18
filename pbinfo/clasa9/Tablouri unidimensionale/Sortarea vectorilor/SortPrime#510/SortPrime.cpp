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
    int n, a[1000], k = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(este_prim(a[i]))
        {
            a[k] = a[i];
            k++;
        }
    }

    for(int i = 0; i < k - 1; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < k; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}