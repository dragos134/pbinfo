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

int MaxPrim(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 0, rezDr = 0;
    if(dr > st)
    {
        rezSt = MaxPrim(a, st, mij);
        rezDr = MaxPrim(a, mij + 1, dr);
    }
    else
    {
        if(EstePrim(a[st]))
        {
            return a[st];
        }
        return 0;
    }
    if(rezSt > rezDr)
    {
        return rezSt;
    }
    return rezDr;
    
}

int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << MaxPrim(a, 0, n - 1);
    return 0;
}