#include <iostream>

using namespace std;

int ToateEgale(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 1, rezDr = 1;
    if(dr - st > 1)
    {
        rezSt = ToateEgale(a, st, mij);
        rezDr = ToateEgale(a, mij + 1, dr);
    }
    if(st == dr)
    {
        return 1;
    }

    if(!(rezSt && rezDr))
    {
        return 0;
    }

    return a[mij] == a[mij + 1];
}

int main()
{
    int a[501], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(ToateEgale(a, 0, n - 1))
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}