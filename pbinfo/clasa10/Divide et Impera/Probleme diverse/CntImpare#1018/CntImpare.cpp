#include <iostream>

using namespace std;

int CntImp(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if(dr > st)
    {
        return CntImp(a, st, mij) + CntImp(a, mij + 1, dr);
    }
    return (a[st] % 2 == 1);
}

int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << CntImp(a, 0, n - 1);
    return 0;
}