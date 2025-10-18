#include <iostream>
using namespace std;

int ExistaImp(int a[], int st, int dr)
{
    int mij = (st + dr) / 2, rezSt = 0, rezDr = 0;
    if(dr > st)
    {
        rezSt = ExistaImp(a, st, mij);
        rezDr = ExistaImp(a, mij + 1, dr);
    }
    if(rezSt == 1 || rezDr == 1)
    {
        return 1;
    }

    if(a[st] % 2 == 1)
    {
        return 1;
    }

    return 0;
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
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}