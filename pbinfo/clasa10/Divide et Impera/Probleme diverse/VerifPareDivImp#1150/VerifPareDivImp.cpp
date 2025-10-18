#include <iostream>

using namespace std;

int ExistaImp(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    if(dr > st)
    {
        return ExistaImp(a, st, mij) || ExistaImp(a, mij + 1, dr);
    }
    return (a[st] % 2 == 1);
}

int main()
{
    int a[100], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(ExistaImp(a, 0, n - 1))
    {
        cout << "NU";
    }
    else
    {
        cout << "DA";
    }
    return 0;
}