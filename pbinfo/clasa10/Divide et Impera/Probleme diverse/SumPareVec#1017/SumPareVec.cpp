#include <iostream>
using namespace std;

int SumPareVec(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if(dr > st)
    {
        return SumPareVec(a, st, mij) + SumPareVec(a, mij + 1, dr);
    }
    if(a[st] % 2 == 0)
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
    cout << SumPareVec(a, 0, n - 1);
    return 0;
}