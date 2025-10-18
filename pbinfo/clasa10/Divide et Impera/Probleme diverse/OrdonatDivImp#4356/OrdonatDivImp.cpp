#include <iostream>
using namespace std;

int EsteCrescator(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 1, rezDr = 1;
    if(dr - st > 1)
    {
        rezSt = EsteCrescator(a, st, mij);
        rezDr = EsteCrescator(a, mij + 1, dr);
    }
    if(st == dr)
    {
        return 1;
    }
    if(rezSt == 0 || rezDr == 0)
    {
        return 0;
    }
    if(a[mij] < a[mij + 1])
    {
        return 1;
    }
    return 0;
}

int EsteDescrescator(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 1, rezDr = 1;
    if(dr - st > 1)
    {
        rezSt = EsteDescrescator(a, st, mij);
        rezDr = EsteDescrescator(a, mij + 1, dr);
    }
    if(st == dr)
    {
        return 1;
    }
    if(rezSt == 0 || rezDr == 0)
    {
        return 0;
    }
    if(a[mij] > a[mij + 1])
    {
        return 1;
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
    if(EsteCrescator(a, 0, n - 1) == 1)
    {
        cout << "strict crescator";
    }
    else if(EsteDescrescator(a, 0, n - 1) == 1)
    {
        cout << "strict descrescator";
    }
    else
    {
        cout << "neordonat";
    }
    return 0;
}