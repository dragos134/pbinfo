#include <iostream>

using namespace std;

int Maxim(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 0, rezDr = 0;
    if(dr > st)
    {
        rezSt = Maxim(a, st, mij);
        rezDr = Maxim(a, mij + 1, dr);
    }
    if(st == dr)
    {
        return a[st];
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
    cout << Maxim(a, 0, n - 1);
    return 0;
}