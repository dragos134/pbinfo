#include <iostream>
using namespace std;

int SumVec(int a[], int st, int dr)
{
    int rezSt = 0, rezDr = 0, mij = (st + dr) / 2;
    if(dr > st)
    {
        rezSt = SumVec(a, st, mij);
        rezDr = SumVec(a, mij + 1, dr);
        return rezSt + rezDr;
    }

    return a[st];
}

int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << SumVec(a, 0, n - 1);
    return 0;
}