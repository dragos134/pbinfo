#include <iostream>

using namespace std;

int EstePrim(int n)
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

int ArePrime(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if(dr > st)
    {
        return ArePrime(a, st, mij) || ArePrime(a, mij + 1, dr);
    }
    return EstePrim(a[st]);
}

int main()
{
    int a[200], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(ArePrime(a, 0, n - 1))
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}