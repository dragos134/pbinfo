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

int SumPrim(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if(dr > st)
    {
        return SumPrim(a, st, mij) + SumPrim(a, mij + 1, dr);
    }
    if(EstePrim(a[st]))
    {
        return a[st];
    }
    return 0;
}

int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << SumPrim(a, 0, n - 1);
    return 0;
}