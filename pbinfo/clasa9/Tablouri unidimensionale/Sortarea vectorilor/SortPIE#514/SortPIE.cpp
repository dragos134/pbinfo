#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b != 0)
    {
        return gcd(b, a % b);
    }
    return a;
}

int main()
{
    int n, a[1000], b[1000], k = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(gcd(a[i], a[n - 1]) == 1)
        {
            b[k] = a[i];
            k++;
        }
    }

    for(int i = 0; i < k - 1; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            if(b[i] < b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for(int i = 0; i < k; i++)
    {
        cout << b[i] << ' ';
    }
    return 0;
}